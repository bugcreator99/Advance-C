#include<stdio.h>
int main(){
    int i;

    printf("Enter a number between 1 and 5: ");
    scanf("%d",&i);

    switch(i){
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    default:
        printf("Unrecognized Number!!");
    }

    return 0;
}
