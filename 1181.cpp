#include<bits/stdc++.h>
using namespace std;
int main()
{
    double N[12][12],sum=0.0;
    char c;
    int n;
    cin>>n>>c;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>N[i][j];
        }
    }
    for(int i=0;i<12;i++)
    {
        sum+=N[i][n];
    }
    if(c=='S')
        printf("%.1lf\n",sum);
    else if(c=='M')
        printf("%.1lf\n",sum/12.0);
    return 0;
}
