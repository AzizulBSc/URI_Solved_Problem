#include<stdio.h>
main()
{
    double a,b,c,area,peri;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a<(b+c)&&b<(a+c)&&c<(a+b))
    {
        peri = a+b+c;
        printf("Perimetro = %.1lf\n",peri);
    }
    else
    {
        area = ((a+b)*c)/2.00;
        printf("Area = %.1lf\n",area);
    }
}
