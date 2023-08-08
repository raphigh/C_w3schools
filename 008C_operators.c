#include <stdio.h>

int main(){
	int myNum = 100 + 50;
	int num1 = 100;
	int num2 = num1 + 60;
	int sum = num1 + num2;
	//arithmetic operators
	int num3 = sum + num2;
	int num4 = sum - num3;
	int num5 = sum * num4;
	float num6 =(float) sum/2;
	int num7 = 18%4;
	num7 ++;
	num7 --;
	printf("num6 = %f and num7 = %i\n",num6,num7);
	//assignment operators
	int x = 10;
	x += 2;
	x -= 3;
	x *= 4;
	x /= 3;
	x %= 7;
	x &= 3; //and
	x |= 4; //or
	x ^= 2; //xor
	x >>= 3; //3 bits right shift
	x <<= 4; //4 bits left shift

	//comparison operators
	x = 5;
	int y = 6;
	printf("%d\n",x>y);
	printf("%d\n",x == y);
	printf("%d\n",x != y);
	printf("%d\n", x <= y);
	
	//logical operators
	printf("%d\n",1 && 0); //and
	printf("%d\n",1 || 0); //or
	printf("%d\n",!1);//not
	
	//sizeof operator
	int intgr;
	float flt;
	char chr;
	double dbl;
	//lu = long unsigned
	printf("int : %lu \n float : %lu \n char : %lu \n double : %lu \n",sizeof(intgr),sizeof(flt),sizeof(chr),sizeof(dbl));
  
	return 0;
}
