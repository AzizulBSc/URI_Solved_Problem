#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,r=1;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        r = r*i;
    }
    cout<<r<<endl;
    return 0;
}
