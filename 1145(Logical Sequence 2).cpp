#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,x,y;
    cin>>x>>y;
    n=1;
    for(int i=1;i<=y/x;i++)
    {

        for(int j=1;j<=x;j++)
        {
           cout<<n<<" ";
           n+=1;
        }
            cout<<endl;
    }

}

