#include <stdio.h>

int main(){

	for(int i = 0 ; i < 10 ; i++){
	if (i == 4){
			break;
		}printf("%d\n",i);
	}

	for (int i = 0 ; i < 10 ; i++){
		if (i < 4){
			continue;
		}printf("%d\n",i);
	}


	int i = 0;
	while(i < 10){
		if(i == 4){
			break;
		}
	printf("%d",i);
	i++;
	}

	i = 0;
	while(i < 10){
		if (i == 4){
			i++;
			continue;
		}
		printf("%i",i);
		i++;
	}

	return 0;
}
