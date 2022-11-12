#include<stdio.h>
int main(){
    int a,b; char ch;
    printf("\t\n");
    printf("\tDo you want to?\n");
    printf("Addition\nSubstraction\nMultification\nDivide\n\n");
    printf("\tEnter first uppercase letter : ");
    ch = getchar();
    printf("\n");

    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    printf("\t\t\t-----RESULT-----\n\n");

    if(ch=='A') printf("Additon : %d",a+b);
    if(ch=='S') printf("Substraction : %d",a-b);
    if(ch=='M') printf("Multification : %d",a*b);
    if(ch=='D') printf("Divition : %d",a/b);

    getch();
}
