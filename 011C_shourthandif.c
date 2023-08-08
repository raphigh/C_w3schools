#include <stdio.h>

int main(){

	/*
	instead of :
	int time = 20;
	if (time < 18){
		printf("hello");
	}else{
		printf("bye");
	}
	*/
	int time = 20;
	(time < 18)? printf("hello"):printf("bye");
	
	return 0;
}
