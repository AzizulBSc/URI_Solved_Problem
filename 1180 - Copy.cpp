#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N[1000],x;
    cin>>x;
    int min=N[0],p;
    for(int i=0;i<x;i++)
    {
        cin>>N[i];
        if(N[i]<=min)
        {
            min=N[i];
           p=i;
        }


    }
    cout<<"Menor valor: "<<min<<endl;
cout<<"Posicao: "<<p<<endl;
}
