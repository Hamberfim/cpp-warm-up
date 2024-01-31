#include <iostream>
using namespace std;

void calculateTip(double billAmount, double tipRate) {
    double tipAmount = billAmount * (tipRate / 100);
    double total = billAmount + tipAmount;
    cout << "The tip amount is " << tipAmount << endl;
    cout << "Total with tip is " << total << endl;
}

int main(void) {
    double billAmount=0;
    double tipRate= 0;

    // prompt for bill billAmount
    cout << "What is the bill amount? " << endl;
    cin >> billAmount;

    // prompt for tip tipRate
    cout << "What is the tip rate (15-22)? " << endl;
    cin >> tipRate;

    calculateTip(billAmount, tipRate);

    return 0;
    }

