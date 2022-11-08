#include<stdio.h>
int main(){

    float e_days; //number of earth days
    float j_years;  //equivalent number of jovian years

    //get number of earth days
    printf("Enter number of Earth days: ");
    scanf("%f",&e_days);

    //now computer jovian years
    j_years = e_days / (365.0 * 12.0);

    //display the answer
    printf("Equivalent jovian years: %f",j_years);

    return 0;
}
