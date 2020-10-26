#include<bits/stdc++.h>
using namespace std;
main()
{
    int password = 2002,a,i;
    for(i=0;i<=100000;i++)
    {
        cin>>a;
        if(a==password)
        {
            cout<<"Acesso Permitido"<<endl;
            break;
        }

        else
            cout<<"Senha Invalida"<<endl;
    }
}
