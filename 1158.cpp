#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x%2!=0)
        {
            for(int j=1;j<y;j++)
            {
                x+= x+2;
            }

        }
        else if(x%2==0)
        {

            {

            for(int j=1;j<y;j++)
            {
                x+= x+1;
            }
            }


        }
        cout<<x<<endl;
    }
    return 0;
}
