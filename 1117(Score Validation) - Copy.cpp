#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
main()
{
    double a[10000],sum=0;
    int temp=0,j=0;
    for(int i=0;i<100000;i++)
    {
        if(temp==2)
            break;
       cin>>a[i];
       j++;
       if(a[i]>=0&&a[i]<=10)
        {
            temp+=1;
            sum +=a[i];

        }

        else
        cout<<"nota invalida"<<endl;

    }
    double med = (sum)/2;
    cout<<"media = "<<fixed<<setprecision(2)<<med<<endl;








}
