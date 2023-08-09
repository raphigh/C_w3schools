#include <stdio.h>

int main(){
/*
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
	printf("your number is %d and your character is %c\n",num,chr);
	

	//input string
	char name[30];
	printf("what\'s your name?\n");
	scanf("%s",name);
	printf("your name is %s",name);
*/
	//C compiler doesn\'t understand space in scanf so we use fgets
	char fullname[30];
	printf("\n insert your full name : ");
	fgets(fullname,sizeof(fullname),stdin);
	printf("\n your full name is %s ",fullname);
	return 0;
}
