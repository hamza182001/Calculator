#include<iostream>
using namespace std;

class Calculator {
private:
    float num1;
    float num2;

public:
    Calculator();
    Calculator(float num1,float num2) {
        this->num1 = num1;
        this->num2 = num2;
    }
    float addition();
    float subtraction();
    float multiplication(float num1, float num2) {
        return num1 * num2;
    };
    float division(float num1, float num2) {
        if (num2 == 0) {
            cout << "Zero Division error" << endl;
        }
        return num1 / num2;
    };
};


int main() {
    Calculator calculator; 

    int choice = 0;
    cout << "Enter which operation you would like to do" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        calculator.addition();
        break;
    case 2:
        calculator.subtraction();
        break;
    case 3:
        calculator.multiplication();
        break;
    case 4:
        calculator.division();
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}
