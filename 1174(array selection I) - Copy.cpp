#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    float a[100],x;
      for(int i = 0; i <= 99; ++i)
        {
          cin>>x;
          a[i] = x;

        }

          for(int i = 0; i <= 99; ++i)
        {
          if(a[i]<=10)
            printf("A[%d] = %.1lf\n",i,a[i]);

        }
        return 0;
}
