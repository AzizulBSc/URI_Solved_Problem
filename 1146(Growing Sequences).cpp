#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i;
    for(i=1;;i++)
    {
        cin>>n;
        if(n==0)
            break;
        for(int j=1;j<=n;j++)
        {   if(j!=n)cout<<j<<" ";
            else if(j==n)cout<<j<<endl;

        }


    }

}


