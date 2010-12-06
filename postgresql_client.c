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

void ShowAll()
{
   
	/* exec sql begin declare section */
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
	
#line 11 "postgresql_client.pgc"
 char software_name [ 50 ] ;
 
#line 12 "postgresql_client.pgc"
 char description [ 255 ] ;
 
#line 13 "postgresql_client.pgc"
 int size ;
 
#line 14 "postgresql_client.pgc"
 char category [ 50 ] ;
 
#line 15 "postgresql_client.pgc"
 char price [ 50 ] ;
 
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


	
	/* declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , s . price , dev . email , dev . fio , dev . organization , p . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , packages p , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and dep . pkg_name = p . pkg_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location */
#line 26 "postgresql_client.pgc"

	
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cursor_ cursor for select s . software_name , s . description , s . size , s . category , s . price , dev . email , dev . fio , dev . organization , p . pkg_name , m . pkg_location , m . type_location from software_info s , software_and_developers sd , developers dev , depend dep , packages p , order_pkg o , methods m where s . software_name = sd . software_name and sd . email = dev . email and s . software_name = dep . software_name and dep . pkg_name = p . pkg_name and s . software_name = o . software_name and o . pkg_location = m . pkg_location", ECPGt_EOIT, ECPGt_EORT);}
#line 28 "postgresql_client.pgc"

	printf("\t software_name |\t description |\t size |\t category |\t price |\t e-mail |\t fio |\t organization |\t pkg_name |\t pkg_location |\t type_location\n");
	while(1)
	{
	    
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cursor_", ECPGt_EOIT, 
	ECPGt_char,(software_name),(long)50,(long)1,(50)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(description),(long)255,(long)1,(255)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(size),(long)1,(long)1,sizeof(int), 
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
#line 33 "postgresql_client.pgc"

		
		if (sqlca.sqlcode == ECPG_NOT_FOUND) break;		
		printf("\t %s \t %s \t %d \t %s \t %s \t %s \t %s \t %s \t %s \t %s \t %s\n", software_name, description, size, category, price, email, fio, organization, pkg_name, pkg_location, type_location );
	}
	
	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cursor_", ECPGt_EOIT, ECPGt_EORT);}
#line 39 "postgresql_client.pgc"

}

int main() {

  //Connecting with a Data Base
  /* exec sql begin declare section */
     
  
#line 46 "postgresql_client.pgc"
 char dbName [ 255 ] , userName [ 100 ] , password [ 100 ] ;
/* exec sql end declare section */
#line 47 "postgresql_client.pgc"

 
  //strcpy(dbName, "freeman@127.0.0.1:5432");
  strcpy(userName, "student");
  strcpy(password, "tvgu");
  strcpy(dbName, "student_db");
  if(strlen(userName) > 0) {
    //EXEC SQL CONNECT TO :dbName USER :userName/:password;
    { ECPGconnect(__LINE__, 0, dbName , userName , password , NULL, 0); }
#line 55 "postgresql_client.pgc"

  } else {
    { ECPGconnect(__LINE__, 0, dbName , NULL, NULL , NULL, 0); }
#line 57 "postgresql_client.pgc"

  }
  //Test connecting
  if( !strncmp(sqlca.sqlstate, "00000", 5)) {
    printf("\nConnect is ok!\n");
  }else{
    printf( sqlca.sqlstate );
    printf( "\n" );
  }
  
  int item=0;
  while(1) {
    printf("1. Show All.");
    scanf("%d", &item);
    if(item == 1) { ShowAll(); }
    else {
      printf("Gay, try again =)");
    }
  }
  
  
  { ECPGdisconnect(__LINE__, "CURRENT");}
#line 78 "postgresql_client.pgc"

  if( !strncmp(sqlca.sqlstate, "00000", 5)) {
    printf("\nDisconnect\n");
  }else{
    printf( sqlca.sqlstate );
    printf( "\n" );
  }
 
  return 0;
}


//postgresql_client.pgc
//gcc postgres_client.c -I /usr/include/pgsql/ -lecpg -o postgres_client -Wextra -g
//gcc postgresql_client.c -I /usr/include/postgresql/ -lecpg -o postgresql_client -Wextra -g
//./postgresql_client


