#include<stdio.h>
int main(){

    int num,i,isPrime=1;

    printf("Enter the number to test: ");
    scanf("%d",&num);

    for(i=2; i<num/2; i=i+1){
        if((num%i)==0) isPrime = 0;
    }
    if(isPrime==1) printf("%d is Prime",num);
    else printf("%d is not Prime",num);

    return 0;
}
