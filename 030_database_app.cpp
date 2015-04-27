#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

static char *host = "localhost";
static char *user = "root";
static char *pass = "netzero1116";
static char *dbname = "my_db";

unsigned int port = 3306;
static char *unix_socket = NULL;
unsigned int flag = 0;

int main(){

	MYSQL *conn;

	conn = mysql_int(NULL);

	if(!(mysql_real_connect(conn, host, user,pass, dbname, port, unix_socket, flag)))
	{
		fprintf(stderr, "\nError: %s [%d]\n", mysql_error(conn), mysql_errno(conn));
		exit(1);
	}
	printf("Connection Successful!\n\n");

	return 0;
}