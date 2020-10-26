#include<stdio.h>
main()
{
    float S,n,i;
    scanf("%f",&S);
    if(S >= 0& S <=400.0)
    {
        i = S*.15;
        n = S+i;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",n,i);
    }
    else if(S > 400.0&&S <=800.0)
    {
        i = S*.12;
        n = S+i;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",n,i);
    }
    else if(S > 800.0&&S <= 1200.0)
    {
        i = S*.10;
        n = S+i;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",n,i);
    }
    else if(S > 1200.0&&S <= 2000.0)
    {
        i = S*.07;
        n = S+i;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",n,i);
    }
    else if(S >2000.0)
    {
        i = S*.04;
        n = S+i;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",n,i);
    }


}
