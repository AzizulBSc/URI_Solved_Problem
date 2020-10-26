#include<bits/stdc++.h>
using namespace std;
main()
{
       int k=1,t=60;
       for(int i=0;i<100;i++)

       {
          cout<<"I="<<k<<" "<<"J="<<t<<endl;
          if(t==0)
           break;
           k+=3;t-=5;
       }
}
