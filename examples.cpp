#include <iostream>

void getData(bool* maritalStatus, int* numberOfChildren,int* salary,int* pensionFund) {
	std::cout << "Marital Status \n";
	std::cout << "If you are married type 1 , else type 0 \n";
	std::cin >> *maritalStatus;
	if (*maritalStatus) {
		std::cout << "The number of children under the age of 14 \n";
		std::cin >> *numberOfChildren;
		std::cout << "Combined salary \n";
		std::cin >> *salary;
	}
	else {
		std::cout << "Your salary \n";
		std::cin >> *salary;
	}
	std::cout << "Percentage of gross income contributed to a pension fund.Till 6% \n";
	std::cin >> *pensionFund;
}
int taxAmount(bool maritalStatus, int numberOfChildren, int salary, int pensionFund) {
	int taxAmount, standardExemption, personalExemption;
	int pensionFundAmount = salary*pensionFund/100;
	if (maritalStatus) {
		standardExemption = 7000;
		personalExemption = 3000 + 1500 * numberOfChildren;
	}
	else {
		standardExemption = 4000;
		personalExemption = 1500;
	}
	int taxableIncome = salary - (standardExemption + pensionFundAmount + personalExemption);
	if (taxableIncome <= 15000) {
		taxAmount = taxableIncome*15/100;
	}
	else if (taxableIncome > 15000 && taxableIncome <= 40000) {
		taxAmount = 2250 + (taxableIncome - 15000)*25/100;
	}
	else {
		taxAmount = 8460 + (taxableIncome - 40000) * 35 / 100;
	}
	return taxAmount;
}

int main() {
	bool maritalStatus = false;;
	int numberOfChildren = 0 , salary = 0,pensionFund = 0;
	getData(&maritalStatus, &numberOfChildren, &salary, &pensionFund);
	int tax = taxAmount(maritalStatus, numberOfChildren, salary, pensionFund);
	std::cout << '\n' << "Your tax is " << tax << "$";
	
	return 0;
}
