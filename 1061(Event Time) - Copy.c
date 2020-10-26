#include<stdio.h>
main()
{
   int d1,h1,m1,s1,d2,h2,m2,s2,dt,ht,mt,st,TS;
   char dia1[4],dia2[4],hm1[4],ms1[4],hm2[4],ms2[4];
   scanf("%s%d%d%s%d%s%d%s%d%d%s%d%s%d",dia1,&d1,&h1,hm1,&m1,ms1,&s1,dia2,&d2,&h2,hm2,&m2,ms2,&s2);
   TS = (d2-d1)*86400-(h1*3600+m1*60+s1)+(h2*3600+m2*60+s2);
   dt = TS/86400;
   ht = (TS%86400)/3600;
   mt = ((TS%86400)%3600)/60;
   st = ((TS%86400)%3600)%60;
   printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dt,ht,mt,st);
}
