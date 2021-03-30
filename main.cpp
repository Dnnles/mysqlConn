#include <mysql.h>
#include <stdio.h>

#define IP_ADDR "127.0.0.1"
#define USER_NAME "root"
#define DB_PASSWORD "xianzhi1012"
#define DB_NAME "book"
MYSQL* conn = NULL;

int main(void) {
	conn = mysql_init(NULL);

	if (!mysql_real_connect(conn, IP_ADDR, USER_NAME, DB_PASSWORD, DB_NAME, 0, NULL, 0)) {
		printf("%s\n", mysql_error(conn));
		printf("连接数据库服务器失败\n");
	} else {
		printf("成功");
	}
	return 0;
}