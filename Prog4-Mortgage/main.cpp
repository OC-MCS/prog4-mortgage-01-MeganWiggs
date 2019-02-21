//**************************************************************************************************************
// Megan Wiggs
// mortage program
// 2/20/2018
//****************************************************************************************************************
#include <iostream>
#include <string>
using namespace std;
#include "Mortgage.h"



bool parseInt(string sval, double& val);

int main()
{
	Mortgage m1;
	double payment;
	double rate;
	string rate_string;
	double total;
	double loan;
	string loan_string;
	double years;
	string years_string;
	bool valid = false;

	while (valid != true)
	{
		cout << "please enter the dollar amount of the loan: " << endl;
		getline(cin, loan_string);
		valid = parseInt(loan_string, loan);
	}
	valid = false;
	while (valid != true)
	{
		cout << "please enter the annual intrest rate: " << endl;
		getline(cin, rate_string);
		valid = parseInt(rate_string, rate);
	}
	valid = false;
	while (valid != true)
	{
		cout << "please enter the number of years of the loan: " << endl;
		getline(cin, years_string);
		valid = parseInt(years_string, years);

	}


	m1.setLoan(loan);
	m1.setRate(rate / 100);
	m1.setYears(years);

	payment = m1.calc_payments();
	total = m1.calc_total();

	cout << " your monthly payment is " << payment << endl;
	cout << " after " << years << " years you will have paid " << total << endl;



	return 0;
}
bool parseInt(string sval, double& val)
{
	double num;
	bool success = true;
	try
	{
		num = stod(sval);   // or use stof for string-to-float
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}