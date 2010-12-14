/* Processed by ecpg (4.6.0) */
/* These include files are added by the preprocessor */
#include <ecpglib.h>
#include <ecpgerrno.h>
#include <sqlca.h>
/* End of automatic include section */

#line 1 "./postgresql_client.pgc"
#include <sqlca.h>
#include <stdio.h>
#include <string.h>

//EXEC SQL INCLUDE sqlca;

void ShowTableList( );


void ShowAll() {
    /* exec sql begin declare section */
         
         
         
         
         
         
         
         
         
         
    
#line 12 "./postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 13 "./postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 14 "./postgresql_client.pgc"
 long size ;
 
#line 15 "./postgresql_client.pgc"
 char category [ 50 ] ;
 
#line 16 "./postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 17 "./postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 18 "./postgresql_client.pgc"
 char organization [ 150 ] ;
 
#line 19 "./postgresql_client.pgc"
 char pkg_name [ 150 ] ;
 
#line 20 "./postgresql_client.pgc"
 char pkg_location [ 150 ] ;
 
#line 21 "./postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 22 "./postgresql_client.pgc"


    
    /* declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , dev . email , dev . fio , dev . organization , dep . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location */
#line 26 "./postgresql_client.pgc"

    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , dev . email , dev . fio , dev . organization , dep . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location", ECPGt_EOIT, ECPGt_EORT);}
#line 28 "./postgresql_client.pgc"

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
#line 33 "./postgresql_client.pgc"

        
        if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
        printf("%s \t %s \t %ld \t %s \t %s \t %s \t %s \t %s \t %s \t %s\n", software_name, description, size, category, email, fio, organization, pkg_name, pkg_location, type_location );
    }
    
    printf("\n\n");
    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_", ECPGt_EOIT, ECPGt_EORT);}
#line 41 "./postgresql_client.pgc"

}


void ShowTable1() {
   
	/* exec sql begin declare section */
		 
		 
		 
		 
	
#line 48 "./postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 49 "./postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 50 "./postgresql_client.pgc"
 long size ;
 
#line 51 "./postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 52 "./postgresql_client.pgc"


	    
	/* declare cursor_1 cursor for select software_name , description , size , category from software_info */
#line 56 "./postgresql_client.pgc"

	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_1 cursor for select software_name , description , size , category from software_info", ECPGt_EOIT, ECPGt_EORT);}
#line 58 "./postgresql_client.pgc"

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
#line 62 "./postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \t %ld \t %s \n", software_name, description, size, category );
	}
	    
	printf("\n\n");
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_1", ECPGt_EOIT, ECPGt_EORT);}
#line 70 "./postgresql_client.pgc"

}


void ShowTable2() {
    /* exec sql begin declare section */
         
         
        
    
#line 76 "./postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 77 "./postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 79 "./postgresql_client.pgc"


    
    /* declare cursor_2 cursor for select software_name , email from software_and_developers */
#line 83 "./postgresql_client.pgc"

    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_2 cursor for select software_name , email from software_and_developers", ECPGt_EOIT, ECPGt_EORT);}
#line 85 "./postgresql_client.pgc"

    printf("software_name |\t e-mail \n");
    while(1) {
        
        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_2", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 89 "./postgresql_client.pgc"

        
        if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
        printf("%s \t %s \n", software_name, email);
    }
    
    printf("\n\n");
    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_2", ECPGt_EOIT, ECPGt_EORT);}
#line 97 "./postgresql_client.pgc"


}


void ShowTable3() {
   
	/* exec sql begin declare section */
		 
		 
		 
	
#line 105 "./postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 106 "./postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 107 "./postgresql_client.pgc"
 char organization [ 150 ] ;
/* exec sql end declare section */
#line 108 "./postgresql_client.pgc"


	    
	/* declare cursor_3 cursor for select fio , email , organization from developers */
#line 112 "./postgresql_client.pgc"

	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_3 cursor for select fio , email , organization from developers", ECPGt_EOIT, ECPGt_EORT);}
#line 114 "./postgresql_client.pgc"

	printf("e-mail |\t fio |\t organization \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_3", ECPGt_EOIT, 
	ECPGt_char,(fio),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(organization),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 118 "./postgresql_client.pgc"

		
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;       
		printf("%s \t %s \t %s \n", fio, email, organization);
	}
	    
	printf("\n\n");
	    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_3", ECPGt_EOIT, ECPGt_EORT);}
#line 126 "./postgresql_client.pgc"

}


void ShowTable4() {
	/* exec sql begin declare section */
		 
		 
	
#line 132 "./postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 133 "./postgresql_client.pgc"
 char pkg_name [ 150 ] ;
/* exec sql end declare section */
#line 134 "./postgresql_client.pgc"


      
	/* declare cursor_4 cursor for select software_name , pkg_name from depend */
#line 138 "./postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_4 cursor for select software_name , pkg_name from depend", ECPGt_EOIT, ECPGt_EORT);}
#line 140 "./postgresql_client.pgc"

	printf("software_name |\t pkg_name \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_4", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_name),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 144 "./postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \n", software_name, pkg_name);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_4", ECPGt_EOIT, ECPGt_EORT);}
#line 152 "./postgresql_client.pgc"


}


void ShowTable5() {
	/* exec sql begin declare section */
		 
		 
	
#line 159 "./postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 160 "./postgresql_client.pgc"
 char pkg_location [ 150 ] ;
/* exec sql end declare section */
#line 161 "./postgresql_client.pgc"


      
	/* declare cursor_5 cursor for select software_name , pkg_location from order_pkg */
#line 165 "./postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_5 cursor for select software_name , pkg_location from order_pkg", ECPGt_EOIT, ECPGt_EORT);}
#line 167 "./postgresql_client.pgc"

	printf("software_name |\t pkg_location \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_5", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 171 "./postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \n", software_name, pkg_location);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_5", ECPGt_EOIT, ECPGt_EORT);}
#line 179 "./postgresql_client.pgc"


}


void ShowTable6() {
	/* exec sql begin declare section */
		 
		 
	
#line 186 "./postgresql_client.pgc"
 char pkg_location [ 150 ] ;
 
#line 187 "./postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 188 "./postgresql_client.pgc"


      
	/* declare cursor_6 cursor for select pkg_location , type_location from methods */
#line 192 "./postgresql_client.pgc"

      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_6 cursor for select pkg_location , type_location from methods", ECPGt_EOIT, ECPGt_EORT);}
#line 194 "./postgresql_client.pgc"

	printf("pkg_location |\t type_location \n");
	while(1) {
	  
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_6", ECPGt_EOIT, 
	ECPGt_char,(pkg_location),(long)150,(long)1,(150)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(type_location),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 198 "./postgresql_client.pgc"

	  
		if( !strncmp(sqlca.sqlstate, "02000", 5)) break;        
		printf("%s \t %s \n", pkg_location, type_location);
	}
      
	printf("\n\n");
      
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_6", ECPGt_EOIT, ECPGt_EORT);}
#line 206 "./postgresql_client.pgc"


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
		 
		 
		 
		 
	
#line 261 "./postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 262 "./postgresql_client.pgc"
 char description [ 50 ] ;
 
#line 263 "./postgresql_client.pgc"
 long size ;
 
#line 264 "./postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 265 "./postgresql_client.pgc"
    
	
	printf("\nselect the deleted 'software_name', please => ");
	scanf("%s", software_name);
		    
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "delete from software_info where software_name = $1 ", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 270 "./postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 275 "./postgresql_client.pgc"

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
		//Delete2();
		break;
	    } 
	    case 3: { 
		//Delete3();
		break;
	    }
	    case 4: { 
		//Delete4();
		break;
	    }
	    case 5: { 
		//Delete5();
		break;
	    }
	    case 6: { 
		//Delete6();
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
		 
		 
		 
		 
	
#line 324 "./postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 325 "./postgresql_client.pgc"
 char description [ 50 ] ;
 
#line 326 "./postgresql_client.pgc"
 long size ;
 
#line 327 "./postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 328 "./postgresql_client.pgc"
    
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
#line 338 "./postgresql_client.pgc"

	if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	}
	{ ECPGtrans(__LINE__, NULL, "commit");}
#line 343 "./postgresql_client.pgc"

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
		//Update2();
		break;
	    } 
	    case 3: { 
		//Update3();
		break;
	    }
	    case 4: { 
		//Update2();
		break;
	    }
	    case 5: { 
		//Update5();
		break;
	    }
	    case 6: { 
		//Update6();
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
		 
		 
		 
		 
	    
#line 392 "./postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 393 "./postgresql_client.pgc"
 char description [ 50 ] ;
 
#line 394 "./postgresql_client.pgc"
 long size ;
 
#line 395 "./postgresql_client.pgc"
 char category [ 50 ] ;
/* exec sql end declare section */
#line 396 "./postgresql_client.pgc"
    
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
#line 406 "./postgresql_client.pgc"

	    if( strncmp(sqlca.sqlstate, "00000", 5)) {
		printf( "%s", sqlca.sqlstate );
		printf( "\n" );
	    }
	    { ECPGtrans(__LINE__, NULL, "commit");}
#line 411 "./postgresql_client.pgc"

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
		//Insert2();
		break;
	    } 
	    case 3: { 
		//Insert3();
		break;
	    }
	    case 4: { 
		//Insert2();
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
	   
	
#line 515 "./postgresql_client.pgc"
 char dbName [ 255 ] , userName [ 100 ] , password [ 100 ] ;
/* exec sql end declare section */
#line 516 "./postgresql_client.pgc"

 
	//strcpy(dbName, "freeman@127.0.0.1:5432");
	//strcpy(userName, "student");
	//strcpy(password, "tvgu");
	//strcpy(dbName, "student_db");
	strcpy(userName, "freeman");
	strcpy(password, "freeman!login");
	strcpy(dbName, "soft");
	if(strlen(userName) > 0) {
		{ ECPGconnect(__LINE__, 0, dbName , userName , password , NULL, 0); }
#line 526 "./postgresql_client.pgc"

	} else {
		{ ECPGconnect(__LINE__, 0, dbName , NULL, NULL , NULL, 0); }
#line 528 "./postgresql_client.pgc"

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
#line 541 "./postgresql_client.pgc"

	if( !strncmp(sqlca.sqlstate, "00000", 5)) {
	    printf("\nDisconnect\n");
	}else{
	    printf( "%s", sqlca.sqlstate );
	    printf( "\n" );
	}

	return 0;
}


//ecpg postgresql_client.pgc
//gcc postgres_client.c -I /usr/include/pgsql/ -lecpg -o postgres_client -Wextra -g
//gcc postgresql_client.c -I /usr/include/postgresql/ -lecpg -o postgresql_client -Wextra -g
//./postgresql_client
