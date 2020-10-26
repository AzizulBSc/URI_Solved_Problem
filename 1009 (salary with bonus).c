#include<stdio.h>
main()
{
    char n[100];
    double sal,sold,gs;
    scanf("%s%lf%lf",&n,&sal,&sold);
    gs = sal+sold*.15;
    printf("TOTAL = R$ %.2lf\n",gs);
}
