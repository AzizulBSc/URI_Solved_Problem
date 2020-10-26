#include<stdio.h>
main()
{
    int D,YY,MM,DD;
    scanf("%d",&D);
    YY = D/365;
    MM = (D%365)/30;
    DD = (D%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",YY,MM,DD);
}
