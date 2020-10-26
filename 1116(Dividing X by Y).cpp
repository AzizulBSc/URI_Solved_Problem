#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
main()
{
    int i,n;
    float a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(1)<<a/b<<endl;
        }
    }
}
