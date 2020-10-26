#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,j,s;
    while(cin>>n)
    {

        if(n==0) break;
         s = 0;

        for(int i = n ,j=0; i< 100000;i++)
            {
                if(j>4) break;
                if(i%2==0)
                {
                    s += i;
                    j++;
                }
            }
            cout<<s<<endl;

    }
    return 0;
}
