#include<stdio.h>
int main(){
    char ch;

    printf("Enter a character: ");
    ch = getchar(); //read a char
    printf("\tYou typed %c\n",ch);
    printf("\tASCII value is: %d\n",ch);

    return 0;
}
