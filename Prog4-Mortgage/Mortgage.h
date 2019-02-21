#pragma once

class Mortgage
{
private:
	double rate; // annual intrest rate 
	double loan; // dollar amount of loan
	int years; // number of years of the loan
public:
	Mortgage();
	void setRate(double);
	void setLoan(double);
	void setYears(int);


	double calc_payments();
	double calc_total();


};


