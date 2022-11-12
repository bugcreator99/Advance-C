#include<stdio.h>
int main(){
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<26;j++){
            for(k=0;k<2;k++){
                printf("%c ",'A'+j);
            }
        }
        printf("\n\n");
    }

    return 0;
}
