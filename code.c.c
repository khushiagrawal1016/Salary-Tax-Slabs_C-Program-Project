#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int id;
    double basic_salary;
    double net_salary;
} Employee;
 
int main()
{
    int n=2;
    float tax=0.0;
    
    Employee employees[n];
 
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n", (i+1));
       
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);
       
        printf("Id: ");
        scanf("%d",&employees[i].id);
   
        printf("Basic Salary: ");
        scanf("%lf",&employees[i].basic_salary);
       
        char ch = getchar();
        
        employees[i].net_salary = employees[i].basic_salary*1.03;
    }

    printf("\n\n");
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        
        if (employees[i].net_salary>0 && employees[i].net_salary<=250000){
            tax=0.00;
            printf("Tax imposed = Rs. %0.2lf\n", tax);
            printf("Net Salary after Tax Deductions is = Rs. %0.2lf", employees[i].net_salary+tax);
        }
        
        else if (employees[i].net_salary>250000 && employees[i].net_salary<=500000){
            tax=5*employees[i].net_salary/100;
            printf("Tax imposed = Rs. %0.2lf\n", tax);
            printf("Net Salary after Tax Deductions is = Rs. %0.2lf", employees[i].net_salary+tax);
        }
        
        else if (employees[i].net_salary>500000 && employees[i].net_salary<=750000){
            tax=10*employees[i].net_salary/100;
            printf("Tax imposed = Rs. %0.2lf\n", tax);
            printf("Net Salary after Tax Deductions is = Rs. %0.2lf", employees[i].net_salary+tax);
        }
        
        else if (employees[i].net_salary>750000 && employees[i].net_salary<=1000000){
            tax=15*employees[i].net_salary/100;
            printf("Tax imposed = Rs. %0.2lf\n", tax);
            printf("Net Salary after Tax Deductions is = Rs. %0.2lf", employees[i].net_salary+tax);
        }
        
        else if (employees[i].net_salary>1000000 && employees[i].net_salary<=1250000){
            tax=20*employees[i].net_salary/100;
            printf("Tax imposed = Rs. %0.2lf\n", tax);
            printf("Net Salary after Tax Deductions is = Rs. %0.2lf", employees[i].net_salary+tax);
        }
        
        else if (employees[i].net_salary>1250000 && employees[i].net_salary<=1500000){
            tax=25*employees[i].net_salary/100;
            printf("Tax imposed = Rs. %0.2lf\n", tax);
            printf("Net Salary after Tax Deductions is = Rs. %0.2lf", employees[i].net_salary+tax);
        }
        
        else if (employees[i].net_salary>1500000){
            tax=30*employees[i].net_salary/100;
            printf("Tax imposed = Rs. %0.2lf\n", tax);
            printf("Net Salary after Tax Deductions is = Rs. %0.2lf", employees[i].net_salary+tax);
        }
        
        else{ //if negative input income
            printf("Input Income Error.");
        }
        
        printf("\n");
    }
 
    return 0;
}
