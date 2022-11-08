#include<stdio.h>
int main(){

    int num,sum,multi;

    sum = 0; multi = 1;

    for(num=1; num<=5; num++){
        sum = sum + num;
        multi = multi * num;
    }
    printf("Sum and Multi : %d %d",sum,multi);

    return 0;
}
