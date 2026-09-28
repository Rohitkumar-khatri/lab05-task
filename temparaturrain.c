#include <stdio.h>
int main(){
    int temp,rain;
    printf("Enter temperature: ");
    scanf("%d", &temp);
    printf("Is it raining? (1 for Yes, 0 for No): ");
    scanf("%d", &rain);

    if (temp < 15) {
        printf("Wear Jacket\n");
    } 
    else if (temp >= 15 && temp <= 25) {
        printf("Wear Light Clothing\n");
    } 
    else {
        printf("Wear Summer Clothing\n");
    }
    if (rain == 1) {
        printf("Carry an Umbrella\n");
    }
   return 0;
}