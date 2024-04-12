#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
	
    char ch;
	while(ch != 27)
	{
	   printf("hello \n");
       if(_kbhit()){
		  ch = _getch();
         
          printf("%c\n",ch);
          printf("%d\n",ch);
	   }
	  Sleep(1000);//延时0.5s
	}
	printf("End!\n");
	system("pause");
	return 0;

}