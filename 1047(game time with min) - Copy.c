#include<stdio.h>
main()
{
    int H1,M1,H2,M2,TH,TM;
    scanf("%d%d%d%d",&H1,&M1,&H2,&M2);
    if(H1<H2)
    {
       TH = ((((H2-H1)*60)-M1)+M2)/60;
       TM = ((((H2-H1)*60)-M1)+M2)%60;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",TH,TM);
    }
   else if(H1==M1&&H2==M2&&M2==M1||M1==M2)
    {
        TH = 24;
        TM = 0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",TH,TM);
    }
    else if(H1>H2)
    {
       TH = ((((24-H1)*60)-M1)+((H2*60)+M2))/60;
       TM = ((((24-H1)*60)-M1)+((H2*60)+M2))%60;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",TH,TM);
    }

    else if(H1==H2&&M1<M2)
    {
        TH = 0;
        TM = M2-M1;
         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",TH,TM);
    }
     else if(H1==H2&&M1>M2)
    {
        TH = 23;
        TM = M1-M2;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",TH,TM);
    }
}

