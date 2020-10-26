#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,y,n=0;
    double t=0,a;
    for(i=1;i<=10000;i++)
    {
       cin>>y;
       if(y<0)
        break;
       else

       {
           t = t+y;
           n++;
       }


    }
    a = t/n;
    printf("%.2lf\n",a);

}
