#include <stdio.h>
#include <string.h>

int main(){
	
	//length of string
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%lu\n", strlen(alphabet));
	
	printf("%lu\n", sizeof(alphabet)); //includes \0
	
	//concatinate
	char str1[20] = "Hello ";
	char str2[] = "World!";
	strcat(str1, str2);
	printf("%s\n", str1); 
	
	//copy strings
	char st1[20] = "Hello World!";
	char st2[20];
	strcpy(st2, st1);
	printf("%s", st2);

	//compare strings
 	char s1[] = "hello";
	char s2[] = "hello";
	char s3[] = "hi";
	
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",strcmp(s1,s3));

	return 0;
}
