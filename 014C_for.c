#include <stdio.h>

int main(){
	for (int i = 0 ; i < 6; i++){
		printf("hello\t");
	}

	printf("\n");
	
	for (int i = 0 ; i < 5;++i){
		for (int j = 0 ; j < 5 ;j++){
			printf("%d",i*j);	
		}
	}
	
	
	return 0;
}
