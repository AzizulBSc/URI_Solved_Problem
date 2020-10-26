#include<stdio.h>
#include<string.h>
main()
{
    char a1[] = "vertebrado",a2[] = "invertebrado";
    char b11[] = "ave",b12[] = "mamifero",b21[] = "inseto",b22[] = "anelideo";
    char c111[] = "carnivoro",c112[] = "onivoro",c121[] = "onivoro",
    c122[] = "herbivoro",c211[] = "hematofago",c212[] = "herbivoro",
    c221[] = "hematofago",c222[] = "onivoro";
    char a[22],b[22],c[22];
    scanf("%s",&a);
    if(strcmp(a,a1)==0)
    {
         scanf("%s",&b);
         if(strcmp(b,b11)==0)
        {
           scanf("%s",&c);
           if(strcmp(c,c111)==0)
             printf("aguia\n");
           else  if(strcmp(c,c112)==0)
             printf("pomba\n");
        }
       else if(strcmp(b,b12)==0)
       {
         scanf("%s",&c);
        if(strcmp(c,c121)==0)
          printf("homem\n");
        else  if(strcmp(c,c122)==0)
          printf("vaca\n");
       }


    }
   else if(strcmp(a,a2)==0)
{
        scanf("%s",&b);
    if(strcmp(b,b21)==0)
    {
        scanf("%s",&c);
       if(strcmp(c,c211)==0)
        printf("pulga\n");
       else  if(strcmp(c,c212)==0)
        printf("lagarta\n");
    }
    else if(strcmp(b,b22)==0)
    {
        scanf("%s",&c);
       if(strcmp(c,c221)==0)
        printf("sanguessuga\n");
       else  if(strcmp(c,c222)==0)
        printf("minhoca\n");
    }
}
}
