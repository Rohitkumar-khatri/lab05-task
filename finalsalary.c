#include<stdio.h>
int main(){
    int employee_service;
    int performance_rating;
    int Salary;
    printf("enter your employee services");
    scanf("%d", & employee_service );
    printf("enter your performance rating");
    scanf("%d", & performance_rating );
    printf("Enter you SAlary");
    scanf("%d", & Salary);

    double bonus = 1.0;
    if (employee_service >=1 && employee_service<=10){
      if (performance_rating >=1 && performance_rating <=5){ 
        bonus= Salary*0.1;
        printf("Your Bonus is %f",bonus);
        Salary = Salary+bonus;
        printf("\nyour Final Salary is %d", Salary);
      }
      else{
        printf("Wrong performance Rating");
      }
        }else{
            printf("wrong performance service");
        }

    return 0;}