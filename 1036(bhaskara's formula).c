#include<stdio.h>
#include<math.h>

main()
{
    double d,e, a,b,c,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    e = 2*a;
    d = ((b*b)-(4*a*c));
    if(d<0||a==0)
       {
           printf("Impossivel calcular\n");
       }
     else
       {
          x1 = (-b+sqrt(d))/e;
          x2 = (-b-sqrt(d))/e;
          printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
       }



}
