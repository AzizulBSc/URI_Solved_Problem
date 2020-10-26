#include<stdio.h>
main()
{
    int a[3],b[3],j,i,t;
    for(i=0;i<3;i++)
    {
      scanf("%d",&a[i]);
      b[i] = a[i];
    }
     for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
     if(a[j]<a[i])
     {
         t    = a[j];
         a[j] = a[i];
         a[i] = t;
     }
     for(i=0;i<3;i++)
     {
          printf("%d\n",a[i]);
     }
     printf("\n");
     for(i=0;i<3;i++)
     {
        printf("%d\n",b[i]);
     }




}
