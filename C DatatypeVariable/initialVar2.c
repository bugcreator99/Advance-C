#include<stdio.h>
int x = 10;
myFunc(int i);

int main(){
    int y = x;
    int z = myFunc(y);

    printf("%d %d",y,z);

    return 0;
}

int myFunc(int i){
    return i/2;
}
