#include<stdio.h>
main()
{
  int num,wh;
  double r,sal;
  scanf("%d%d%lf",&num,&wh,&r);
  sal = wh*r;
  printf("NUMBER = %d\n",num);
  printf("SALARY = U$ %.2lf\n",sal);
}
