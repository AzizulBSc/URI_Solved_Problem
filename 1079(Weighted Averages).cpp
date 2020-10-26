#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
main()
{
    int N;
    double wa,x,y,z,a[10000];
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>x>>y>>z;
         wa = (x*2+y*3+z*5)/10;
         a[i] = wa;

    }
    for(int i=0;i<N;i++)
     cout<<fixed<<setprecision(1)<<a[i]<<endl;

}
