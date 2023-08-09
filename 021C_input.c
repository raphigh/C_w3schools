#include <stdio.h>

int main(){

	//single input
	int user_num;
	printf("type a number : \n");
	scanf("%d",&user_num);
	printf("your number is : %d \n",user_num);

	//multiple output
	int num;
	char chr;
	printf("type a number and a character : \n");
	scanf("%d %c",&num,&chr);
	printf("your number is %d and your character is %c",num,chr);

	return 0;
}
