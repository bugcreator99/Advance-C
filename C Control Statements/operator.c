#include<stdio.h>
int main()
{

    int i,j;

    printf("Enter first number: ");
    scanf("%d",&i);
    printf("Enter second number: ");
    scanf("%d",&j);

    //relational operators (0 means false and 1 means true)
    printf("%d\n",i<j);
    printf("%d\n",i<=j);
    printf("%d\n",i==j);
    printf("%d\n",i>j);
    printf("%d\n",i>=j);

    printf("\n\n");

    //logical operators
    printf("%d\n",i && j);
    printf("%d\n",i || j);
    printf("%d\n", !i,!j);

    return 0;
}
