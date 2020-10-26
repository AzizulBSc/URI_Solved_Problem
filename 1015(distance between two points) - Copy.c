#include<stdio.h>
#include<math.h>
main()
{
    double x1,x2,y1,y2,D;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    D = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("%.4lf",D);
}
