#include <stdio.h>
int main()
{
    int a,y,m,d;
    scanf("%d",&a);
     y=a/365;
   m=(a%365)/30;
   d=((a%365)%30)/1;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
