// c language Introducing

//# include   --preprocessor instruction
//stdio.h is a standard part of all c compiler packages, which provide the support for keyboard input and for displaying output
# include <stdio.h> /*the line tells the compiler to include the information found in the file stdio.h*/
//main() is always the first function call
//functions are made up of statements
//functions are the building block of c
//5 types of statements in c language
/*
statements including declaration、assignment、
function、control、null
*/

/* a simple c program*///c language is made up keywords、identifiers、operations、data

int main(void) //main is a function name 
{//‘{’ begin of the body of the function
    int num;//a declaration statement 
    num =1;//an assignment statement 
    printf("I am a simple ");//a function call statement 
    printf("computer.\n");// \n is code telling the computer to start a new line 
    printf("My favorite number is %d because it is first.\n", num);
    return 0;
}

// 好啦，现在不装了，后面用中文
/* program detail(程序的细节)
1.# include指令和头文件
tip1：# include<stdio.h>
这是一种“拷贝-粘贴”的操作，此操作将stdio.h文件中的所有内容输入
于该行所在的位置
tip2：# include 
这是一条C语言的预处理命令。预处理：C编译器在编译前的一些准备工作
tip3：stdio.h
这是标准输入输出头文件。
头文件位置：放置于the top of C program的信息集合
头文件：编译器创建最终可执行程序要用到的信息，include:
(1) 定义的一些常量
(2) 函数声明
头文件功能：帮助编译器能正确地组装起来
tip4：为什么不将标准的输入、输出内置于语言中



*/