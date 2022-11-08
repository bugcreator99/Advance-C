#include<stdio.h>
void func1();
int main(){

    printf("I ");
    func1();        //calling function func1
    printf("C");

    return 0;
}

void func1(){
    printf("Like ");
}
