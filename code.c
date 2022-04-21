#include <stdio.h>

int main() {
   /* Tax slabs for professionals in India varies depending on their Annual Income.
   The slabs are as follows:
   1. For income less than ₹250000, there's no tax imposed.
   2. For income between ₹250000-500000, 5% tax.
   3. For income between ₹500000-750000, 10% tax.
   4. For income between ₹750000-1000000, 15% tax.
   5. For income between ₹1000000-1250000, 20% tax.
   6. For income between ₹1250000-1500000, 25% tax.
   7. For income greater than ₹1500000, 30% tax.

   The C program reads the Annual Income of an employee as input from the user and calculates the tax imposed on the same.
   It then prints the Total Tax and hence Net Salary after Tax Deduction.
   */

   double income, tax, NetSalary;
   printf("Input income: ");
   scanf("%lf", &income);
   printf("The annual income is = Rs. %0.2lf\n", income);
   printf("\n");

   if (income>0 && income<=250000){
       tax=0.00;
       printf("Tax imposed = Rs. %0.2lf\n", tax);
       printf("Net Salary after Tax Deductions is = Rs. %0.2lf", income+tax);
   }

   else if (income>250000 && income<=500000){
       tax=5*income/100;
       printf("Tax imposed = Rs. %0.2lf\n", tax);
       printf("Net Salary after Tax Deductions is = Rs. %0.2lf", income+tax);
   }

   else if (income>500000 && income<=750000){
       tax=10*income/100;
       printf("Tax imposed = Rs. %0.2lf\n", tax);
       printf("Net Salary after Tax Deductions is = Rs. %0.2lf", income+tax);
   }

   else if (income>750000 && income<=1000000){
       tax=15*income/100;
       printf("Tax imposed = Rs. %0.2lf\n", tax);
       printf("Net Salary after Tax Deductions is = Rs. %0.2lf", income+tax);
   }

   else if (income>1000000 && income<=1250000){
       tax=20*income/100;
       printf("Tax imposed = Rs. %0.2lf\n", tax);
       printf("Net Salary after Tax Deductions is = Rs. %0.2lf", income+tax);
   }

   else if (income>1250000 && income<=1500000){
       tax=25*income/100;
       printf("Tax imposed = Rs. %0.2lf\n", tax);
       printf("Net Salary after Tax Deductions is = Rs. %0.2lf", income+tax);
   }

   else if (income>1500000){
       tax=30*income/100;
       printf("Tax imposed = Rs. %0.2lf\n", tax);
       printf("Net Salary after Tax Deductions is = Rs. %0.2lf", income+tax);
   }

   else{ //if negative input income
       printf("Input Income Error.");
   }

   return 0;
}
