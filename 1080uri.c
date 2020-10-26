#include<stdio.h>
main()
{
    int i,a[102],m=0,p;
    for(i=0;i<100;i++)

    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<100;i++)
    {
          if(a[i]>=m)
        {
            m = a[i];
            p = i+1;

        }

    }
    printf("%d\n%d\n",m,p);



}
