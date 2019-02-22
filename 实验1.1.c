#include <stdio.h>
int main()
{
   int y,m;
   printf("请输入年和月:");
   scanf("%d%d",&y,&m);
   if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    printf("d=%d\n ",31);
   if (m==4||m==6||m==9||m==11)
    printf("d=%d\n ",30);
    else if(m==2)
      { if ((y%4==0&&y%100!=0)||y%400==0)
           printf("d=%d\n",29);
        else
            printf("d=%d\n",28);
        }
  return 0;
   }

