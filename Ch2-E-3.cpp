/*
* File Name:Ch2-E-3
* Programmer: Jamen Cannady
* Date: 09/2025
* Requirements: create a program that computes total sales tax on a $95 purchase.
* set states tax to 4% and the county sales tax to 2 percent.
*/

#include <iostream>
using namespace std;

int main()
{
    double stateTax;
    double countyTax;
    double itemCost;
    cout << "Please enter your state tax (as a decimal point)" << endl;
    cin >> stateTax;
    cout << "Please enter your county tax (as a decimal point)" << endl;
    cin >> countyTax;
    cout << "What is the cost of the item you are purchasing" << endl;
    cin >> itemCost;
    double totalTax = itemCost * stateTax + itemCost * countyTax;
    double totalCost = totalTax + itemCost;

    cout << "The cost of the item is $" << itemCost << endl;
    cout << "The total tax including a sales tax of " << stateTax;
    cout << " and a county tax of " << countyTax << endl;;
    cout << "You owe the store a total cost of " << totalCost;
    return 0;

}