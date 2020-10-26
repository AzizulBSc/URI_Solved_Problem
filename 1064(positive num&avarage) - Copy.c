#include<stdio.h>
main()
{
    float a,b,c,d,e,f,j=0;
    int i=0;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);

     if(a>0)
        {i++;j=j+a;}
    else
        {i=i;j=j;}

     if(b>0)
        {i++;j=j+b;}
         else
        {i=i;j=j;}
     if(c>0)
        {i++;j=j+c;}
        else
        {i=i;j=j;}
     if(d>0)
        {i++;j=j+d;}
        else
        {i=i;j=j;}
     if(e>0)
       {i++;j=j+e;}
        else
        {i=i;j=j;}
     if(f>0)
        {i++;j=j+f;}
          else
        {i=i;j=j;}

        j= j/i;
    printf("%d valores positivos\n%.1f\n",i,j);


}
