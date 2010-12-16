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
 char software_name [ 50 ] ;
 
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
 char pkg_location [ 150 ] ;
 
#line 41 "postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 42 "postgresql_client.pgc"


	
	/* declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , dev . email , dev . fio , dev . organization , dep . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location */
#line 46 "postgresql_client.pgc"

	
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , dev . email , dev . fio , dev . organization , dep . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location", ECPGt_EOIT, ECPGt_EORT);}
#line 48 "postgresql_client.pgc"

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
#line 53 "postgresql_client.pgc"

	    
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \t %ld \t %s \t %s \t %s \t %s \t %s \t %s \t %s\n", software_name, description, size, category, email, fio, organization, pkg_name, pkg_location, type_location );
	}
	
	printf("\n\n");
	
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_", ECPGt_EOIT, ECPGt_EORT);}
#line 61 "postgresql_client.pgc"

}


void ShowTable1() {
   
	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 68 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 69 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 70 "postgresql_client.pgc"
 long size ;
 
#line 71 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 72 "postgresql_client.pgc"


	    
	/* declare cursor_1 cursor for select software_name , description , size , category from software_info */
#line 76 "postgresql_client.pgc"

	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_1 cursor for select software_name , description , size , category from software_info", ECPGt_EOIT, ECPGt_EORT);}
#line 78 "postgresql_client.pgc"

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
#line 82 "postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \t %ld \t %s \n", software_name, description, size, category );
	}
	    
	printf("\n\n");
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_1", ECPGt_EOIT, ECPGt_EORT);}
#line 90 "postgresql_client.pgc"

	
	
	//EXEC SQL DEALLOCATE PREPARE name;
}


void ShowTable2() {
    /* exec sql begin declare section */
         
         
        
    
#line 99 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 100 "postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 102 "postgresql_client.pgc"


    
    /* declare cursor_2 cursor for select software_name , email from software_and_developers */
#line 106 "postgresql_client.pgc"

    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_2 cursor for select software_name , email from software_and_developers", ECPGt_EOIT, ECPGt_EORT);}
#line 108 "postgresql_client.pgc"

    printf("software_name |\t e-mail \n");
    while(1) {
        
        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_2", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 112 "postgresql_client.pgc"

        
        if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
        printf("%s \t %s \n", software_name, email);
    }
    
    printf("\n\n");
    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_2", ECPGt_EOIT, ECPGt_EORT);}
#line 120 "postgresql_client.pgc"


}


void ShowTable3() {
   
	/* exec sql begin declare section */
		 
		 
		 
	
#line 128 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 129 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 130 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 131 "postgresql_client.pgc"


	    
	/* declare cursor_3 cursor for select fio , email , organization from developers */
#line 135 "postgresql_client.pgc"

	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_3 cursor for select fio , email , organization from developers", ECPGt_EOIT, ECPGt_EORT);}
#line 137 "postgresql_client.pgc"

	printf("fio |\t e-mail |\t organization \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_3", ECPGt_EOIT, 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 141 "postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;       
		printf("%s \t %s \t %s \n", fio, email, organization);
	}
	    
	printf("\n\n");
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_3", ECPGt_EOIT, ECPGt_EORT);}
#line 149 "postgresql_client.pgc"

}


void ShowTable4() {
	/* exec sql begin declare section */
		 
		 
	
#line 155 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 156 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 157 "postgresql_client.pgc"


      
	/* declare cursor_4 cursor for select software_name , pkg_name from depend */
#line 161 "postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_4 cursor for select software_name , pkg_name from depend", ECPGt_EOIT, ECPGt_EORT);}
#line 163 "postgresql_client.pgc"

	printf("software_name |\t pkg_name \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_4", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 167 "postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \n", software_name, pkg_name);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_4", ECPGt_EOIT, ECPGt_EORT);}
#line 175 "postgresql_client.pgc"


}


void ShowTable5() {
	/* exec sql begin declare section */
		 
		 
	
#line 182 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 183 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 184 "postgresql_client.pgc"


      
	/* declare cursor_5 cursor for select software_name , pkg_location from order_pkg */
#line 188 "postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_5 cursor for select software_name , pkg_location from order_pkg", ECPGt_EOIT, ECPGt_EORT);}
#line 190 "postgresql_client.pgc"

	printf("software_name |\t pkg_location \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_5", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 194 "postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \n", software_name, pkg_location);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_5", ECPGt_EOIT, ECPGt_EORT);}
#line 202 "postgresql_client.pgc"


}


void ShowTable6() {
	/* exec sql begin declare section */
		 
		 
	
#line 209 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
 
#line 210 "postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 211 "postgresql_client.pgc"


      
	/* declare cursor_6 cursor for select pkg_location , type_location from methods */
#line 215 "postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_6 cursor for select pkg_location , type_location from methods", ECPGt_EOIT, ECPGt_EORT);}
#line 217 "postgresql_client.pgc"

	printf("pkg_location |\t type_location \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_6", ECPGt_EOIT, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 221 "postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \n", pkg_location, type_location);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_6", ECPGt_EOIT, ECPGt_EORT);}
#line 229 "postgresql_client.pgc"


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
		 
		 
		 
		 
	
#line 284 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 285 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 286 "postgresql_client.pgc"
 long size ;
 
#line 287 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 288 "postgresql_client.pgc"
    
	
	printf("\nselect the deleted 'software_name', please => ");
	Read(  software_name);
		    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from software_info where software_name = $1 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 293 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 298 "postgresql_client.pgc"

}


void Delete2() {

	/* exec sql begin declare section */
		 
		 
	
#line 305 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 306 "postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 307 "postgresql_client.pgc"
    
	
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
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 320 "postgresql_client.pgc"

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
#line 331 "postgresql_client.pgc"

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
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 344 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 352 "postgresql_client.pgc"

}


void Delete3() {

	/* exec sql begin declare section */
		 
		 
		 
	
#line 359 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 360 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 361 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 362 "postgresql_client.pgc"
    
	
	printf("\nselect the deleted 'email', please => ");
	Read( email);
		    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from developers where email = $1 ", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 367 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 372 "postgresql_client.pgc"

}


void Delete4() {

	/* exec sql begin declare section */
		 
		 
	
#line 379 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 380 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 381 "postgresql_client.pgc"
    
	
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
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 394 "postgresql_client.pgc"

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
#line 405 "postgresql_client.pgc"

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
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 418 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 426 "postgresql_client.pgc"

}


void Delete5() {

	/* exec sql begin declare section */
		 
		 
	
#line 433 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 434 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 435 "postgresql_client.pgc"
    
	
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
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 448 "postgresql_client.pgc"

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
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 459 "postgresql_client.pgc"

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
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 472 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 480 "postgresql_client.pgc"

}


void Delete6() {

	/* exec sql begin declare section */
		 
		 
	
#line 487 "postgresql_client.pgc"
 char type_location [ 50 ] ;
 
#line 488 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 489 "postgresql_client.pgc"
    
	
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
#line 502 "postgresql_client.pgc"

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
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 513 "postgresql_client.pgc"

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
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 526 "postgresql_client.pgc"

			if( strncmp(sqlca.sqlstate, "00000", 5)) {
				printf( "%s", sqlca.sqlstate );
				printf( "\n" );
			}
			break;
		}
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 534 "postgresql_client.pgc"

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
		 
		 
		 
		 
	
#line 583 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 584 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 585 "postgresql_client.pgc"
 long size ;
 
#line 586 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 587 "postgresql_client.pgc"
    
	printf("\nselect updatable 'software_name', please => ");
	Read( software_name);
	printf("\nenter new 'description', please => ");
	Read( description);
	printf("\nenter new 'size', please => ");
	scanf("%ld", &size);
	printf("\nenter new 'category', please => ");
	Read( category);
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update software_info set ( description , size , category ) = ( $1  , $2  , $3  ) where software_name = $4 ", 
	ECPGt_char,(description),(long)255,(long)1,(255)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 597 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 602 "postgresql_client.pgc"

}


void Update2() {

	/* exec sql begin declare section */
		 
		 
	
#line 609 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 610 "postgresql_client.pgc"
 char software_name [ 50 ] ;
/* exec sql end declare section */
#line 611 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. e-mail.\n");
	printf("2. software_name.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'email', please => ");
		Read( email);
		printf("\nenter new 'software_name', please => ");
		Read( software_name);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update software_and_developers set ( software_name ) = ( $1  ) where email = $2 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 623 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'software_name', please => ");
		Read( software_name);
		printf("\nenter new 'email', please => ");
		Read( email);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update software_and_developers set ( email ) = ( $1  ) where software_name = $2 ", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 634 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 641 "postgresql_client.pgc"

}


void Update3() {

	/* exec sql begin declare section */
		 
		 
		 
	
#line 648 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 649 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 650 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 651 "postgresql_client.pgc"
    
	printf("\nselect updatable 'email', please => ");
	Read( email);
	printf("\nenter new 'fio', please => ");
	Read( fio);
	printf("\nenter new 'organization', please => ");
	Read( organization);
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update developers set ( fio , organization ) = ( $1  , $2  ) where email = $3 ", 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 659 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 664 "postgresql_client.pgc"

}


void Update4() {

	/* exec sql begin declare section */
		 
		 
	
#line 671 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 672 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 673 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. pkg_name.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'software_name', please => ");
		Read( software_name);
		printf("\nenter new 'pkg_name', please => ");
		Read( pkg_name);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update depend set ( pkg_name ) = ( $1  ) where software_name = $2 ", 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 685 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'pkg_name', please => ");
		Read( pkg_name);
		printf("\nenter new 'software_name', please => ");
		Read( software_name);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update depend set software_name = $1  where pkg_name = $2 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 696 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 703 "postgresql_client.pgc"

}


void Update5() {

	/* exec sql begin declare section */
		 
		 
	
#line 710 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 711 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 712 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. software_name.\n");
	printf("2. pkg_location.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'software_name', please => ");
		Read( software_name);
		printf("\nenter new 'pkg_location', please => ");
		Read( pkg_location);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update order_pkg set ( pkg_location ) = ( $1  ) where software_name = $2 ", 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 724 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'pkg_location', please => ");
		Read( pkg_location);
		printf("\nenter new 'software_name', please => ");
		Read( software_name);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update order_pkg set software_name = $1  where pkg_location = $2 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 735 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 742 "postgresql_client.pgc"

}


void Update6() {

	/* exec sql begin declare section */
		 
		 
	
#line 749 "postgresql_client.pgc"
 char type_location [ 50 ] ;
 
#line 750 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 751 "postgresql_client.pgc"
    
	int item = 0;
	printf("choose table field for search, please =>\n");
	printf("1. type_location.\n");
	printf("2. pkg_location.\n");
	scanf("%d", &item);
	if(item == 1) {
		printf("\nselect updatable 'type_location', please => ");
		Read( type_location);
		printf("\nenter new 'pkg_location', please => ");
		Read( pkg_location);
		    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update methods set ( pkg_location ) = ( $1  ) where type_location = $2 ", 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 763 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else if (item == 2) {
		printf("\nselect updatable 'pkg_location', please => ");
		Read( pkg_location);
		printf("\nenter new 'type_location', please => ");
		Read( type_location);
			    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "update methods set type_location = $1  where pkg_location = $2 ", 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 774 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
			printf( "%s", sqlca.sqlstate );
			printf( "\n" );
		}
	} else { }
	
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 781 "postgresql_client.pgc"

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
		 
		 
		 
		 
	
#line 830 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 831 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 832 "postgresql_client.pgc"
 long size ;
 
#line 833 "postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 834 "postgresql_client.pgc"
    
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
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(description),(long)255,(long)1,(255)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 847 "postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 852 "postgresql_client.pgc"

}


void Insert2() {

	/* exec sql begin declare section */
		 
		 
	
#line 859 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 860 "postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 861 "postgresql_client.pgc"
    
	
	printf("\nenter 'software_name', please => ");
	Read( software_name);
	printf("\nenter 'email', please => ");
	Read( email);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into software_and_developers values ( $1  , $2  )", 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 868 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 873 "postgresql_client.pgc"

}


void Insert3() {

	/* exec sql begin declare section */
		 
		 
		 
	
#line 880 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 881 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 882 "postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 883 "postgresql_client.pgc"
    
	
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
#line 892 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 897 "postgresql_client.pgc"

}


void Insert4() {

	/* exec sql begin declare section */
		 
		 
	
#line 904 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 905 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 906 "postgresql_client.pgc"
    
	
	printf("\nenter 'software_name', please => ");
	Read( software_name);
	printf("\nenter 'pkg_name', please => ");
	Read( pkg_name);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into depend values ( $1  , $2  )", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 913 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 918 "postgresql_client.pgc"

}


void Insert5() {

	/* exec sql begin declare section */
		 
		 
	
#line 925 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 926 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 927 "postgresql_client.pgc"
    
	
	printf("\nenter 'software_name', please => ");
	Read( software_name);
	printf("\nenter 'pkg_location', please => ");
	Read( pkg_location);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into order_pkg values ( $1  , $2  )", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 934 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 939 "postgresql_client.pgc"

}


void Insert6() {

	/* exec sql begin declare section */
		 
		 
	
#line 946 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
 
#line 947 "postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 948 "postgresql_client.pgc"
    
	
	printf("\nenter 'pkg_location', please => ");
	Read( pkg_location);
	printf("\nenter 'type_location', please => ");
	Read( type_location);
    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into methods values ( $1  , $2  )", 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 955 "postgresql_client.pgc"

		if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 960 "postgresql_client.pgc"

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
		    printf("Guy, try again =)\n");
		}
	    }
	}
}


int main() {

	//Connecting with a Data Base
	/* exec sql begin declare section */
	   
	
#line 1064 "postgresql_client.pgc"
 char dbName [ 255 ] , userName [ 100 ] , password [ 100 ] ;
/* exec sql end declare section */
#line 1065 "postgresql_client.pgc"

 
	//strcpy(dbName, "freeman@127.0.0.1:5432");
	strcpy(userName, "");
	strcpy(password, "");
	//strcpy(dbName, "student_db");
	//strcpy(userName, "student");
	//strcpy(password, "tvgu");
	strcpy(dbName, "soft");
	if(strlen(userName) > 0) {
		{ ECPGconnect(__LINE__, 0, dbName , userName , password , NULL, 0); }
#line 1075 "postgresql_client.pgc"

	} else {
		{ ECPGconnect(__LINE__, 0, dbName , NULL, NULL , NULL, 0); }
#line 1077 "postgresql_client.pgc"

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
#line 1090 "postgresql_client.pgc"

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
