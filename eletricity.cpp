
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cato, unit;
    double total = 0, discount = 0, finalBill = 0;

    cin >> cato >> unit;

    if (unit < 0) {
        cout << "Invalid Units";
    }
    else if (cato != 1 && cato != 2) {
        cout << "Invalid Category";
    }
    else {
        if (cato == 1) {
            if (unit <= 100) {
                total = unit * 2;
            }
            else if (unit <= 200) {
                total = 200 + (unit - 100) * 3;
            }
            else if (unit <= 500) {
                total = 500 + (unit - 200) * 5;
            }
            else {
                total = 2000 + (unit - 500) * 8;
            }
        }
        else {
            if (unit <= 100) {
                total = unit * 5;
            }
            else if (unit <= 200) {
                total = 500 + (unit - 100) * 7;
            }
            else if (unit <= 500) {
                total = 1200 + (unit - 200) * 10;
            }
            else {
                total = 4200 + (unit - 500) * 15;
            }
        }

        if (total > 2000) {
            discount = total * 0.10;
        }

        finalBill = total - discount;
        cout << "Energy Charge: " << total << endl;
        cout << "Discount: " << discount << endl;
        cout << "Final Bill: " << finalBill << endl;
    }

    return 0;
}
