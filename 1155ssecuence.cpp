#include<bits/stdc++.h>
using namespace std;
int main()
{
    float s=0;
    for(int i=1;i<=100;i++)
    {
        s+=1/i;
    }
    printf("%.2lf\n",s);
    return 0;
}
