#include<stdio.h>
int main(){
    double loan_amount, interest_rate, year, total_amount, monthly_amount;
    printf("Enter Amount ");
    scanf("%lf", &loan_amount);
    printf("Enter interest rate ");
    scanf("%lf", &interest_rate);
    printf("Enter year ");
    scanf("%lf", &year);
    total_amount = loan_amount + (loan_amount*interest_rate)/100;
    monthly_amount = total_amount / (year * 12);

    printf("Total Amount : %lf \nMonthly Amount : %lf", total_amount, monthly_amount);

return 0;

}
