#include<stdio.h> 
//开头预处理指令，会在预编译阶段执行
// indlude 包含头文件，如果你需要调用某个函数，就需要包含相关的头文件
// <stdio.h> 系统路径查找  stdio.h 执行路径查找，再找系统路径

int main()
{
	/* code */

   printf("%s\n", "hello word");

	return 0;
}

// 编译 gcc HelloWord.c
// gcc HelloWord.c -o hello.exe