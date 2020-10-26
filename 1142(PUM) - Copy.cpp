#include<bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin>>a;
    for(int i=1;i<(a*4);i+=4)
    {
        for(int j=0;j<3;j++)
        {
            cout<<(i+j)<<" ";
        }
        cout<<"PUM"<<endl;
    }
}
