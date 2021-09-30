#include"Atm.h"
#include <iostream>
using namespace std;

int main()
{
    Atm a;
    int option;
    double balance = 500;
    do {
        a.showMenu();
        cout << " Options: ";
        cin >> option;
        system("cls");

        switch (option) {
        case 1:cout << " Balance is: $" << balance << endl;
            break;
        case 2: cout << " Deposit amount: $";
            double deposit;
            cin >> deposit;
            balance += deposit;
            break;
        case 3: cout << " Withdraw amount: $";
            double withdraw;
            cin >> withdraw;
            if (withdraw <= balance)
                balance -= withdraw;
            else
                cout << " You don't have enough money to proceed with this operation.";
            break;
        default:
            cout << "\n Please choose a valid option!";
            exit(0);
        }

    } while (option != 4);
    system("pause");
}
