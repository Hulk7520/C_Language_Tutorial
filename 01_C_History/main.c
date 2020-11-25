//包含一个stdio.h的文件，并且用<>括起来。
//std - 标准,standard
//io - input output 输入输出
#include <stdio.h> 

//C语言程序中main()是一个函数，同时这个函数是整个C项目中唯一的一个入口，有且只有一个
//无论你的项目多么复杂或者多么简单，main()都是唯一的起点，主入口（不能省略）
//注意:void main() {} 这是一种比较老的方式，在不同的编译器中会有区别
int main()
{
	//printf()这是标准输出函数，是库函数，包含在stdio.h库文件中
	printf("Hello world!\n");//你好世界！
	return 0;
}

