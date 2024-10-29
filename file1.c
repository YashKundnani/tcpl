// file contains database connection
// and functions to be used in frontend
#include <stdio.h>
#include <mysql.h>
#include <stdlib.h>

int main(){

	//Database Connection
	MYSQL* DBConn = mysql_init(NULL);
   if (!(DBConn = mysql_init(0)))
   {  
      // if DBconn == NULL

      fprintf(stderr, "unable to initialize connection struct\n");
      mysql_close(DBConn);
      exit(1);
   }

   printf("Starting connection to database...\n");

   // Connect to the database
   if (!mysql_real_connect(
            DBConn,                 // Connection
         "localhost",// Host
         "root",            // User account
         "passphrase",   // User password
         "db1",               // Default database
         3306,                 // Port number
         NULL,                 // Path to socket file
         0                     // Additional options
      ))
   printf("Connection Successful\n");
	//Use Connection to perform CRUD operations or any operations
   if(!mysql_query(DBConn, "SHOW DATABASES;")){
      fprintf(stderr,"%s \n" ,mysql_error(DBConn));
      mysql_close(DBConn);
   }

   MYSQL_RES* result = mysql_use_result(DBConn);

   mysql_get_server_info(DBConn);

   while(!(result->row)){
   printf("%s \n", &(&result->row)); 
   }

	//Close connection
	mysql_close(DBConn);


	//Listen for frontend
	return 0;
}
