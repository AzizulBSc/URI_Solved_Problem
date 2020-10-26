#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,x,n;
    cin>>n;
    for(i=1;i<=n;i++)
        {
             cin>>x;
            int flag=0;

            {
               for(int j=2;j<x/2;j++)
               {
                   if(x%i==0)
                    flag++;
                    break;
               }
               if(flag==1&&x!=1)
                 cout<<x<<" eh primo"<<endl;

               else
                  cout<<x<<" nao eh primo"<<endl;
            }
        }
    }
