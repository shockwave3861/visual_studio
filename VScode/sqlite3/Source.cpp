#include <sqlite3.h>
#include <iostream>
#include <string>

using namespace std;


static int callback(void* NotUsed, int argc, char** argv, char** azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}


int main(int argc, char* argv[]) {
	sqlite3* db;
	int rc;
	const char* sql;
	char* zErrMsg = 0;

	/////////////// CREATE / OPEN DATABASE ///////////////

	rc = sqlite3_open("test.db", &db);

	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return(0);
	}
	else {
		fprintf(stderr, "Opened database successfully\n");
	}

	/////////////// CREATE TABLE ///////////////

	sql = "CREATE TABLE if NOT EXISTS OBJECT_DETAILS("\
		"TIME_STAMP      TEXT                    NOT NULL,"\
		"ZONE_NUMBER     INT                     NOT NULL,"\
		"SPEED           INT                     NOT NULL,"\
		"CLASS           INT                     NOT NULL,"\
		"DIRECTION       INT                     NOT NULL,"\
		"OBJECT_ID       INT                     NOT_NULL);";

	rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else {
		fprintf(stdout, "Table created successfully\n");
	}

	/////////////// INSERT DATA ///////////////

	string time_stamp = "2020.02.01_17.24.30";
	time_stamp.insert(0, "'");
	time_stamp.append("'");
	int zone_number = 1;
	float speed = 30.6;
	int object_class = 30;
	int direction = 02;
	int object_id = 99;
	
	sql = /*"SELECT OBJECT_ID FROM OBJECT_DETAILS;"\*/
		"DELETE FROM OBJECT_DETAILS WHERE OBJECT_ID=99;";

	rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else {
		fprintf(stdout, "Deleted successfully\n");
	}


	string all = "INSERT INTO OBJECT_DETAILS (TIME_STAMP,ZONE_NUMBER,SPEED,CLASS,DIRECTION,OBJECT_ID)"
		"VALUES (" + time_stamp + "," + to_string(zone_number) + "," + to_string(speed) + "," + to_string(object_class) + "," + to_string(direction) + "," + to_string(object_id) + ");";

	sql = &all[0];

	/*sql = "INSERT INTO OBJECT_DETAILS (TIME_STAMP,ZONE_NUMBER,SPEED,CLASS,DIRECTION,OBJECT_ID)"
		"VALUES ("");";*/

	rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else {
		fprintf(stdout, "Records created successfully\n");
	}


	sqlite3_close(db);
	return(0);
}
