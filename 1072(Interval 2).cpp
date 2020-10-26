#include<bits/stdc++.h>
using namespace std;
main()
{
    int N,a,out=0,in=0,i;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>a;
        if(a>=10&&a<=20)
            in++;
        else
            out++;
    }
    cout<<in<<" in"<<"\n";
    cout<<out<<" out"<<"\n";
}
