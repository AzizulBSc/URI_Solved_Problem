#include<stdio.h>
main()
{
    int N,i,a[10004];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

  for(i=0;i<N;i++)
  {
      if(a[i]%2==0&&a[i]>0)
            printf("EVEN POSITIVE\n");
        else if(a[i]%2==0&&a[i]<0)
         printf("EVEN NEGATIVE\n");
        else if(a[i]%2!=0&&a[i]>0)
            printf("ODD POSITIVE\n");
          else if(a[i]%2!=0&&a[i]<0)
            printf("ODD NEGATIVE\n");
            else if(a[i]==0)
                printf("NULL\n");
  }
}
