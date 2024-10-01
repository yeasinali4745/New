#include<stdio.h>

int main()
{
    int age,n;
    printf(" please enter your age=");
    scanf("%d",&age);
    
    if (age<=20)
    {
       printf("Your are junior",age);
    }
       else if (age>=20) 
    {
      printf("Your are Senior",age);
    }
     else 
     
     
     {
      printf("Your age is invalid");
    }
     return 0;
}