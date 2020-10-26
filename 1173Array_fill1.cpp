#include<bits/stdc++.h>
#include<algorithm>
 using namespace std;
 int main()
 {
     int N[10],x;
     cin>>x;
     N[0]=x;
     for(int i=1;i<=9;i++)
     {   x=x*2;
         N[i] =x;
     }
     int *begin = &N[0];
     int *end = &N[0]+(sizeof(N)/sizeof(int));
     int i=0;
     for(;begin!=end;begin++)
     {
         cout<<"N["<<i<<"]"<<" = "<<*begin<<endl;
         i++;
     }
     return 0;
 }
