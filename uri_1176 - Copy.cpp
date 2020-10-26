#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N[61];
    int n,x;
    N[0] = 0;
    N[1] = 1;
      for(int i=2;i<61;i++)
     {
         N[i]= N[i-2]+N[i-1];
     }
      cin>>n;
    for(int j=1;j<=n;j++)
    {
        cin>>x;
        cout<<"Fib("<<x<<") = "<<N[x]<<endl;
    }
    return 0;
}
