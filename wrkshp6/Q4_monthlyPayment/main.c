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


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    float principle, interestPerAnnum, period;
    printf("Enter your principle loan:\n");
    scanf("%f",&principle);
    printf("Enter your interest rate per year:\n");
    scanf("%f",&interestPerAnnum);
    printf("Enter the period in months you will repay:\n");
    scanf("%f",&period);
    
    //Calculate
    float interestPerMonth, P, Q, monthlyPayment;
    //(1)
    interestPerMonth = interestPerAnnum/(12*100);
    //(2)
    P = pow((1 + interestPerMonth),period);
    //(3)
    Q = P/(P-1);
    //(4)
    monthlyPayment = principle * interestPerMonth * Q;
 
    printf("Monthly Payment = %f\n",monthlyPayment);
    
	return 0;
}
