#include<stdio.h>
int main(){

    int ans,count;

    for(count=1; count<11; count++){
        printf("What is %d + %d?: ",count,count);
        scanf("%d",&ans);

        if(ans==count+count) printf("Right!\n");
        else{
            printf("Sorry, you are wrong. ");
            printf("The answer is %d. \n",count+count);
        }
    }

    return 0;
}
