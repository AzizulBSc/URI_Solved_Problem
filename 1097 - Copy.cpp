
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n=7;
    for(int i=1;i<=9;i+=2)
    {
        for(int j=0;j<3;j++){
            cout<<"I="<<i<<" "<<"J="<<(n-j)<<endl;
        }
        n+=2;
    }

}
