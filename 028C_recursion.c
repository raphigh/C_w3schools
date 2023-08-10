#include <stdio.h>


int fib(int);

int main(){
	int k;
	printf("enter the k : ");
	scanf("%d",&k);
	printf("\n %d",fib(k));
	
	return 0;
}


int fib(int k){
	if(k == 1 || k == 0){
		return 1;
	}
	return fib(k-1)+fib(k-2);

}
