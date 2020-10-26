#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    while(scanf("%d",&n) != EOF)
    {
        s = n/3;
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i==j)&&!((i>=s&&i<(n - s ))&&(j>=n/3&&j<(n - s))))
                    cout<<2;
                else if((j==(n-1-i))&&!((i>=s&&i<(n - s ))&&(j>=n/3&&j<(n - s))))
                    cout<<3;
                else if((i>=s&&i<(n - s ))&&(j>=n/3&&j<(n - s)))
                {
                    if((i == n/2)&&(j == n/2))
                    cout<<4;
                    else
                        cout<<1;
                }
                 else
                    cout<<0;
            }
            cout<<endl;
        }
        cout<<endl;

    }
    return 0;
}
