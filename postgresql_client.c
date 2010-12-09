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
 char price [ 50 ] ;
 
#line 17 "postgresql_client.pgc"
 char email [ 100 ] ;
 
#line 18 "postgresql_client.pgc"
 char fio [ 150 ] ;
 
#line 19 "postgresql_client.pgc"
 char organization [ 150 ] ;
 
#line 20 "postgresql_client.pgc"
 char pkg_name [ 150 ] ;
 
#line 21 "postgresql_client.pgc"
 char pkg_location [ 150 ] ;
 
#line 22 "postgresql_client.pgc"
 char type_location [ 50 ] ;
/* exec sql end declare section */
#line 23 "postgresql_client.pgc"


    
    /* declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , s . price , dev . email , dev . fio , dev . organization , p . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , packages p , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and dep . pkg_name = p . pkg_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location */
#line 27 "postgresql_client.pgc"

    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , s . price , dev . email , dev . fio , dev . organization , p . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , packages p , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and dep . pkg_name = p . pkg_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location", ECPGt_EOIT, ECPGt_EORT);}
#line 29 "postgresql_client.pgc"

    printf("software_name |\t description |\t size |\t category |\t price |\t e-mail |\t fio |\t organization |\t pkg_name |\t pkg_location |\t type_location\n");
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
	ECPGt_char,(price),(long)50,(long)1,(50)*sizeof(char), 
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
#line 34 "postgresql_client.pgc"

        
        if (sqlca.sqlcode == ECPG_NOT_FOUND) break;        
        printf("%s \t %s \t %ld \t %s \t %s \t %s \t %s \t %s \t %s \t %s \t %s\n", software_name, description, size, category, price, email, fio, organization, pkg_name, pkg_location, type_location );
    }
    
    printf("\n\n");
    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_", ECPGt_EOIT, ECPGt_EORT);}
#line 42 "postgresql_client.pgc"

}


void ShowTable1() {
   
    /* exec sql begin declare section */
         
         
         
         
         
    
#line 49 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 50 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 51 "postgresql_client.pgc"
 long size ;
 
#line 52 "postgresql_client.pgc"
 char category [ 50 ] ;
 
#line 53 "postgresql_client.pgc"
 char price [ 50 ] ;
/* exec sql end declare section */
#line 54 "postgresql_client.pgc"


    
    /* declare cursor_1 cursor for select * from software_info */
#line 58 "postgresql_client.pgc"

    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_1 cursor for select * from software_info", ECPGt_EOIT, ECPGt_EORT);}
#line 60 "postgresql_client.pgc"

    printf("software_name |\t description |\t size |\t category |\t price \n");
    while(1)
    {
        
        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_1", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(description),(long)255,(long)1,(255)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(price),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 65 "postgresql_client.pgc"

        
        if (sqlca.sqlcode == ECPG_NOT_FOUND) break;        
        printf("%s \t %s \t %ld \t %s \t %s \n", software_name, description, size, category, price );
    }
    
    printf("\n\n");
    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_1", ECPGt_EOIT, ECPGt_EORT);}
#line 73 "postgresql_client.pgc"

}


void ShowTable2() {
    /* exec sql begin declare section */
         
         
        
    
#line 79 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 80 "postgresql_client.pgc"
 char email [ 100 ] ;
/* exec sql end declare section */
#line 82 "postgresql_client.pgc"


    
    /* declare cursor_2 cursor for select * from software_and_developers */
#line 86 "postgresql_client.pgc"

    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_2 cursor for select * from software_and_developers", ECPGt_EOIT, ECPGt_EORT);}
#line 88 "postgresql_client.pgc"

    printf("software_name |\t e-mail \n");
    while(1) {
        
        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_2", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(email),(long)100,(long)1,(100)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 92 "postgresql_client.pgc"

        
        if (sqlca.sqlcode == ECPG_NOT_FOUND) break;        
        printf("%s \t %s \n", software_name, email);
    }
    
    printf("\n\n");
    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_2", ECPGt_EOIT, ECPGt_EORT);}
#line 100 "postgresql_client.pgc"


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
            //Show3();
            break;
        }
        case 4: { 
            //Show2();
            break;
        }
        case 5: { 
            //Show5();
            break;
        }
        case 6: { 
            //Show6();
            break;
        }
        case 7: { 
            //Show7();
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

void Insert1() {

    /* exec sql begin declare section */
         
         
         
         
         
    
#line 157 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 158 "postgresql_client.pgc"
 char description [ 50 ] ;
 
#line 159 "postgresql_client.pgc"
 long size ;
 
#line 160 "postgresql_client.pgc"
 char category [ 50 ] ;
 
#line 161 "postgresql_client.pgc"
 char price [ 255 ] ;
/* exec sql end declare section */
#line 162 "postgresql_client.pgc"
    
    printf("\nenter 'software_name', please => ");
    scanf("%s", software_name);
    printf("\nenter 'description', please => ");
    scanf("%s", description);
    printf("\nenter 'size', please => ");
    scanf("%ld", &size);
    printf("\nenter 'category', please => ");
    scanf("%s", category);
    printf("\nenter 'price', please => ");
    scanf("%s", price);
    
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into software_info values ( $1  , $2  , $3  , $4  , $5  )", 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(description),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_long,&(size),(long)1,(long)1,sizeof(long), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(category),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(price),(long)255,(long)1,(255)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 174 "postgresql_client.pgc"

    if( strncmp(sqlca.sqlstate, "00000", 5)) {
        printf( "%s", sqlca.sqlstate );
        printf( "\n" );
    }
    { ECPGtrans(__LINE__, NULL, "commit");}
#line 179 "postgresql_client.pgc"

}

void Insert()
{

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
        case 7: { 
            //Insert7();
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
    printf("5. packages\n");
    printf("6. order_pkg\n");
    printf("7. methods\n\n\n");
}


int main() {

    //Connecting with a Data Base
    /* exec sql begin declare section */
       
    
#line 245 "postgresql_client.pgc"
 char dbName [ 255 ] , userName [ 100 ] , password [ 100 ] ;
/* exec sql end declare section */
#line 246 "postgresql_client.pgc"

 
    //strcpy(dbName, "freeman@127.0.0.1:5432");
    //strcpy(userName, "student");
    //strcpy(password, "tvgu");
    //strcpy(dbName, "student_db");
    strcpy(userName, "freeman");
    strcpy(password, "freeman!login");
    strcpy(dbName, "soft");
    if(strlen(userName) > 0) {
        //EXEC SQL CONNECT TO :dbName USER :userName/:password;
        { ECPGconnect(__LINE__, 0, dbName , userName , password , NULL, 0); }
#line 257 "postgresql_client.pgc"

    } else {
        { ECPGconnect(__LINE__, 0, dbName , NULL, NULL , NULL, 0); }
#line 259 "postgresql_client.pgc"

    }
    //Test connecting
    if( !strncmp(sqlca.sqlstate, "00000", 5)) {
        printf("\nConnect is ok!\n");
    }else{
        printf( "%s", sqlca.sqlstate );
        printf( "\n" );
    }
  
    bool do_it= true;
    int item=0;
    while(do_it) {
	printf("0. Exit.\n");
	printf("1. Show.\n");
	printf("2. Insert.\n");
	printf("3. Show table list.\n");
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
		ShowTableList();
		break;
	    }
	    default: {
		printf("Gay, try again =)\n");
	    }
	}
    }
  
  
    { ECPGdisconnect(__LINE__, "CURRENT");}
#line 301 "postgresql_client.pgc"

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
