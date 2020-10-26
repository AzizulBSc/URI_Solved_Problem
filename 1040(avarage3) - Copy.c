#include<stdio.h>
main()
{
    double a,b,c,d,f,m;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    m = (a*2+b*3+c*4+d)/10;
    printf("Media: %.1lf\n",m);
    if(m>=7.00)
        printf("Aluno aprovado.\n");
    if(m<5.00)
        printf("Aluno reprovado.\n");
    if(m>=5&&m<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&f);
        printf("Nota do exame: %.1lf\n",f);
        if((m+f)/2.00>5.00)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n",(m+f)/2);

    }
}
