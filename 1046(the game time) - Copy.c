#include<stdio.h>
main()
{
    int B,E,T;
    scanf("%d%d",&B,&E);
    if(B>E)
    {
      T = (24-B)+E;
      printf("O JOGO DUROU %d HORA(S)\n",T);

    }
    if(B<E)
    {
        T = E - B;
        printf("O JOGO DUROU %d HORA(S)\n",T);
    }
    if(B==E)
    {
        T = 24;
        printf("O JOGO DUROU %d HORA(S)\n",T);
    }
}
