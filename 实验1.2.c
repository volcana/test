#include<stdio.h>
int main()
{ int x,y,sum=0;
  printf("please input a ÕıÕûÊı:");
   scanf("%d",&x);
    while(x!=0)
	{y=x%10;
         x=x/10;
         sum=sum*10+y;
	}
    printf("%d",sum);
    return 0;
}
