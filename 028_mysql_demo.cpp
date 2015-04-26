//
// getData - trying to get data from mySQL
//

#include <mysql/mysql.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

MYSQL *conn, mysql;
MYSQL_RES *res;
MYSQL_ROW row;

int query_state;

class User
{
public:
	User()
	{
		user = "";
		password = "";
		database = "";
		server = "";

	}
	string user;
	string password;
	string database;
	string server;

};

// declare prototypes

int main(){

	User currentUser;

	cout << "Enter username: ";
	cin >> currentUser.user;
	cout << endl;
	cout << "Enter Password: ";
	cin >> currentUser.password;
	cout << endl;
	cout << "Enter server: ";
	cin >> currentUser.server;
	cout << endl;
	cout << "Enter Database: ";
	cin >> currentUser.database;
	cout << endl;

	cout << currentUser.user << endl;
	cout << currentUser.password << endl;
	cout << currentUser.server << endl;
	cout << currentUser.database << endl;

	return 0;
}