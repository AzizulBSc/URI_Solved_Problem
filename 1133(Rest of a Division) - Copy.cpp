#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b;
    cin>>a>>b;
    if(a<=b)
    for(int i=a+1;i<b;i++)
    {
        if(i%5==2||i%5==3)
            cout<<i<<endl;
    }
    if(b<=a)
    for(int i=b+1;i<a;i++)
    {
        if(i%5==2||i%5==3)
            cout<<i<<endl;
    }

}

