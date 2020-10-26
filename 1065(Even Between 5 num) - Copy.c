#include<stdio.h>
main()
{
    int i,j=0,a[7];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
         if(a[i]%2==0)
            j+=1;
            else
                j=j;

    }

    printf("%d valores pares\n",j);
}
