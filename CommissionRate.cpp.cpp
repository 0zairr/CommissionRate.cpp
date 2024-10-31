// CommissionRate.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Filename: CommissionRate.cpp.cpp
Programer: Ozair Ghaissi
Date: 10/31/2024
*/

#include <iostream>
using namespace std;

double calculateCommissionRate(double sales) {
    if (sales < 10000) {
        return 0.05;
    }
    else if (sales >= 10000 && sales <= 14999) {
        return 0.10;
    }
    else if (sales >= 15000 && sales <= 17999) {
        return 0.12;
    }
    else if (sales >= 18000 && sales <= 21999) {
        return 0.14;
    }
    else {
        return 0.16;
    }
}

// Function to manually format to two decimal places
double truncateToTwoDecimals(double value) {
    return static_cast<int>(value * 100) / 100.0;
}

int main() {
    double sales, advancedPay, commissionRate, commission, remainingPay;
    char choice;

    do {
        // Get input from the user
        cout << "Enter the salesperson's monthly sales: ";
        cin >> sales;
        cout << "Enter the amount of advanced pay for this salesperson: ";
        cin >> advancedPay;

        // Calculate commission rate and commission
        commissionRate = calculateCommissionRate(sales);
        commission = sales * commissionRate;
        remainingPay = commission - advancedPay;

        // Display results with manual formatting
        cout << "\nPay Results\n";
        cout << "-----------\n";
        cout << "Sales: $" << truncateToTwoDecimals(sales) << endl;
        cout << "Commission Rate: " << truncateToTwoDecimals(commissionRate) << endl;
        cout << "Commission: $" << truncateToTwoDecimals(commission) << endl;
        cout << "Advanced Pay: $" << truncateToTwoDecimals(advancedPay) << endl;
        cout << "Remaining Pay: $" << truncateToTwoDecimals(remainingPay) << endl;

        // Ask user if they want to repeat
        cout << "\nWould you like to calculate for another salesperson? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}