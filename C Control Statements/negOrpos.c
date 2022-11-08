#include<stdio.h>
int main(){

    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num<0) printf("%d is Negative",num);
    else if(num>0) printf("%d is Positive",num);
    else printf("%d is Zero",num);

    return 0;
}
