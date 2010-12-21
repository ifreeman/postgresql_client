#PATH_ECPGLIB:=`find /usr/include/ -name 'ecpglib.h'`
#PATH_ECPGLIB_COUNT:=`find /usr/include/ -name 'ecpglib.h' | wc -c`
#PATH_COUNT:=$$(($(PATH_ECPGLIB_COUNT)-9))
NAME := postgresql_client
VERSION := $(shell date +%Y%m%d)
SHELL = /bin/sh

CC := gcc
CXX := g++

INSTALL := install
DOCS := README

ECPGLIB_INCLUDE:=$(shell find /usr/include/ -name 'ecpglib.h')
ECPGLIB_INC_DIR:=$(dir $(ECPGLIB_INCLUDE))

SRCDIR := $(shell pwd)

BUILDDIR  ?= $(SRCDIR)/build
BININST   ?= $(SRCDIR)/$(NAME)/bin/
DOCINST   ?= $(SRCDIR)/$(NAME)/doc/
.PHONY: all

all: postgresql_client



postgresql_client: postgresql_client.c
	gcc $^ -I $(ECPGLIB_INC_DIR) -lecpg -o $@ -Wextra -g
	mv $@ $(BUILDDIR)

postgresql_client.c: postgresql_client.pgc
	mkdir $(BUILDDIR)
	ecpg $<
	cp $@ $(BUILDDIR)

.PHONY: install

install: all
	mkdir -p $(BININST)
	mkdir -p $(DOCINST)
	$(INSTALL) -m 755 $(BUILDDIR)/$(NAME) $(BININST)
	$(INSTALL) -m 644 $(SRCDIR)/$(DOCS) $(DOCINST)

.PHONY: check

.PHONY: tar
tar:
	mkdir -p $(NAME)-$(VERSION)
	cp -a Makefile postgresql_client.pgc README $(NAME)-$(VERSION)
	tar -cvf $(NAME)-$(VERSION).tar $(NAME)-$(VERSION)
	rm -r $(NAME)-$(VERSION)

.PHONY: dist

dist: tar
	gzip -9 $(NAME)-$(VERSION).tar

.PHONY: clean

clean:
	rm -fr $(BUILDDIR)
	rm -f $(NAME).c
	
