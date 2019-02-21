#include <iostream>
#include <cmath>
using namespace std;
#include "Mortgage.h"


Mortgage::Mortgage()
{
	rate = 0.0;
	loan = 0.0;
	years = 0;
}
//***********************************************************
// setRate sets the value of the member variable rate.  *
//***********************************************************
void Mortgage::setRate(double r)
{
	rate = r;
}
//***********************************************************
// setLoan sets the value of the member variable loan.  *
//***********************************************************
void  Mortgage::setLoan(double l)
{
	loan = l;
}
//***********************************************************
// setyears sets the value of the member variable years.  *
//***********************************************************
void  Mortgage::setYears(int y)
{
	years = y;

}

//***********************************************************************
// calc_payments calculates the monthly payments and returns that value *
//***********************************************************************
double Mortgage::calc_payments()
{
	double term;
	double payment;

	term = pow((1 + (rate / 12)), (12 * years));

	payment = (loan * (rate / 12) * term) / (term - 1);

	return payment;
}
//***********************************************************************
// calc_payments calculates the total amount of payments and returns that value *
//***********************************************************************
double Mortgage::calc_total()
{
	return (years * 12) * calc_payments();
}