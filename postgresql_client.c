/* Processed by ecpg (4.6.0) */
/* These include files are added by the preprocessor */
#include <ecpglib.h>
#include <ecpgerrno.h>
#include <sqlca.h>
/* End of automatic include section */

#line 1 "postgresql_client.pgc"
#include <sqlca.h>
#include <stdio.h>
#include <string.h>

//EXEC SQL INCLUDE sqlca;

void ShowTableList( );


void ShowAll() {
    /* exec sql begin declare section */
         
         
         
         
         
         
         
         
         
         
    
#line 12 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 13 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 14 "postgresql_client.pgc"
 long size ;
 
#line 15 "postgresql_client.pgc"
 char category [ 50 ] ;
 
#line 16 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 17 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 18 "postgresql_client.pgc"
 char organization [ 150 ] ;
 
#line 19 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
 
#line 20 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
 
#line 21 "postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 22 "postgresql_client.pgc"


    
    /* declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , dev . email , dev . fio , dev . organization , dep . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location */
#line 26 "postgresql_client.pgc"

    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , dev . email , dev . fio , dev . organization , dep . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location", ECPGt_EOIT, ECPGt_EORT);}
#line 28 "postgresql_client.pgc"

    printf("software_name |\t description |\t size |\t category |\t e-mail |\t fio |\t organization |\t pkg_name |\t pkg_location |\t type_location\n");
    while(1)
    {
        
        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(description),(long)255,(long)1,(255)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 33 "postgresql_client.pgc"

        
        if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
        printf("%s \t %s \t %ld \t %s \t %s \t %s \t %s \t %s \t %s \t %s\n", software_name, description, size, category, email, fio, organization, pkg_name, pkg_location, type_location );
    }
    
    printf("\n\n");
    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_", ECPGt_EOIT, ECPGt_EORT);}
#line 41 "postgresql_client.pgc"

}


void ShowTable1() {
   
	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 48 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 49 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 50 "postgresql_client.pgc"
 long size ;
 
#line 51 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 52 "postgresql_client.pgc"


	    
	/* declare cursor_1 cursor for select software_name , description , size , category from software_info */
#line 56 "postgresql_client.pgc"

	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_1 cursor for select software_name , description , size , category from software_info", ECPGt_EOIT, ECPGt_EORT);}
#line 58 "postgresql_client.pgc"

	printf("software_name |\t description |\t size |\t category \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_1", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(description),(long)255,(long)1,(255)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 62 "postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \t %ld \t %s \n", software_name, description, size, category );
	}
	    
	printf("\n\n");
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_1", ECPGt_EOIT, ECPGt_EORT);}
#line 70 "postgresql_client.pgc"

	
	
	//EXEC SQL DEALLOCATE PREPARE name;
}


void ShowTable2() {
    /* exec sql begin declare section */
         
         
        
    
#line 79 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 80 "postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 82 "postgresql_client.pgc"


    
    /* declare cursor_2 cursor for select software_name , email from software_and_developers */
#line 86 "postgresql_client.pgc"

    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_2 cursor for select software_name , email from software_and_developers", ECPGt_EOIT, ECPGt_EORT);}
#line 88 "postgresql_client.pgc"

    printf("software_name |\t e-mail \n");
    while(1) {
        
        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_2", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 92 "postgresql_client.pgc"

        
        if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
        printf("%s \t %s \n", software_name, email);
    }
    
    printf("\n\n");
    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_2", ECPGt_EOIT, ECPGt_EORT);}
#line 100 "postgresql_client.pgc"


}


void ShowTable3() {
   
	/* exec sql begin declare section */
		 
		 
		 
	
#line 108 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 109 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 110 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 111 "postgresql_client.pgc"


	    
	/* declare cursor_3 cursor for select fio , email , organization from developers */
#line 115 "postgresql_client.pgc"

	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_3 cursor for select fio , email , organization from developers", ECPGt_EOIT, ECPGt_EORT);}
#line 117 "postgresql_client.pgc"

	printf("fio |\t e-mail |\t organization \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_3", ECPGt_EOIT, 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 121 "postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;       
		printf("%s \t %s \t %s \n", fio, email, organization);
	}
	    
	printf("\n\n");
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_3", ECPGt_EOIT, ECPGt_EORT);}
#line 129 "postgresql_client.pgc"

}


void ShowTable4() {
	/* exec sql begin declare section */
		 
		 
	
#line 135 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 136 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 137 "postgresql_client.pgc"


      
	/* declare cursor_4 cursor for select software_name , pkg_name from depend */
#line 141 "postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_4 cursor for select software_name , pkg_name from depend", ECPGt_EOIT, ECPGt_EORT);}
#line 143 "postgresql_client.pgc"

	printf("software_name |\t pkg_name \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_4", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 147 "postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \n", software_name, pkg_name);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_4", ECPGt_EOIT, ECPGt_EORT);}
#line 155 "postgresql_client.pgc"


}


void ShowTable5() {
	/* exec sql begin declare section */
		 
		 
	
#line 162 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 163 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 164 "postgresql_client.pgc"


      
	/* declare cursor_5 cursor for select software_name , pkg_location from order_pkg */
#line 168 "postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_5 cursor for select software_name , pkg_location from order_pkg", ECPGt_EOIT, ECPGt_EORT);}
#line 170 "postgresql_client.pgc"

	printf("software_name |\t pkg_location \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_5", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 174 "postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \n", software_name, pkg_location);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_5", ECPGt_EOIT, ECPGt_EORT);}
#line 182 "postgresql_client.pgc"


}


void ShowTable6() {
	/* exec sql begin declare section */
		 
		 
	
#line 189 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
 
#line 190 "postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 191 "postgresql_client.pgc"


      
	/* declare cursor_6 cursor for select pkg_location , type_location from methods */
#line 195 "postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_6 cursor for select pkg_location , type_location from methods", ECPGt_EOIT, ECPGt_EORT);}
#line 197 "postgresql_client.pgc"

	printf("pkg_location |\t type_location \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_6", ECPGt_EOIT, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 201 "postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \n", pkg_location, type_location);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_6", ECPGt_EOIT, ECPGt_EORT);}
#line 209 "postgresql_client.pgc"


}


void Show() {

	printf("\nChoose one table:");
	ShowTableList();
	printf("9. For show all tables \n");
	printf("0. For cancel mod \n");
	int choose = 0;
	scanf("%d", &choose);
	switch(choose) {
		case 1: { 
			ShowTable1();
			break;
		} 
		case 2: { 
			ShowTable2();
			break;
		} 
		case 3: { 
			ShowTable3();
			break;
		}
		case 4: { 
			ShowTable4();
			break;
		}
		case 5: { 
			ShowTable5();
			break;
		}
		case 6: { 
			ShowTable6();
			break;
		}
		case 9: { 
			ShowAll();
			break;
		}
		case 0: { 
			break;
		}
		default: {
			printf("Sorry, gay, table with this number does not exist!");
		}
	}
}


void Delete1() {

	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 264 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 265 "postgresql_client.pgc"
 char description [ 50 ] ;
 
#line 266 "postgresql_client.pgc"
 long size ;
 
#line 267 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 268 "postgresql_client.pgc"
    
	
	printf("\nselect the deleted 'software_name', please => ");
	scanf("%s", software_name);
		    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from software_info where software_name = $1 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 273 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 278 "postgresql_client.pgc"

}


void Delete2() {

	/* exec sql begin declare section */
		 
		 
	
#line 285 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 286 "postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 287 "postgresql_client.pgc"
    
	
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. e-mail.\n");
	printf("3. both.\n");
	scanf("%d", &item);
	switch(item) {
		case 1: {
			printf("\nselect the deleted 'software_name', please => ");
			scanf("%s", software_name);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from software_and_developers where software_name = $1 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 300 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 2: {
			printf("\nselect the deleted 'email', please => ");
			scanf("%s", email);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from software_and_developers where email = $1 ", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 311 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 3: {
			printf("\nselect the deleted 'software_name', please => ");
			scanf("%s", software_name);
			printf("\nselect the deleted 'email', please => ");
			scanf("%s", email);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from software_and_developers where email = $1  and software_name = $2 ", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 324 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 332 "postgresql_client.pgc"

}


void Delete3() {

	/* exec sql begin declare section */
		 
		 
		 
	
#line 339 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 340 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 341 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 342 "postgresql_client.pgc"
    
	
	printf("\nselect the deleted 'email', please => ");
	scanf("%s", email);
		    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from developers where email = $1 ", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 347 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 352 "postgresql_client.pgc"

}


void Delete4() {

	/* exec sql begin declare section */
		 
		 
	
#line 359 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 360 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 361 "postgresql_client.pgc"
    
	
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. pkg_name.\n");
	printf("3. both.\n");
	scanf("%d", &item);
	switch(item) {
		case 1: {
			printf("\nselect the deleted 'software_name', please => ");
			scanf("%s", software_name);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from depend where software_name = $1 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 374 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 2: {
			printf("\nselect the deleted 'pkg_name', please => ");
			scanf("%s", pkg_name);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from depend where pkg_name = $1 ", 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 385 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 3: {
			printf("\nselect the deleted 'software_name', please => ");
			scanf("%s", software_name);
			printf("\nselect the deleted 'pkg_name', please => ");
			scanf("%s", pkg_name);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from depend where pkg_name = $1  and software_name = $2 ", 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 398 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 406 "postgresql_client.pgc"

}


void Delete5() {

	/* exec sql begin declare section */
		 
		 
	
#line 413 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 414 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 415 "postgresql_client.pgc"
    
	
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. pkg_location.\n");
	printf("3. both.\n");
	scanf("%d", &item);
	switch(item) {
		case 1: {
			printf("\nselect the deleted 'software_name', please => ");
			scanf("%s", software_name);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from order_pkg where software_name = $1 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 428 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 2: {
			printf("\nselect the deleted 'pkg_location', please => ");
			scanf("%s", pkg_location);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from order_pkg where pkg_location = $1 ", 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 439 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 3: {
			printf("\nselect the deleted 'software_name', please => ");
			scanf("%s", software_name);
			printf("\nselect the deleted 'pkg_location', please => ");
			scanf("%s", pkg_location);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from order_pkg where pkg_location = $1  and software_name = $2 ", 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 452 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 460 "postgresql_client.pgc"

}


void Delete6() {

	/* exec sql begin declare section */
		 
		 
	
#line 467 "postgresql_client.pgc"
 char type_location [ 50 ] ;
 
#line 468 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 469 "postgresql_client.pgc"
    
	
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. type_location.\n");
	printf("2. pkg_location.\n");
	printf("3. both.\n");
	scanf("%d", &item);
	switch(item) {
		case 1: {
			printf("\nselect the deleted 'type_location', please => ");
			scanf("%s", type_location);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from methods where type_location = $1 ", 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 482 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 2: {
			printf("\nselect the deleted 'pkg_location', please => ");
			scanf("%s", pkg_location);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from methods where pkg_location = $1 ", 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 493 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 3: {
			printf("\nselect the deleted 'type_location', please => ");
			scanf("%s", type_location);
			printf("\nselect the deleted 'pkg_location', please => ");
			scanf("%s", pkg_location);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from methods where pkg_location = $1  and type_location = $2 ", 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 506 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 514 "postgresql_client.pgc"

}


void Delete() {

	printf("\nChoose one table:");
	ShowTableList();
	printf("0. For cancel mod \n");
	int choose = 0;
	scanf("%d", &choose);
	switch(choose) {
		case 1: { 
		Delete1();
		break;
	    } 
	    case 2: { 
		Delete2();
		break;
	    } 
	    case 3: { 
		Delete3();
		break;
	    }
	    case 4: { 
		Delete4();
		break;
	    }
	    case 5: { 
		Delete5();
		break;
	    }
	    case 6: { 
		Delete6();
		break;
	    }
	    case 0: { 
		break;
	    }
	    default: {
		printf("Sorry, gay, table with this number does not exist!");
	    }
	}
}

 
void Update1() {

	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 563 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 564 "postgresql_client.pgc"
 char description [ 50 ] ;
 
#line 565 "postgresql_client.pgc"
 long size ;
 
#line 566 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 567 "postgresql_client.pgc"
    
	printf("\nselect updatable 'software_name', please => ");
	scanf("%s", software_name);
	printf("\nenter new 'description', please => ");
	scanf("%s", description);
	printf("\nenter new 'size', please => ");
	scanf("%ld", &size);
	printf("\nenter new 'category', please => ");
	scanf("%s", category);
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update software_info set ( description , size , category ) = ( $1  , $2  , $3  ) where software_name = $4 ", 
	ECPGt_char,(description),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 577 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 582 "postgresql_client.pgc"

}


void Update2() {

	/* exec sql begin declare section */
		 
		 
	
#line 589 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 590 "postgresql_client.pgc"
 char software_name [ 50 ] ;
/* exec sql end declare section */
#line 591 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. e-mail.\n");
	printf("2. software_name.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'email', please => ");
		scanf("%s", email);
		printf("\nenter new 'software_name', please => ");
		scanf("%s", software_name);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update software_and_developers set ( software_name ) = ( $1  ) where email = $2 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 603 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'software_name', please => ");
		scanf("%s", software_name);
		printf("\nenter new 'email', please => ");
		scanf("%s", email);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update software_and_developers set ( email ) = ( $1  ) where software_name = $2 ", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 614 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 621 "postgresql_client.pgc"

}


void Update3() {

	/* exec sql begin declare section */
		 
		 
		 
	
#line 628 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 629 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 630 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 631 "postgresql_client.pgc"
    
	printf("\nselect updatable 'email', please => ");
	scanf("%s", email);
	printf("\nenter new 'fio', please => ");
	scanf("%s", fio);
	printf("\nenter new 'organization', please => ");
	scanf("%s", organization);
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update developers set ( fio , organization ) = ( $1  , $2  ) where email = $3 ", 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 639 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 644 "postgresql_client.pgc"

}


void Update4() {

	/* exec sql begin declare section */
		 
		 
	
#line 651 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 652 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 653 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. pkg_name.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'software_name', please => ");
		scanf("%s", software_name);
		printf("\nenter new 'pkg_name', please => ");
		scanf("%s", pkg_name);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update depend set ( pkg_name ) = ( $1  ) where software_name = $2 ", 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 665 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'pkg_name', please => ");
		scanf("%s", pkg_name);
		printf("\nenter new 'software_name', please => ");
		scanf("%s", software_name);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update depend set software_name = $1  where pkg_name = $2 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 676 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 683 "postgresql_client.pgc"

}


void Update5() {

	/* exec sql begin declare section */
		 
		 
	
#line 690 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 691 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 692 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. pkg_location.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'software_name', please => ");
		scanf("%s", software_name);
		printf("\nenter new 'pkg_location', please => ");
		scanf("%s", pkg_location);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update order_pkg set ( pkg_location ) = ( $1  ) where software_name = $2 ", 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 704 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'pkg_location', please => ");
		scanf("%s", pkg_location);
		printf("\nenter new 'software_name', please => ");
		scanf("%s", software_name);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update order_pkg set software_name = $1  where pkg_location = $2 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 715 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 722 "postgresql_client.pgc"

}


void Update6() {

	/* exec sql begin declare section */
		 
		 
	
#line 729 "postgresql_client.pgc"
 char type_location [ 50 ] ;
 
#line 730 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 731 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. type_location.\n");
	printf("2. pkg_location.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'type_location', please => ");
		scanf("%s", type_location);
		printf("\nenter new 'pkg_location', please => ");
		scanf("%s", pkg_location);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update methods set ( pkg_location ) = ( $1  ) where type_location = $2 ", 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 743 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'pkg_location', please => ");
		scanf("%s", pkg_location);
		printf("\nenter new 'type_location', please => ");
		scanf("%s", type_location);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update methods set type_location = $1  where pkg_location = $2 ", 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 754 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 761 "postgresql_client.pgc"

}


void Update() {

	printf("\nChoose one table:");
	ShowTableList();
	printf("0. For cancel mod \n");
	int choose = 0;
	scanf("%d", &choose);
	switch(choose) {
		case 1: { 
		Update1();
		break;
	    } 
	    case 2: { 
		Update2();
		break;
	    } 
	    case 3: { 
		Update3();
		break;
	    }
	    case 4: { 
		Update4();
		break;
	    }
	    case 5: { 
		Update5();
		break;
	    }
	    case 6: { 
		Update6();
		break;
	    }
	    case 0: { 
		break;
	    }
	    default: {
		printf("Sorry, gay, table with this number does not exist!");
	    }
	}
}


void Insert1() {

	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 810 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 811 "postgresql_client.pgc"
 char description [ 50 ] ;
 
#line 812 "postgresql_client.pgc"
 long size ;
 
#line 813 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 814 "postgresql_client.pgc"
    
	printf("\nenter 'software_name', please => ");
	scanf("%s", software_name);
	printf("\nenter 'description', please => ");
	scanf("%s", description);
	printf("\nenter 'size', please => ");
	scanf("%ld", &size);
	printf("\nenter 'category', please => ");
	scanf("%s", category);
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into software_info values ( $1  , $2  , $3  , $4  )", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(description),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 824 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 829 "postgresql_client.pgc"

}


void Insert2() {

	/* exec sql begin declare section */
		 
		 
	
#line 836 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 837 "postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 838 "postgresql_client.pgc"
    
	
	printf("\nenter 'software_name', please => ");
	scanf("%s", software_name);
	printf("\nenter 'email', please => ");
	scanf("%s", email);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into software_and_developers values ( $1  , $2  )", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 845 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 850 "postgresql_client.pgc"

}


void Insert3() {

	/* exec sql begin declare section */
		 
		 
		 
	
#line 857 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 858 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 859 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 860 "postgresql_client.pgc"
    
	
	printf("\nenter 'email', please => ");
	scanf("%s", email);
	printf("\nenter 'fio', please => ");
	scanf("%s", fio);
	printf("\nenter 'organization', please => ");
	scanf("%s", organization);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into developers values ( $1  , $2  , $3  )", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 869 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 874 "postgresql_client.pgc"

}


void Insert4() {

	/* exec sql begin declare section */
		 
		 
	
#line 881 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 882 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 883 "postgresql_client.pgc"
    
	
	printf("\nenter 'software_name', please => ");
	scanf("%s", software_name);
	printf("\nenter 'pkg_name', please => ");
	scanf("%s", pkg_name);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into depend values ( $1  , $2  )", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 890 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 895 "postgresql_client.pgc"

}


void Insert5() {

	/* exec sql begin declare section */
		 
		 
	
#line 902 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 903 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 904 "postgresql_client.pgc"
    
	
	printf("\nenter 'software_name', please => ");
	scanf("%s", software_name);
	printf("\nenter 'pkg_location', please => ");
	scanf("%s", pkg_location);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into order_pkg values ( $1  , $2  )", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 911 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 916 "postgresql_client.pgc"

}


void Insert6() {

	/* exec sql begin declare section */
		 
		 
	
#line 923 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
 
#line 924 "postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 925 "postgresql_client.pgc"
    
	
	printf("\nenter 'pkg_location', please => ");
	scanf("%s", pkg_location);
	printf("\nenter 'type_location', please => ");
	scanf("%s", type_location);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into methods values ( $1  , $2  )", 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 932 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 937 "postgresql_client.pgc"

}


void Insert() {

	printf("\nChoose one table:");
	ShowTableList();
	printf("0. For cancel mod \n");
	int choose = 0;
	scanf("%d", &choose);
	switch(choose) {
		case 1: { 
		Insert1();
		break;
	    } 
	    case 2: { 
		Insert2();
		break;
	    } 
	    case 3: { 
		Insert3();
		break;
	    }
	    case 4: { 
		Insert4();
		break;
	    }
	    case 5: { 
		Insert5();
		break;
	    }
	    case 6: { 
		Insert6();
		break;
	    }
	    case 0: { 
		break;
	    }
	    default: {
		printf("Sorry, gay, table with this number does not exist!");
	    }
	}
}


void ShowTableList( ) {
	printf("\n1. software_info\n");
	printf("2. software_and_developers\n");
	printf("3. developers\n");
	printf("4. depend\n");
	printf("5. order_pkg\n");
	printf("6. methods\n\n\n");
}


void Menu( ) {
	bool do_it= true;
	int item=0;
	while(do_it) {
	    printf("\n\n\n0. Exit.\n");
	    printf("1. Show.\n");
	    printf("2. Insert.\n");
	    printf("3. Update.\n");
	    printf("4. Delete.\n");
	    printf("5. Show table list.\n\n");
	    scanf("%d", &item);
	    switch(item) {
		case 0: {
		    do_it=false;
		    break;
		}
		case 1: {
		    Show();
		    break;
		}
		case 2: {
		    Insert();
		    break;
		}
		case 3: {
		    Update();
		    break;
		}
		case 4: {
		    Delete();
		    break;
		}
		case 5: {
		    ShowTableList();
		    break;
		}
		default: {
		    printf("Gay, try again =)\n");
		}
	    }
	}
}


int main() {

	//Connecting with a Data Base
	/* exec sql begin declare section */
	   
	
#line 1041 "postgresql_client.pgc"
 char dbName [ 255 ] , userName [ 100 ] , password [ 100 ] ;
/* exec sql end declare section */
#line 1042 "postgresql_client.pgc"

 
	//strcpy(dbName, "freeman@127.0.0.1:5432");
	strcpy(userName, "");
	strcpy(password, "");
	//strcpy(dbName, "student_db");
	//strcpy(userName, "student");
	//strcpy(password, "tvgu");
	strcpy(dbName, "soft");
	if(strlen(userName) > 0) {
		{ ECPGconnect(__LINE__, 0, dbName , userName , password , NULL, 0); }
#line 1052 "postgresql_client.pgc"

	} else {
		{ ECPGconnect(__LINE__, 0, dbName , NULL, NULL , NULL, 0); }
#line 1054 "postgresql_client.pgc"

	}
	//Test connecting
	if( !strncmp(sqlca.sqlstate, "00000", 5)) {
		printf("\nConnect is ok!\n");
	}else{
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
		return 0;
	}
	
	Menu();
      
	{ ECPGdisconnect(__LINE__, "CURRENT");}
#line 1067 "postgresql_client.pgc"

	if( !strncmp(sqlca.sqlstate, "00000", 5)) {
	    printf("\nDisconnect\n");
	}else{
	    printf( "%s", sqlca.sqlstate );
	    printf( "\n" );
	}

	return 0;
}


//ecpg postgresql_client.pgc
//gcc postgresql_client.c -I /usr/include/pgsql/ -lecpg -o postgresql_client -Wextra -g
//gcc postgresql_client.c -I /usr/include/postgresql/ -lecpg -o postgresql_client -Wextra -g
//./postgresql_client
