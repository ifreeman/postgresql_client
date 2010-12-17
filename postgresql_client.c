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

void Read( char* res ) {
        int isSpace = 0;
        int index = 0;
        while( isSpace == 0 ) {
                index = 0;
                char ch = getchar();
                while( ch != '\n' ) {
                        res[index] = ch;
                        index = index + 1;
                        if( !isspace(ch) ) {
                                isSpace = 1;
                        }
                        ch = getchar();
                }
                res[index] = 0;
                index = 0;
        }
}



void ShowAll() {
	/* exec sql begin declare section */
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
	
#line 32 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 33 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 34 "postgresql_client.pgc"
 long size ;
 
#line 35 "postgresql_client.pgc"
 char category [ 50 ] ;
 
#line 36 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 37 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 38 "postgresql_client.pgc"
 char organization [ 150 ] ;
 
#line 39 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
 
#line 40 "postgresql_client.pgc"
 char pkg_location [ 250 ] ;
 
#line 41 "postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 42 "postgresql_client.pgc"


	
	/* declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , dev . email , dev . fio , dev . organization , dep . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location */
#line 46 "postgresql_client.pgc"

	
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , dev . email , dev . fio , dev . organization , dep . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location", ECPGt_EOIT, ECPGt_EORT);}
#line 48 "postgresql_client.pgc"

	
	char str1[]="software_name";
	char str2[]="description";
	char str3[]="size";
	char str4[]="category";
	char str5[]="e-mail";
	char str6[]="fio";
	char str7[]="organization";
	char str8[]="pkg_name";
	char str9[]="pkg_location";
	char str10[]="type_location";
	//printf("software_name |\t description |\t size |\t category |\t e-mail |\t fio |\t organization |\t pkg_name |\t pkg_location |\t type_location\n");
	printf("%-20s|%-20s|%-20s|%-20s|%-20s|%-30s|%-20s|%-20s|%-20s|%-20s\n", str1, str2, str3, str4, str5, str6, str7, str8, str9, str10 );
	printf("-----------------------------+-----------------------------+-----------------------------+-----------------------------+-----------------------------+-----------------------------+-----------------------------+-----------------------------+-----------------------------+-----------------------------+\n");
	while(1)
	{
	    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
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
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 66 "postgresql_client.pgc"

	    
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%-20s%-20s%-20ld%-20s%-20s%-30s%-20s%-20s%-20s%-20s\n", software_name, description, size, category, email, fio, organization, pkg_name, pkg_location, type_location );
		//printf("%s \t %s \t %ld \t %s \t %s \t %s \t %s \t %s \t %s \t %s\n", software_name, description, size, category, email, fio, organization, pkg_name, pkg_location, type_location );
	}
	
	printf("\n\n");
	
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_", ECPGt_EOIT, ECPGt_EORT);}
#line 75 "postgresql_client.pgc"

	{ ECPGdeallocate(__LINE__, 0, NULL, "cursor_");}
#line 76 "postgresql_client.pgc"

}


void ShowTable1() {
   
	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 83 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 84 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 85 "postgresql_client.pgc"
 long size ;
 
#line 86 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 87 "postgresql_client.pgc"


	    
	/* declare cursor_1 cursor for select software_name , description , size , category from software_info order by software_name */
#line 91 "postgresql_client.pgc"

	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_1 cursor for select software_name , description , size , category from software_info order by software_name", ECPGt_EOIT, ECPGt_EORT);}
#line 93 "postgresql_client.pgc"

	char str1[]="software_name";
	char str2[]="description";
	char str3[]="size";
	char str4[]="category";
	//printf("software_name\t\t|description\t\t|size \t\t|category\t\t\n");
	printf("%-30s|%-30s|%-30s|%-30s\n", str1, str2, str3, str4 );
	printf("-----------------------------+-----------------------------+-----------------------------+------------------------------\n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_1", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(description),(long)255,(long)1,(255)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 103 "postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%-30s%-30s%-30ld%-30s\n", software_name, description, size, category );
	}
	    
	printf("\n\n");
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_1", ECPGt_EOIT, ECPGt_EORT);}
#line 111 "postgresql_client.pgc"

	
	{ ECPGdeallocate(__LINE__, 0, NULL, "cursor_1");}
#line 113 "postgresql_client.pgc"

	//EXEC SQL DEALLOCATE PREPARE name;
}


void ShowTable2() {
	/* exec sql begin declare section */
		 
		 
        
	
#line 120 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 121 "postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 123 "postgresql_client.pgc"


    
	/* declare cursor_2 cursor for select software_name , email from software_and_developers order by software_name */
#line 127 "postgresql_client.pgc"

    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_2 cursor for select software_name , email from software_and_developers order by software_name", ECPGt_EOIT, ECPGt_EORT);}
#line 129 "postgresql_client.pgc"

    
	char str1[]="software_name";
	char str2[]="email";
	printf("%-30s|%-30s\n", str1, str2);
	printf("-----------------------------+-----------------------------\n");
	while(1) {
        
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_2", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 137 "postgresql_client.pgc"

        
        	if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
        	//printf("%s \t %s \n", software_name, email);
		printf("%-30s%-30s\n", software_name, email);
	}
    
	printf("\n\n");
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_2", ECPGt_EOIT, ECPGt_EORT);}
#line 146 "postgresql_client.pgc"

	{ ECPGdeallocate(__LINE__, 0, NULL, "cursor_2");}
#line 147 "postgresql_client.pgc"


}


void ShowTable3() {
   
	/* exec sql begin declare section */
		 
		 
		 
	
#line 155 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 156 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 157 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 158 "postgresql_client.pgc"


	    
	/* declare cursor_3 cursor for select fio , email , organization from developers order by fio */
#line 162 "postgresql_client.pgc"

	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_3 cursor for select fio , email , organization from developers order by fio", ECPGt_EOIT, ECPGt_EORT);}
#line 164 "postgresql_client.pgc"

	
	char str1[]="fio";
	char str2[]="e-mail";
	char str3[]="organization";
	printf("%-70s|%-30s|%-30s\n", str1, str2, str3);
	//printf("fio |\t e-mail |\t organization \n");
	printf("---------------------------------------------------------------------+----------------------------+-----------------------------\n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_3", ECPGt_EOIT, 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 174 "postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;       
		printf("%-70s%-30s%-30s\n", fio, email, organization);
		//printf("%s \t %s \t %s \n", fio, email, organization);
	}
	    
	printf("\n\n");
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_3", ECPGt_EOIT, ECPGt_EORT);}
#line 183 "postgresql_client.pgc"

	{ ECPGdeallocate(__LINE__, 0, NULL, "cursor_3");}
#line 184 "postgresql_client.pgc"

}


void ShowTable4() {
	/* exec sql begin declare section */
		 
		 
	
#line 190 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 191 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 192 "postgresql_client.pgc"


      
	/* declare cursor_4 cursor for select software_name , pkg_name from depend order by software_name */
#line 196 "postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_4 cursor for select software_name , pkg_name from depend order by software_name", ECPGt_EOIT, ECPGt_EORT);}
#line 198 "postgresql_client.pgc"

	
	char str1[]="software_name";
	char str2[]="pkg_name";
	printf("%-30s|%-30s\n", str1, str2);
	printf("-----------------------------+-----------------------------\n");
	//printf("software_name |\t pkg_name \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_4", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 207 "postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%-30s%-30s\n", software_name, pkg_name);
		//printf("%s \t %s \n", software_name, pkg_name);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_4", ECPGt_EOIT, ECPGt_EORT);}
#line 216 "postgresql_client.pgc"

	{ ECPGdeallocate(__LINE__, 0, NULL, "cursor_4");}
#line 217 "postgresql_client.pgc"


}


void ShowTable5() {
	/* exec sql begin declare section */
		 
		 
	
#line 224 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 225 "postgresql_client.pgc"
 char pkg_location [ 250 ] ;
/* exec sql end declare section */
#line 226 "postgresql_client.pgc"


      
	/* declare cursor_5 cursor for select software_name , pkg_location from order_pkg order by software_name */
#line 230 "postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_5 cursor for select software_name , pkg_location from order_pkg order by software_name", ECPGt_EOIT, ECPGt_EORT);}
#line 232 "postgresql_client.pgc"

	
	char str1[]="software_name";
	char str2[]="pkg_location";
	printf("%-30s|%-30s\n", str1, str2);
	printf("-----------------------------+-----------------------------\n");
	//printf("software_name |\t pkg_location \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_5", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 241 "postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%-30s%-30s\n", software_name, pkg_location);
		//printf("%s \t %s \n", software_name, pkg_location);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_5", ECPGt_EOIT, ECPGt_EORT);}
#line 250 "postgresql_client.pgc"

	{ ECPGdeallocate(__LINE__, 0, NULL, "cursor_5");}
#line 251 "postgresql_client.pgc"


}


void ShowTable6() {
	/* exec sql begin declare section */
		 
		 
	
#line 258 "postgresql_client.pgc"
 char pkg_location [ 250 ] ;
 
#line 259 "postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 260 "postgresql_client.pgc"


      
	/* declare cursor_6 cursor for select pkg_location , type_location from methods order by pkg_location */
#line 264 "postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_6 cursor for select pkg_location , type_location from methods order by pkg_location", ECPGt_EOIT, ECPGt_EORT);}
#line 266 "postgresql_client.pgc"

	
	char str1[]="pkg_location";
	char str2[]="type_location";
	printf("%-30s|%-30s\n", str1, str2);
	printf("-----------------------------+-----------------------------\n");
	//printf("pkg_location |\t type_location \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_6", ECPGt_EOIT, 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 275 "postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%-30s%-30s\n", pkg_location, type_location);
		//printf("%s \t %s \n", pkg_location, type_location);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_6", ECPGt_EOIT, ECPGt_EORT);}
#line 284 "postgresql_client.pgc"

	{ ECPGdeallocate(__LINE__, 0, NULL, "cursor_6");}
#line 285 "postgresql_client.pgc"


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
			printf("Sorry, guy, table with this number does not exist!");
		}
	}
}


void Delete1() {

	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 340 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 341 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 342 "postgresql_client.pgc"
 long size ;
 
#line 343 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 344 "postgresql_client.pgc"
    
	
	printf("\nselect the deleted 'software_name', please => ");
	Read(  software_name);
		    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from software_info where software_name = $1 ", 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 349 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 354 "postgresql_client.pgc"

}


void Delete2() {

	/* exec sql begin declare section */
		 
		 
	
#line 361 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 362 "postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 363 "postgresql_client.pgc"
    
	
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. e-mail.\n");
	printf("3. both.\n");
	scanf("%d", &item);
	switch(item) {
		case 1: {
			printf("\nselect the deleted 'software_name', please => ");
			Read(  software_name);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from software_and_developers where software_name = $1 ", 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 376 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 2: {
			printf("\nselect the deleted 'email', please => ");
			Read(  email);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from software_and_developers where email = $1 ", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 387 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 3: {
			printf("\nselect the deleted 'software_name', please => ");
			Read( software_name);
			printf("\nselect the deleted 'email', please => ");
			Read( email);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from software_and_developers where email = $1  and software_name = $2 ", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 400 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 408 "postgresql_client.pgc"

}


void Delete3() {

	/* exec sql begin declare section */
		 
		 
		 
	
#line 415 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 416 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 417 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 418 "postgresql_client.pgc"
    
	
	printf("\nselect the deleted 'email', please => ");
	Read( email);
		    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from developers where email = $1 ", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 423 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 428 "postgresql_client.pgc"

}


void Delete4() {

	/* exec sql begin declare section */
		 
		 
	
#line 435 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 436 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 437 "postgresql_client.pgc"
    
	
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. pkg_name.\n");
	printf("3. both.\n");
	scanf("%d", &item);
	switch(item) {
		case 1: {
			printf("\nselect the deleted 'software_name', please => ");
			Read( software_name);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from depend where software_name = $1 ", 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 450 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 2: {
			printf("\nselect the deleted 'pkg_name', please => ");
			Read( pkg_name);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from depend where pkg_name = $1 ", 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 461 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 3: {
			printf("\nselect the deleted 'software_name', please => ");
			Read( software_name);
			printf("\nselect the deleted 'pkg_name', please => ");
			Read( pkg_name);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from depend where pkg_name = $1  and software_name = $2 ", 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 474 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 482 "postgresql_client.pgc"

}


void Delete5() {

	/* exec sql begin declare section */
		 
		 
	
#line 489 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 490 "postgresql_client.pgc"
 char pkg_location [ 250 ] ;
/* exec sql end declare section */
#line 491 "postgresql_client.pgc"
    
	
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. pkg_location.\n");
	printf("3. both.\n");
	scanf("%d", &item);
	switch(item) {
		case 1: {
			printf("\nselect the deleted 'software_name', please => ");
			Read( software_name);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from order_pkg where software_name = $1 ", 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 504 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 2: {
			printf("\nselect the deleted 'pkg_location', please => ");
			Read( pkg_location);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from order_pkg where pkg_location = $1 ", 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 515 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 3: {
			printf("\nselect the deleted 'software_name', please => ");
			Read( software_name);
			printf("\nselect the deleted 'pkg_location', please => ");
			Read( pkg_location);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from order_pkg where pkg_location = $1  and software_name = $2 ", 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 528 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 536 "postgresql_client.pgc"

}


void Delete6() {

	/* exec sql begin declare section */
		 
		 
	
#line 543 "postgresql_client.pgc"
 char type_location [ 50 ] ;
 
#line 544 "postgresql_client.pgc"
 char pkg_location [ 250 ] ;
/* exec sql end declare section */
#line 545 "postgresql_client.pgc"
    
	
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. type_location.\n");
	printf("2. pkg_location.\n");
	printf("3. both.\n");
	scanf("%d", &item);
	switch(item) {
		case 1: {
			printf("\nselect the deleted 'type_location', please => ");
			Read( type_location);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from methods where type_location = $1 ", 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 558 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 2: {
			printf("\nselect the deleted 'pkg_location', please => ");
			Read( pkg_location);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from methods where pkg_location = $1 ", 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 569 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
		case 3: {
			printf("\nselect the deleted 'pkg_location', please => ");
			Read( pkg_location);
			printf("\nselect the deleted 'type_location', please => ");
			Read( type_location);
			    
			{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from methods where pkg_location = $1  and type_location = $2 ", 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 582 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 590 "postgresql_client.pgc"

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
		printf("Sorry, guy, table with this number does not exist!");
	    }
	}
}

 
void Update1() {

	/* exec sql begin declare section */
		 
		 
		 
		 
		 
	
#line 639 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 640 "postgresql_client.pgc"
 char new_software_name [ 150 ] ;
 
#line 641 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 642 "postgresql_client.pgc"
 long size ;
 
#line 643 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 644 "postgresql_client.pgc"
    
	printf("\nselect updatable 'software_name', please => ");
	Read( software_name);
	printf("\nenter new 'software_name', please => ");
	Read( new_software_name);
	printf("\nenter new 'description', please => ");
	Read( description);
	printf("\nenter new 'size', please => ");
	scanf("%ld", &size);
	printf("\nenter new 'category', please => ");
	Read( category);
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update software_info set ( software_name , description , size , category ) = ( $1  , $2  , $3  , $4  ) where software_name = $5 ", 
	ECPGt_char,(new_software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(description),(long)255,(long)1,(255)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 656 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 661 "postgresql_client.pgc"

}


void Update2() {

	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 668 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 669 "postgresql_client.pgc"
 char new_email [ 100 ] ;
 
#line 670 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 671 "postgresql_client.pgc"
 char new_software_name [ 150 ] ;
/* exec sql end declare section */
#line 672 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. e-mail.\n");
	printf("2. software_name.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'email', please => ");
		Read( email);
		printf("\nenter new 'email', please => ");
		Read( new_email);
		printf("\nenter new 'software_name', please => ");
		Read( software_name);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update software_and_developers set ( email , software_name ) = ( $1  , $2  ) where email = $3 ", 
	ECPGt_char,(new_email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 686 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'software_name', please => ");
		Read( software_name);
		printf("\nenter new 'software_name', please => ");
		Read( new_software_name);
		printf("\nenter new 'email', please => ");
		Read( email);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update software_and_developers set ( email , software_name ) = ( $1  , $2  ) where software_name = $3 ", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(new_software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 699 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 706 "postgresql_client.pgc"

}


void Update3() {

	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 713 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 714 "postgresql_client.pgc"
 char new_email [ 100 ] ;
 
#line 715 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 716 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 717 "postgresql_client.pgc"
    
	printf("\nselect updatable 'email', please => ");
	Read( email);
	printf("\nenter new 'email', please => ");
	Read( new_email);
	printf("\nenter new 'fio', please => ");
	Read( fio);
	printf("\nenter new 'organization', please => ");
	Read( organization);
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update developers set ( email , fio , organization ) = ( $1  , $2  , $3  ) where email = $4 ", 
	ECPGt_char,(new_email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 727 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 732 "postgresql_client.pgc"

}


void Update4() {

	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 739 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 740 "postgresql_client.pgc"
 char new_software_name [ 150 ] ;
 
#line 741 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
 
#line 742 "postgresql_client.pgc"
 char new_pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 743 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. pkg_name.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'software_name', please => ");
		Read( software_name);
		printf("\nenter new 'software_name', please => ");
		Read( new_software_name);
		printf("\nenter new 'pkg_name', please => ");
		Read( pkg_name);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update depend set ( software_name , pkg_name ) = ( $1  , $2  ) where software_name = $3 ", 
	ECPGt_char,(new_software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 757 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'pkg_name', please => ");
		Read( pkg_name);
		printf("\nenter new 'software_name', please => ");
		Read( software_name);
		printf("\nenter new 'pkg_name', please => ");
		Read( new_pkg_name);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update depend set ( software_name , pkg_name ) = ( $1  , $2  ) where pkg_name = $3 ", 
	ECPGt_char,(new_pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 770 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 777 "postgresql_client.pgc"

}


void Update5() {

	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 784 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 785 "postgresql_client.pgc"
 char new_software_name [ 150 ] ;
 
#line 786 "postgresql_client.pgc"
 char pkg_location [ 250 ] ;
 
#line 787 "postgresql_client.pgc"
 char new_pkg_location [ 250 ] ;
/* exec sql end declare section */
#line 788 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. pkg_location.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'software_name', please => ");
		Read( software_name);
		printf("\nenter new 'software_name', please => ");
		Read( new_software_name);
		printf("\nenter new 'pkg_location', please => ");
		Read( pkg_location);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update order_pkg set ( software_name , pkg_location ) = ( $1  , $2  ) where software_name = $3 ", 
	ECPGt_char,(new_software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 802 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'pkg_location', please => ");
		Read( pkg_location);
		printf("\nenter new 'pkg_location', please => ");
		Read( new_pkg_location);
		printf("\nenter new 'software_name', please => ");
		Read( software_name);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update order_pkg set ( software_name , pkg_location ) = ( $1  , $2  ) where pkg_location = $3 ", 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(new_pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 815 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 822 "postgresql_client.pgc"

}


void Update6() {

	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 829 "postgresql_client.pgc"
 char type_location [ 50 ] ;
 
#line 830 "postgresql_client.pgc"
 char new_type_location [ 50 ] ;
 
#line 831 "postgresql_client.pgc"
 char pkg_location [ 250 ] ;
 
#line 832 "postgresql_client.pgc"
 char new_pkg_location [ 250 ] ;
/* exec sql end declare section */
#line 833 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. type_location.\n");
	printf("2. pkg_location.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'type_location', please => ");
		Read( type_location);
		printf("\nenter new 'type_location', please => ");
		Read( new_type_location);
		printf("\nenter new 'pkg_location', please => ");
		Read( pkg_location);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update methods set ( pkg_location , type_location ) = ( $1  , $2  ) where type_location = $3 ", 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(new_type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 847 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'pkg_location', please => ");
		Read( pkg_location);
		printf("\nenter new 'pkg_location', please => ");
		Read( new_pkg_location);
		printf("\nenter new 'type_location', please => ");
		Read( type_location);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update methods set ( type_location , pkg_location ) = ( $1  , $2  ) where pkg_location = $3 ", 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(new_pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 860 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 867 "postgresql_client.pgc"

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
		printf("Sorry, guy, table with this number does not exist!");
	    }
	}
}


void Insert1() {

	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 916 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 917 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 918 "postgresql_client.pgc"
 long size ;
 
#line 919 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 920 "postgresql_client.pgc"
    
	printf("\nenter 'software_name', please => ");
	//scanf("%s", software_name);
	Read(software_name);
	printf("\nenter 'description', please => ");
	//scanf("%s", description);
	Read(description);
	printf("\nenter 'size', please => ");
	scanf("%ld", &size);
	printf("\nenter 'category', please => ");
	//scanf("%s", category);
	Read(category);
	
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into software_info values ( $1  , $2  , $3  , $4  )", 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(description),(long)255,(long)1,(255)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 933 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 938 "postgresql_client.pgc"

}


void Insert2() {

	/* exec sql begin declare section */
		 
		 
	
#line 945 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 946 "postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 947 "postgresql_client.pgc"
    
	
	printf("\nenter 'software_name', please => ");
	Read( software_name);
	printf("\nenter 'email', please => ");
	Read( email);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into software_and_developers values ( $1  , $2  )", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 954 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 959 "postgresql_client.pgc"

}


void Insert3() {

	/* exec sql begin declare section */
		 
		 
		 
	
#line 966 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 967 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 968 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 969 "postgresql_client.pgc"
    
	
	printf("\nenter 'email', please => ");
	Read( email);
	printf("\nenter 'fio', please => ");
	Read( fio);
	printf("\nenter 'organization', please => ");
	Read( organization);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into developers values ( $1  , $2  , $3  )", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 978 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 983 "postgresql_client.pgc"

}


void Insert4() {

	/* exec sql begin declare section */
		 
		 
	
#line 990 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 991 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 992 "postgresql_client.pgc"
    
	
	printf("\nenter 'software_name', please => ");
	Read( software_name);
	printf("\nenter 'pkg_name', please => ");
	Read( pkg_name);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into depend values ( $1  , $2  )", 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 999 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 1004 "postgresql_client.pgc"

}


void Insert5() {

	/* exec sql begin declare section */
		 
		 
	
#line 1011 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 1012 "postgresql_client.pgc"
 char pkg_location [ 250 ] ;
/* exec sql end declare section */
#line 1013 "postgresql_client.pgc"
    
	
	printf("\nenter 'software_name', please => ");
	Read( software_name);
	printf("\nenter 'pkg_location', please => ");
	Read( pkg_location);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into order_pkg values ( $1  , $2  )", 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 1020 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 1025 "postgresql_client.pgc"

}


void Insert6() {

	/* exec sql begin declare section */
		 
		 
	
#line 1032 "postgresql_client.pgc"
 char pkg_location [ 250 ] ;
 
#line 1033 "postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 1034 "postgresql_client.pgc"
    
	
	printf("\nenter 'pkg_location', please => ");
	Read( pkg_location);
	printf("\nenter 'type_location', please => ");
	Read( type_location);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into methods values ( $1  , $2  )", 
	ECPGt_char,(pkg_location),(long)250,(long)1,(250)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 1041 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 1046 "postgresql_client.pgc"

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
		printf("Sorry, guy, table with this number does not exist!");
	    }
	}
}


void Select1() {
	/* exec sql begin declare section */
		 
		 
	
#line 1094 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 1095 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 1096 "postgresql_client.pgc"

	
	printf("\nenter 'organization', please => ");
	Read( organization);

	ECPGset_var( 0, ( organization ), __LINE__);\
 /* declare cursor_7 cursor for select organization , fio from developers where organization = $1  order by fio */
#line 1102 "postgresql_client.pgc"

		
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_7 cursor for select organization , fio from developers where organization = $1  order by fio", 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 1104 "postgresql_client.pgc"

	char str1[]="organization";
	char str2[]="fio";
	printf("%-30s|%-70s\n", str1, str2);
	printf("----------------------------+---------------------------------------------------------------------+\n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_7", ECPGt_EOIT, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 1111 "postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;       
		printf("%-30s%-70s\n", organization, fio);
		//printf("%s \t %s \t %s \n", fio, email, organization);
	}
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_7", ECPGt_EOIT, ECPGt_EORT);}
#line 1117 "postgresql_client.pgc"

	{ ECPGdeallocate(__LINE__, 0, NULL, "cursor_7");}
#line 1118 "postgresql_client.pgc"

}


void Select2() {
	/* exec sql begin declare section */
		 
		 
	
#line 1124 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 1125 "postgresql_client.pgc"
 char software_name [ 150 ] ;
/* exec sql end declare section */
#line 1126 "postgresql_client.pgc"

	
	printf("\nenter 'fio', please => ");
	Read( fio);

	ECPGset_var( 1, ( fio ), __LINE__);\
 /* declare cursor_8 cursor for select fio , software_name from ( developers dev inner join software_and_developers s on s . email = dev . email ) where fio = $1  order by software_name */
#line 1132 "postgresql_client.pgc"

		
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_8 cursor for select fio , software_name from ( developers dev inner join software_and_developers s on s . email = dev . email ) where fio = $1  order by software_name", 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 1134 "postgresql_client.pgc"

	char str1[]="fio";
	char str2[]="software_name";
	printf("%-70s|%-30s\n", str1, str2);
	printf("---------------------------------------------------------------------+-----------------------------\n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_8", ECPGt_EOIT, 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 1141 "postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;       
		printf("%-70s%-30s\n", fio, software_name);
	}
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_8", ECPGt_EOIT, ECPGt_EORT);}
#line 1146 "postgresql_client.pgc"

	{ ECPGdeallocate(__LINE__, 0, NULL, "cursor_8");}
#line 1147 "postgresql_client.pgc"

}


void Select3() {
	/* exec sql begin declare section */
		 
		 
	
#line 1153 "postgresql_client.pgc"
 char software_name [ 150 ] ;
 
#line 1154 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 1155 "postgresql_client.pgc"

	
	printf("\nenter 'software_name', please => ");
	Read( software_name);

	ECPGset_var( 2, ( software_name ), __LINE__);\
 /* declare cursor_9 cursor for select software_name , pkg_name from depend where software_name = $1  order by pkg_name */
#line 1161 "postgresql_client.pgc"

		
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_9 cursor for select software_name , pkg_name from depend where software_name = $1  order by pkg_name", 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 1163 "postgresql_client.pgc"

	char str1[]="software_name";
	char str2[]="pkg_name";
	printf("%-30s|%-30s\n", str1, str2);
	printf("----------------------------+-----------------------------\n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_9", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 1170 "postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;       
		printf("%-30s%-30s\n", software_name, pkg_name);
	}
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_9", ECPGt_EOIT, ECPGt_EORT);}
#line 1175 "postgresql_client.pgc"

	{ ECPGdeallocate(__LINE__, 0, NULL, "cursor_9");}
#line 1176 "postgresql_client.pgc"

}


void Select() {

	printf("\nChoose one request:\n");
	printf("1. Input 'organization', output 'fio'.\n");
	printf("2. Input 'fio', output 'software_name'.\n");
	printf("3. Input 'software_name', output depend_pkg.\n");
	printf("0. For cancel mod \n");
	int choose = 0;
	scanf("%d", &choose);
	switch(choose) {
		case 1: { 
		Select1();
		break;
	    } 
	    case 2: { 
		Select2();
		break;
	    } 
	    case 3: { 
		Select3();
		break;
	    }
	    case 4: { 
		//Insert4();
		break;
	    }
	    case 5: { 
		//Insert5();
		break;
	    }
	    case 6: { 
		//Insert6();
		break;
	    }
	    case 0: { 
		break;
	    }
	    default: {
		printf("Sorry, guy, table with this number does not exist!");
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
	    printf("5. my requests.\n");
	    printf("6. Show table list.\n\n");
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
		    Select();
		    break;
		}
		case 6: {
		    ShowTableList();
		    break;
		}
		default: {
		    printf("Guy, try again =)\n");
		}
	    }
	}
}


int main() {

	//Connecting with a Data Base
	/* exec sql begin declare section */
	   
	
#line 1287 "postgresql_client.pgc"
 char dbName [ 255 ] , userName [ 100 ] , password [ 100 ] ;
/* exec sql end declare section */
#line 1288 "postgresql_client.pgc"

 
	//strcpy(dbName, "freeman@127.0.0.1:5432");
	strcpy(userName, "");
	strcpy(password, "");
	//strcpy(dbName, "student_db");
	//strcpy(userName, "student");
	//strcpy(password, "tvgu");
	strcpy(dbName, "soft");
	if(strlen(userName) > 0) {
		{ ECPGconnect(__LINE__, 0, dbName , userName , password , NULL, 0); }
#line 1298 "postgresql_client.pgc"

	} else {
		{ ECPGconnect(__LINE__, 0, dbName , NULL, NULL , NULL, 0); }
#line 1300 "postgresql_client.pgc"

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
#line 1313 "postgresql_client.pgc"

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
