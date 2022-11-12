#include<stdio.h>
int main()
{
    int a,b;
    char ch;

    printf("Do you want to?\n");
    printf("Add, Subtract, Multiply or Divisor\n");
    printf("Enter first uppercase Letter: ");
    ch = getchar();
    printf("\n");

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    if(ch=='A') printf("%d",a+b);
    else if(ch=='S') printf("%d",a-b);
    else if(ch=='M') printf("%d",a*b);
    else if(ch=='D') printf("%d",a/b);

    return 0;
}
