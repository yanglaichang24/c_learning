#include<stdio.h> 

//函数的声明
int add(int,int);

// warning: implicit declaration of function 'xx' [-Wimplicit-functi on-declaration]  
// 如果有这个错误，是主函数使用未声明的函数
// 解决办法一： 主函数写在后面
// 解决方法二： 主函数前写函数声明


int main()
{
    int a = 3;
    int b = 4;

    int c = add(a,b);

    printf("%d",c);
	 
	return 0;
}

int add(int a,int b){
	return a + b;
}


