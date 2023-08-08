//stdbool not stdio
#include <stdbool.h>
#include <stdio.h>


int main(){

	 bool t = true;
	bool f = false;
	printf("%d", t || f);

	int myAge = 23;
	int legalAge = 18;
	printf("\n %d",myAge <  legalAge);

	return 0;
}
