#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[10];
    int temp;
    for(int i = 0;i<3;i++)
    {
        temp =0;
        while(1)
        {
            gets(x);
            if(x[0]=='c') break;
            if(x[0]=='-')
            {
                if(x[1]=='-')
                {
                    if(x[2]=='-')
                        temp += 0;
                    else 
                        temp += 1;
                }
                else 
                {
                    if(x[2]=='-')
                        temp += 2;
                    else 
                        temp += 3;
                }
            
            }
            else if(x[0]=='*')
            {
                if(x[1]=='-')
                {
                    if(x[2]=='-')
                        temp += 4;
                    else 
                        temp += 5;
                }
                else 
                {
                    if(x[2]=='-')
                        temp += 6;
                    else 
                        temp += 7;
                }
            
            }
            
        }
        cout<<temp<<endl;
        
    }
    return 0;
}