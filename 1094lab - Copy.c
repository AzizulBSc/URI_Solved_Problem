#include<bits/stdc++.h>
main()
{
    int N,i,a[1000000];
    double pc,pr,ps,t=0,r=0,c=0,s=0;
    char b[10000900];
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d\n%c",&a[i],&b[i]);
        t+=a[i];
        if(b[i]=='C')
            c+= a[i];
        else if(b[i]=='R')
            r+= a[i];
        else if(b[i]=='S')
            s+= a[i];
    }
    pc = (c*100)/t;
    pr = (r*100)/t;
    ps = (s*100)/t;
    printf("Total: %.0lf cobaias\n",t);
    printf("Total de coelhos: %.0lf\n",c);
    printf("Total de ratos: %.0lf\n",r);
    printf("Total de sapos: %.0lf\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",pc);
    printf("Percentual de ratos: %.2lf %%\n",pr);
    printf("Percentual de sapos: %.2lf %%\n",ps);
}
