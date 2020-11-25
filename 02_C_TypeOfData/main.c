#include <stdio.h>

int main()
{
	printf("char = %d 字节(byte)\n", sizeof(char));        //1
	printf("short = %d 字节(byte)\n", sizeof(short));		 //2
	printf("int = %d 字节(byte)\n", sizeof(int));         //4
	printf("float = %d 字节(byte)\n", sizeof(float));       //4
	printf("long = %d 字节(byte)\n", sizeof(long));        //4
	printf("double = %d 字节(byte)\n", sizeof(double));      //8
	printf("long long = %d 字节(byte)\n", sizeof(long long));   //8

	return 0;
}