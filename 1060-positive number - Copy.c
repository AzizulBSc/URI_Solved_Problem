#include<stdio.h>
main()
{
    float a,b,c,d,e,f;
    int i=0;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);

     if(a>0)
        i++;
    else
        i=i;

     if(b>0)
        i++;
         else
        i=i;
     if(c>0)
        i++;
         else
        i=i;
     if(d>0)
        i++;
         else
        i=i;
     if(e>0)
        i++;
         else
        i=i;
     if(f>0)
        i++;
         else
        i=i;
    printf("%d valores positivos\n",i);


}
