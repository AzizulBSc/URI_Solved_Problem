#include<stdio.h>
 int main()
 {
    int m,r,a,b,c,d,e,f,g,h,i,j,k,l;
    double M;
    scanf("%lf",&M);
    m = M;
    r = (M-m)*100;
    a = m/100;
    b = (m%100)/50;
    c = ((m%100)%50)/20;
    d = (((m%100)%50)%20)/10;
    e = ((((m%100)%50)%20)%10)/5;
    f = (((((m%100)%50)%20)%10)%5)/2;
    g = ((((((m%100)%50)%20)%10)%5)%2)/1;
    g = g + r/100;
    h = (r%100)/50;
    i = ((r%100)%50)/25;
    j = (((r%100)%50)%25)/10;
    k = ((((r%100)%50)%25)%10)/5;
    l = (((((r%100)%50)%25)%10)%5)/1;
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",a);
printf("%d nota(s) de R$ 50.00\n",b);
printf("%d nota(s) de R$ 20.00\n",c);
printf("%d nota(s) de R$ 10.00\n",d);
printf("%d nota(s) de R$ 5.00\n",e);
printf("%d nota(s) de R$ 2.00\n",f);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",g);
printf("%d moeda(s) de R$ 0.50\n",h);
printf("%d moeda(s) de R$ 0.25\n",i);
printf("%d moeda(s) de R$ 0.10\n",j);
printf("%d moeda(s) de R$ 0.05\n",k);
printf("%d moeda(s) de R$ 0.01\n",l);
return 0;
}


