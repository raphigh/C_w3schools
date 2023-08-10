#include <stdio.h>

//funcion with one parameter
void helloName(char name[]){
	printf("hello %s\n",name);
}

//functions with multi parameters
void helloNameAge(char name[],int age){

	printf("hello %s ! you are %d\n",name,age);
}

//pass array as parameter
void printList(int lst[5]){
	for (int i = 0; i<5; i++){
		printf("%d\n",i);
	}

}


//return values

int returnum(int num){
	return num;
}

int sumnum(int x, int y){
	return x + y;
}
int main(){
	
	helloName("jenny");
	helloName("harry");	
	helloNameAge("raphi",23);
	int lst[5] = {1,2,30,4,50};
	printList(lst);
	printf("%d\n",returnum(5));
	printf("%d\n",sumnum(4,9));
	return 0;
}
