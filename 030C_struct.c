#include <stdio.h>
#include <string.h>

struct myStruct{

	int myNum;
	char myChar;

};

struct yourStruct{
	
	int yourNum;
	char yourStr[30];

};


int main(){
	
	struct myStruct s1;;

	s1.myNum = 23;
	s1.myChar = 'C';	

	printf("s1 num = %d and s1 char = %c",s1.myNum,s1.myChar);

	struct myStruct s2;
	
	s2.myNum = 24;
	s2.myChar = 'D';
	
	printf("\ns2 num = %d and s2 char = %c",s2.myNum,s2.myChar);
	
	struct yourStruct s3;

	s3.yourNum = 5;
//	s3.yourStr = "salam"; incorrect
	strcpy(s3.yourStr,"salam");
	printf("\nyour string is : %s",s3.yourStr);

	//direct way	
	struct yourStruct s4 = {15,"hello"};
	printf("\ns4 num = %d and s4 string is %s",s4.yourNum,s4.yourStr);
	
	//copy struct
	struct yourStruct s5;
	s5 = s4;
	printf("\n s5 string is %s",s5.yourStr);
	s4.yourNum = 6;
	printf("\n s5 num is %d",s5.yourNum);
	s5.yourNum = 7;
	printf("\n s5 num is %d",s5.yourNum); 		
	return 0;
}
