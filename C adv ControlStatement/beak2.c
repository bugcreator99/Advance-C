#include<stdio.h>
int main(){
    int i; char ch;
    /* display all numbers that are multiples of 6 */
    for(i=1;i<1000;i++){
        if(!(i%5)){
            printf("%d, more? (Y/N): ",i);
            ch = getche();
            if(ch=='N'||ch=='n') break; /* stop the loop */
            printf("\n");
        }
    }

    return 0;
}
