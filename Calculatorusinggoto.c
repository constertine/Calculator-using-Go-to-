#include<stdio.h>
void main() {
     char x,y;
     operation :
     printf("What operation do you want to do ?(+,-,x,/) : ");
     scanf(" %c", &x);
     
     if(x == '+') 
          goto sum;
     
      else if(x =='-') 
          goto diff;
     
     else if(x =='x') 
          goto multi;
     
     else if(x=='/') 
          goto div;
     
     int a,b;
     
     sum : printf("Enter any two numbers : ");
     scanf("%d %d", &a, &b);
     printf("%d + %d = %d\n", a, b, a+b);
     goto end;

     diff : printf("Enter any two numbers : ");
     scanf("%d %d", &a, &b);
     printf("%d - %d = %d\n", a, b, a-b);
     goto end;

     multi : printf("Enter any two numbers : ");
     scanf("%d %d", &a, &b);
     printf("%d x %d = %d\n", a, b, a*b);
     goto end;

     div : printf("Enter any two numbers : ");
     scanf("%d %d", &a, &b);
     printf("%d/%d = %d\n", a, b, a/b);
     goto end;

     end:
     printf("Do you want to perform any more operations?(Y if Yes else N for No)\n ");
     scanf(" %c", &y);

     if(y=='Y')
          goto operation;
     
     else
     printf("Thank you for using the calculator!! ");
     return;
}