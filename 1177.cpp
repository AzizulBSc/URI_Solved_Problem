#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N[1000],x;
    cin>>x;
    int n=0;
    for(int i=0;i<1000;i++)
    {
        if(n<x)
        {
           N[i] = n;
           n++;
        }
        else if(n=(x-1))
           {
               n=0;
               N[i] = n;
               n++;
           }



    }
    for(int i=0;i<1000;i++)
        {
            cout<<"N["<<i<<"] = "<<N[i]<<endl;
        }
    return 0;
}
