#include<stdio.h>
int main(){
    char ch;

        printf("Enter the letter(lowercase): ");
        ch = getche();

        switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf(" is a vowel\n");
            break;
        default:
            printf(" is a consonant");
        }

    return 0;
}
