/*Followingthestepsbelow,write a C program to help a prospective
 * borrower calculate the monthly payment for a loan. 
 * The program should prompt the user for the principal, 
 * the percent interest rate per year, and the duration of 
 * the time (in months) over which the loan will be repaid. 
 * The program should then print an information summary. 
 * We will use the following formulas to calculate the 
 * monthly payment of a loan.
 * 
 * Dhruva O'Shea 19/04/17
 * 
 * Equations: 
 * (1) IM = IY/(12*100) 
 * (2) P = (1 + IM)^d
 * (3) Q = P/(P-1)
 * (4) MP = PR * IM * Q
 * 
 * Where:
 * D is duration in months over which loan will be repaid
 * IY is interest rate per year (as a percentage)
 * IM is interest rate per month (decimal)
 * PR is Principle (the amount of the loan)
 * MP is the Monthlpy payment.
 * 
 * 
 * Steps:
 * (1) Promt user for:
 *      (a) principle 
 *      (b) interest rate per year and
 *      (c) period of repayment in months
 * 
 * (2) Calculate
 *      (1) calculate IM
 *      (2)   "       P
 *      (3)   "       Q
 *      (4)   "       MP
 * */

#include <stdio.h> #include <math.h>
void inputInfo( double *amountPtr, double *yearlyRatePtr, int *nMonthsPtr )
{
    printf("Amount of loan (Principal)? "); scanf("%lf", amountPtr);
    printf("Interest rate per year (in percent)? "); scanf("%lf", yearlyRatePtr);
    printf("Number of months to amortize loan? ");
    scanf("%d", nMonthsPtr); 
}

int notValidInput(double amount, double yearlyRate, int nmonths) 
{
    if (amount<=0 || yearlyRate <=0 || yearlyRate > 100 || nmonths <= 0)
    {
        return 1; 
    } else 
    {
        return 0;
    }
}

double computeMonthlyRate(double yearlyRate) 
{
    return (yearlyRate/(1200.0)); 
}

void computeMonthlyPayment(double amount, double monthlyRate, double *monthlyPaymentPtr, int nmonths)
{
    double p; double q;
    p = pow((1+monthlyRate), (double)nmonths); q = p/(p-1);
    *monthlyPaymentPtr = (amount * monthlyRate * q); }
    void printInfo(double amount, double yearlyRate, int nmonths, double monthlyRate, double monthlyPayment)
{
    
    printf("\n");
    printf("Amount of loan:\t\t\t%.2f\n", amount); 
    printf("Interest rate/year (percent):\t%.2f\n", yearlyRate); 
    printf("Interest rate/month (decimal):\t%.6f\n", monthlyRate);
    printf("Number of month:\t\t%d\n", nmonths); 
    printf("Monthly payment:\t\t%.2f\n", monthlyPayment);
}

int main() 
{
    double amountLoan;
    double interestRateYearly; 
    int numMonths;
    double interestRateMonthly; 
    double monthlyPayment;
    // Get input from user
    inputInfo(&amountLoan, &interestRateYearly, &numMonths);
    // Check if input values are invalid
    if (notValidInput(amountLoan, interestRateYearly, numMonths))
    {
        printf("Invalid input"); return 1;
    }
    // Compute monthly interest rate
    interestRateMonthly = computeMonthlyRate(interestRateYearly);
    // Compute monthly payment
    computeMonthlyPayment(amountLoan, interestRateMonthly, &monthlyPayment, numMonths);
    // print loan info
    printInfo(amountLoan, interestRateYearly, numMonths, interestRateMonthly, monthlyPayment);
    return 0; 
}