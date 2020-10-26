#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,P[10],I[10];
    int p=0,c=0;
    for(int i=0;i<15;i++)
    {
        cin>>N;

        if(N%2==0)
        {
            P[p]=N;
            p++;
        }

        else if(N%2==1)
        {
            I[c]=N;
            c++;
        }

    }

    for(int i=0;i<5;i++)
    {
      cout<<"par["<<i<<"] = "<<P[i]<<endl;
    }
    int C = 0,j = 0,k = 0;
     for(int t=5;t<15;t++)
    {
        if(I[C]!='\0')
              {   if(C<5)
                  {
                     cout<<"impar["<<C<<"] = "<<I[C]<<endl;

                  }

                 else if(C>4)
                  {
                    cout<<"impar["<<j<<"] = "<<I[C]<<endl;
                    j++;

                 }

                 C++;

           }
        else
           {
              cout<<"par["<<k<<"] = "<<P[5+k]<<endl;
              k++;
           }

    }

}
