#include<stdio.h>
main()
{
    int i,X,Y,j=0;
    scanf("%d%d",&X,&Y);
    if(X<=Y)
    {
    for(i=X+1;i<Y;i++)
      {
        if(i%2!=0)
          {
            j+= i;

          }
      }
    }
    else if(X>Y)
        {
           for(i=Y+1;i<X;i++)
          {
              if(i%2!=0)
             {
              j+= i;
             }
          }
        }
    printf("%d\n",j);
}



