#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int N[] = {1,2,3,4,5,9,12,46,23,54,0,-5,63,23,9,45,67,89,-23,-56};
    int *begin = &N[0];
    int *end  = &N[0]+(sizeof(N)/sizeof(int));
    int i=0;
    for(;end!=begin;end--)
    {
        cout<<"N["<<i<<"]"<<" = "<<*end<<endl;
        i++;
    }
        return 0;
}
