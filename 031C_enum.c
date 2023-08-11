#include <stdio.h>

/*
enum LEVEL {
	LOW,
	MEDIUM,
	High

};
*/

/*
enum LEVEL {
	LOW = 25;
	MEDIUM = 50;
	HIGH = 75;

};
*/


enum LEVEL{
	LOW = 1,
	MEDIUM,
	HIGH
};


int main(){

//	enum LEVEL myvar;
	enum LEVEL myvar = MEDIUM;
	switch(myvar) {
		
		case 1:
			printf("LOW LEVEL");
			break;
		case 2:
			printf("MEDIUM LEVEL");
			break;
		case 3:
			printf("HIGH LEVEL");
			break;
	
	}
	
	return 0;
}
