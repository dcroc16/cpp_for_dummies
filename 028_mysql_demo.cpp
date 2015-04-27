//
// getData - trying to get data from mySQL
//
// build step - gcc - o [name of output] $(mysql_config --cflags) [name of source code file] $(mysql_config --libs)
#include <mysql/mysql.h>
#include <iomanip>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;


string hostname = "david-HP-2000-Notebook-PC";

MYSQL *conn;
MYSQL mysql;
MYSQL_RES *res;
MYSQL_ROW row;

int query_state;

class User
{
public:
	User()
	{
		user;
		password;
		database;
		server;

	}
	char* user;
	char* password;
	char* database;
	char* server;

};

// declare prototypes

int main()
{

	const char *server="localhost";
    const char *user="root";
    const char *password="netzero1116";
    const char *database="my_db";

    

    mysql_init(&mysql);
    conn=mysql_real_connect(&mysql, server, user, password, database, 0, 0, 0);
    if(conn==NULL)
    {
       cout<<mysql_error(&mysql)<<endl<<endl;
      return 1;
    }
    

    query_state = mysql_query(conn, "UPDATE users SET first_name='Dave' WHERE first_name='DAVID';");
    if(query_state!=0)
    {
      cout<<mysql_error(conn)<<endl<<endl;
      return 1;
    }

    query_state=mysql_query(conn, "SELECT * FROM users;" );
    if(query_state!=0)
    {
      cout<<mysql_error(conn)<<endl<<endl;
      return 1;
    }
    res=mysql_store_result(conn);
    cout<<"MySQL Values in the Tasks Table."<<endl<<endl;

    int totalrows = mysql_num_rows(res);
	int numfields = mysql_num_fields(res);

    while((row = mysql_fetch_row(res)))
    {
    	for (int i = 0; i < numfields; i++)
    	{
    		char *val = row[i];
    		cout << row[i] << " | ";
    	}
    	cout << endl;
    }
    cout << endl;



	return 0;
}