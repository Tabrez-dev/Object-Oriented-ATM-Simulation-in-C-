#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const int CHECK_BALANCE = 1;
const int WITHDRAW_CASH = 2;
const int SHOW_DETAILS = 3;
const int UPDATE_MOBILE = 4;
const int EXIT = 5;

class atm {
private:
    long int account_no;
    string name;
    int PIN;
    double balance;
    string mobile_no;

public:
    void setData(long int account_no_a, string name_a, int PIN_a, double balance_a, string mobile_no_a) {
        account_no = account_no_a;
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_no = mobile_no_a;
    }

    long int getactno() {
        return account_no;
    }

    string getname() {
        return name;
    }

    int getpin() {
        return PIN;
    }

    double getbalance() {
        return balance;
    }

    string getmobileno() {
        return mobile_no;
    }

    void setmobile(string mob_prev, string mob_new) {
        if (mob_prev == mobile_no) {
            mobile_no = mob_new;
            cout << endl << "Successfully updated mobile no.";
            _getch();
        } else {
            cout << endl << "Incorrect !!! old mobile no";
            _getch();
        }
    }

    void cashwithdraw(int amount_a) {
        if (amount_a > 0 && amount_a <= balance) {
            balance -= amount_a;
            cout << endl << "Please collect your cash";
            cout << endl << "Available Balance:" << balance;
            _getch();
        } else {
            cout << endl << "Invalid input or insufficient balance";
            _getch();
        }
    }

       // Function to validate PIN
    bool validatePIN(int enteredPIN) {
        return (enteredPIN == PIN);
    }

    // Function to validate account number
    bool validateAccountNo(long int enteredAccountNo) {
        return (enteredAccountNo == account_no);
    }
    
    // Function to check if the withdrawal amount is valid
    bool isValidWithdrawal(int amount) {
        return (amount > 0 && amount <= balance);
    }
};

int main() {
    int choice = 0, enter_pin, amount;
    long int enterAcctNo;
    string oldmobileno, newmobileno;

    system("cls");
    atm user1;
    user1.setData(1234567, "Tim", 1111, 45000.90, "9083847298");

    do {
        system("cls");
        cout << endl << "****Welcome to ATM****" << endl;
        cout << endl << "Enter Your Acct No: ";
        cin >> enterAcctNo;
        cout << endl << "Enter pin: ";
        cin >> enter_pin;

        if ((enterAcctNo == user1.getactno()) && (enter_pin == user1.getpin())) {
            do {
                system("cls");
                cout << endl << "****Welcome to ATM****" << endl;
                cout << endl << "Select options";
                cout << endl << "1. Check balance";
                cout << endl << "2. Cash withdraw";
                cout << endl << "3. Show user details";
                cout << endl << "4. Update mobile no.";
                cout << endl << "5. Exit" << endl;
                cin >> choice;

                switch (choice) {
                    case CHECK_BALANCE:
                        cout << endl << "Your bank balance is: " << user1.getbalance();
                        _getch();
                        break;
                    case WITHDRAW_CASH:
                        cout << endl << "Enter the amount: ";
                        cin >> amount;
                        user1.cashwithdraw(amount);
                        break;
                    case SHOW_DETAILS:
                        cout << endl << "***User details are:-";
                        cout << endl << "-> Account number: " << user1.getactno();
                        cout << endl << "-> Name: " << user1.getname();
                        cout << endl << "-> Balance: " << user1.getbalance();
                        cout << endl << "-> Mobile No: " << user1.getmobileno();
                        _getch();
                        break;
                    case UPDATE_MOBILE:
                        cout << endl << "Enter old mobile no: ";
                        cin >> oldmobileno;
                        cout << endl << "Enter new mobile no: ";
                        cin >> newmobileno;
                        user1.setmobile(oldmobileno, newmobileno);
                        break;
                    case EXIT:
                        exit(0);
                    default:
                        cout << endl << "Enter valid option!!";
                }

            } while (1);
        } else {
            cout << endl << "Invalid Account Number or PIN. Try Again!";
            _getch();
        }
    } while (1);

    return 0;
}
