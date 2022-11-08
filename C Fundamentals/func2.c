#include<stdio.h>
void fun1();    //prototypes
void fun2();

int main(){

    fun2();
    printf("3");

    return 0;
}

void fun2(){
    fun1();
    printf("2 ");
}

void fun1(){
    printf("1 ");
}
