#include <iostream>

using namespace std;


void displayMenu();
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
double division(int num1, int num2);

int main() {
    char choice;
    int num1, num2;

    do {
        displayMenu();

        int operation;
        cout << "Enter your choice (1-4): ";
        cin >> operation;

        cout << "Enter two integers: ";
        cin >> num1 >> num2;

        switch(operation) {
            case 1:
                cout << "Result: " << addition(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtraction(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiplication(num1, num2) << endl;
                break;
            case 4:
                if (num2 == 0)
                    cout << "The second integer is zero, divide by zero" << endl;
                else
                    cout << "Result: " << division(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to continue? (y/Y for Yes): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}


void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
}


int addition(int num1, int num2) {
    return num1 + num2;
}


int subtraction(int num1, int num2) {
    return num1 - num2;
}


int multiplication(int num1, int num2) {
    return num1 * num2;
}


double division(int num1, int num2) {
    return static_cast<float>(num1) / num2;
}
