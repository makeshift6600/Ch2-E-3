/*
* File Name:Ch2-E-3
* Programmer: Jamen Cannady
* Date: 09/2025
* Requirements: create a program that computes total sales tax on a $95 purchase.
* set states tax to 4% and the county sales tax to 2 percent.
*/

#include <iostream>
using namespace std;
const double stateTax = .04;
const double countyTax = .02;

int main()
{
    double itemCost = 95.00;
    double totalTax = itemCost * stateTax + itemCost * countyTax;
    double totalCost = totalTax + itemCost;

    cout << "The cost of the item is $" << itemCost<<"\n";
    cout << "The total tax including a sales tax of " << stateTax <<endl;
    cout << "And a county tax of " << countyTax << endl;;
    cout << "You owe the store a total cost of " << totalCost;
    return 0;
}

