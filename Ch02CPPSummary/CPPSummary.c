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
为了语言的简洁性

2.main()函数
int main(void)
tip1: main()的理解
(1) main是一个函数名,C程序是从main()函数开始执行的
(2) main()函数不可以命名
(3) main()函数必须是开始的函数
tip2: 函数()的理解
(1) 用于识别main()是一个函数
tip3：int
(1) int是函数的返回值类型，表明返回值类型是整型
(2) 返回值返回到那里? 返回给操作系统
tip4：()内的单词是void
(1) 圆括号中包含一些传入函数的信息
(2) (void)表示没有传入信息
tip5：int main()
C90勉强接受这种形式，但是C99和C11不允许这样写，总之
不要这样写
tip6：void main()
void main()这种写法是不被认可的
标准写法：int main(void)

3.注释
tip1: /'*一个简单的注释*'/
(1) 缺少注释结束标记，注释无效
(2) 注释是为了更好看懂程序
tip2：//注释只能写在当前行
(1) 该注释风格是为了解决第一种注释风格的错乱问题

4.花括号{}
tip1:{函数体}
{：标记函数体的开始
}: 标记函数体的结束
tip2: {函数体}这是一种规定，花括号不能省略
tip3：{多条语句}花括号还可以把函数的多条语句合并为一个单元或块

5.声明
tip1: int num
这行代码称为函数的声明，声明：
(1) 函数中有一个名为num的变量,num是一个标识符,int num:这一声明
    会把将num这一标识符和计算机内存的某内存区域关联起来，同时也
    确定该区域存储的数据类型
(2) int表明num是一个整数，关于int的意义：编译器可以使用这些信息
    为num变量在内存中分配存储空间
(3) int是C语言的关键字，表示一种基本的C语言数据类型，关于关键字：
    C语言定义的单词，由C语言自身所内定的，不能用于其他用途
tip2：在C语言中, 所有的变量都必须声明才能使用
tip3：C99和C11都遵循: 可以把声明放在块的任何位置，首次使用变量
      一定要先声明变量
tip4：数据类型和命名
数据类型：C语言中有诸多数据类型，意义：
         让计算机能正确的存储，取读和解释由变量之内数据
tip5：更老的语言都允许直接使用变量，为何要采用变量声明？
(1) 把所有的变量放在一处，方便程序读者查找
(2) 变量的声明有助于发现隐藏在程序中的小错误，如：
    * 变量拼写错误
(3) 变量声明会促使在编写程序前做一些计划：
    * 程序的数据输入是什么
    * 程序的输出结果是什么
    * 表示数据最好的方式
tip6: 变量应该声明在何处？
(1) 把声明置于块的顶部（容易理解程序）
(2) 给变量赋值同时声明变量（防止忘记声明）   

6.命名：  
(1) 给变量命名时要使用有意义的标识符
(2) C99和C11允许使用更长的标识符，但是编译器只是识别前63个字符
    * 标识符的前63个字符相同，编译器可能将其视为同一标识符，也
      可能不会
(3) 标识符的命名规则：
    * 组成：小写字母、大写字母、数字和下划线（不能以数字开头）
    * 注意：(1) 操作系统和C库经常使用一个或者两个下划线字符开始
    *           的标识符
    *       (2) C语言名称区分大小写

7.赋值
(1) num =1;
    * 代码含义：将代码赋值给num
    * 执行过程：Step1：执行int num;编译器在计算机内存中变量num
    *                 预留空间
    *          Step2：把值1存储在之前预留的空间
    * 称其为变量原因：可以给num赋不同的值
    * 赋值语句：将右边的值赋值给左边，以分号结尾

8.printf("It is a cat\n")函数
(1) 解释：printf()函数，是C语言的一个标准函数,圆括号表明printf
         是一个函数名，圆括号的内容是printf的输入参数信息，这个
         参数是实际参数，简称实参。
         形参的解释：函数用于存储值的变量
(2) 换行符： 光标指示到下一行最左边开始新一行的位置。换行符是一种
            转义字符：转义字符用于表示难以表示的或者无法输入的字符
            如：(1) \t表示：tab键
                (2) \b表示：退格键
            转义字符都是以反斜杠开始
(3) 占位符：%d相当于一个占位符，作用是指明输出num的位置

9.return 语句 :return 0;
(1) return 0的必要性：
    * int main(void)中int表明main()函数应该返回一个整数
    * 这也要求main()函数需要有：return语句，同时此语句要
    * 以“;”结尾
    * (1) 特殊性：由于程序在运行至“}”时会自动返回0，故而
    *            return 0 可以省略
    * (2) 注意：但是函数的返回值为其他值时，不能遗漏return
    *           语句
    * (3) 习惯建议：在main()函数中保留return语句
(2)            
*/
