#include<stdio.h>
main()
{
   double s,t;
   scanf("%lf",&s);
   if(s>=0.00&&s<=2000.00)
   {
       printf("Isento\n");
   }
     else if(s>2000.00&&s<=3000.00)
   {
       t= (2000*0)+(s-2000)*.08;
       printf("R$ %.2lf\n",t);
   }
     else if(s>3000.00&&s<=4500.00)
   {
       t=(2000*0)+(1000*.08)+(s-3000)*.18;
        printf("R$ %.2lf\n",t);
   }
     else if(s>4500.00)
   {
       t=(2000*0)+(1000*.08)+(1500*.18)+(s-4500)*.28;
        printf("R$ %.2lf\n",t);
   }


}
