#include<stdio.h>
int main(){
    int sqrs[10];
    int i;

    for(i=1; i<=10; i++) sqrs[i-1] = i*i;
    for(i=0; i<10; i++) printf("%d ",sqrs[i]);

    printf("\n");
    printf("%d",sqrs[3]);

    return 0;
}
