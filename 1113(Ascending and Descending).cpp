#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b;
    for(int i=0;i<=10000;i++)
    {
       cin>>a>>b;
       if(a==b)
        break;
       else if(a<b)
        cout<<"Crescente"<<endl;
       else if(a>b)
        cout<<"Decrescente"<<endl;
    }

}
