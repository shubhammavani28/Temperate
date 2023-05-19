#include<stdio.h>
#include<conio.h>

main()
{

   char ch='A';
   clrscr();
   do {
	printf("%c\t",ch);
	ch++;
	}while(ch<='Z');
	getch();
   }