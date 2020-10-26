#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,i;
    for(i=0;i<100000;i++)
    {
        cin>>a>>b;
       if(a==0||b==0)
            break;
        else if(a>0&&b>0)
            cout<<"primeiro"<<endl;
        else if(a>0&&b<0)
            cout<<"quarto"<<endl;
        else if(a<0&&b<0)
            cout<<"terceiro"<<endl;
        else if(a<0&&b>0)
            cout<<"segundo"<<endl;


    }
}
