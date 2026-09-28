#include <stdio.h>
int main(){
    int score, missions;
    printf("Enter score: ");
    scanf("%d", &score);
    printf("Enter completed missions: ");
    scanf("%d", &missions);
  if (score >= 1000 && missions >= 10)
        printf("Level 3\n");
    else if (score >= 500 && missions >= 5) 
        printf("Level 2\n");
     else 
        printf("Level 1\n");
    

    return 0;}