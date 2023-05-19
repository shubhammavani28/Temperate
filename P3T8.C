#include<stdio.h>
#include<conio.h>

main()
{
   clrscr();
   int n,i,num=0;
   printf("Enter a Number :");
   scanf("%d",&n);

   if(n==0 && n==1)
   {
   prinrf("%d is not a prise number",n);
   }
   else
      {
    for(i=2;<=n/2;i++)
      {
       if(n%i==0)
       {
	   num==1;
	break;
	 }
	   }
	 if (num == 0)
	 break;
	 }
	  }
	if(num==0);
	{
	printf("%d is a prise number",n);
	}
	else
	{
	printf("%d is a prise numbar",n);
	}
      }

	getch();
}

