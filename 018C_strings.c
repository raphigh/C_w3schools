#include <stdio.h>

int main(){

	//define string as an array of characters
	char greeting[] = "hello";
	
	//output string
	printf("%s\n",greeting);

	//access to elements of a string
	printf("%c\n",greeting[3]);

	//modify a letter
	greeting[0] = 'j';
	printf("%s\n",greeting);

	//loop on the string
	char carname[] = "volvo";
	for (int i = 0 ; i < 5 ; i++){
		printf("%c\t",carname[i]);
	}
	//another way
	char greetings[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	printf("%s", greetings);
	//'\0' in this method tells C that string ends

	//sizeof
	printf("%lu \n",sizeof(greeting));
	printf("%lu \n",sizeof(greetings));

	return 0;
}
