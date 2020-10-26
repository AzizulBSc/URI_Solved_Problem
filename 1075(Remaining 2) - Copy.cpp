#include<bits/stdc++.h>
using namespace std;
main()
{
    int N;
    cin>>N;
    for(int i=1;i<=10000;i++)
    {
        if(i%N==2)
        {
            cout<<i<<endl;
        }
    }
}
