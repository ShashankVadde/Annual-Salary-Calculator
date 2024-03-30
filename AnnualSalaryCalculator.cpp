/*
This program calculates the annual salary of a user based on their hourly wage and average weekly working hours.
It then calculates the net annual salary after taxes based on their salary range.
The tax rates are as follows:
    $0 - $5,099: 0.0%
    $5,100 - $10,299: 2.0%
    $10,300 - $14,699: 3.0%
    $14,700 - $24,299: 3.4%
    $24,300 - $87,000: 4.7%
    $87,001 and above: 4.7%
*/

#include <iostream>

double annualSalaryCalculator(double hourlyWage, int workingHours) {
    double annualSalary = hourlyWage * workingHours * 52;
    std::cout << "Your Annual Salary is $" << annualSalary << std::endl;
    return annualSalary;
}

int main() {
    double hourlyWage; double taxPercent; int workingHours; int weeklySalary; 

    std::cout << "Enter your Hourly Salary: ";
    std::cin >> hourlyWage;
    std::cout << "Enter your Average Weekly Working Hours: ";
    std::cin >> workingHours;

    std::cout << "Your Hourly Salary is $" << hourlyWage << std::endl;
    std::cout << "Your Average Working Hours per Week is " << workingHours << std::endl;

    int salary = (int) annualSalaryCalculator(hourlyWage, workingHours);

    if (salary <= 4999) {
        taxPercent = 0.0;
        std::cout << "Since your Annual Salary is less than $5,000, you are not required to pay any taxes." << std::endl;
        std::cout << "Your Net Annual Salary After Taxes is $" << salary << std::endl;

    }
    else if (salary >= 5000 && salary <= 9999) {
        taxPercent = 1-(2.0/100);
        std::cout << "Since your Annual Salary is between $5,000 and $9,999, you are required to pay 2% taxes." << std::endl;
        std::cout << "Your Net Annual Salary After Taxes is $" << salary * taxPercent << std::endl;
    }
    else if (salary >= 10000 && salary <= 14299){
        taxPercent = 1-(3.0/100);
        std::cout << "Since your Annual Salary is between $10,000 and $14,299, you are required to pay 3% taxes" << std::endl;
        std::cout << "Your Net Annual Salary After Taxes is $" << salary * taxPercent << std::endl;

    }
    else if (salary >= 14400 && salary <= 23599){
        taxPercent = 1-(3.4/100);
        std::cout << "Since your Annual Salary is between $14,400 and $23,599, you are required to pay 3.4% taxes" << std::endl;
        std::cout << "Your Net Annual Salary After Taxes is $" << salary * taxPercent << std::endl;        
    }
    else if (salary >= 23600 && salary <= 84500){
        taxPercent = 1-(4.9/100);
        std::cout << "Since your Annual Salary is between $23,600 and $84,500, you are required to pay 4.9% taxes" << std::endl;
        std::cout << "Your Net Annual Salary After Taxes is $" << salary * taxPercent << std::endl;
    }
    else if (salary >= 100000) {
        taxPercent = 1-(4.9/100);
        std::cout << "Since your Annual Salary is more than $100,000, you are required to pay 4.9% taxes" << std::endl;
        std::cout << "Your Net Annual Salary After Taxes is $" << salary * taxPercent << std::endl;
    }
    return 0;
}

