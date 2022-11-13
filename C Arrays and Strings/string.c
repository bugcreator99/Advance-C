#include<stdio.h>
int main(){
    char str[80];
    int i;

    printf("Enter a string (less than 80 chars) : ");
    gets(str);

    printf(str);

    return 0;
}
