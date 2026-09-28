#include<stdio.h>
int main(){
int choice=0;
printf("1:breakfast\n");
printf("2:Lunch\n");
printf("3:Dinner\n");
printf("Enter Your Choice:\n");
scanf("%d", & choice);
switch (choice)
{
case 1:
    int choice1=0;
    printf("1.tea\n");
    printf("2.coffee\n");
    printf("3.paratha\n");
    scanf("%d", &choice1);
    switch(choice1){
        case 1:
        printf("Iteam No 1 Tea Rs 80");
        break;
        case 2:
        printf("iteam no 2 coffee RS 180:");
        case 3:
        printf("iteam no 3 paratha RS 200:");
       break;
    
    }
    
}

    return 0;}