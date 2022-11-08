#include<stdio.h>
void sum(int x, int y);

int main(){

    sum(5,10);
    sum(9,6);
    sum(11,4);

    return 0;
}

void sum (int x, int y){
    printf("%d ",x+y);
}
