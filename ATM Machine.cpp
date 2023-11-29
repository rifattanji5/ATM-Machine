
#include <iostream>
using namespace std;

int balance = 0;  // Initialize balance
const int PIN = 6789;  // Set the PIN

// Function declarations
void checkBalance();
void withdrawMoney();
void depositMoney();
void menu();
void checkPIN();
void displayATMMachine();

int main()
{
    cout << "WELCOME TO XYZ BANK!!!" << endl;
    displayATMMachine();  // Display the ATM machine ASCII art
    checkPIN();
    return 0;
}

void checkBalance()
{
    cout << "Check Your Balance: " << balance << endl;
    menu();
}

void withdrawMoney()
{
    int amount;
    cout << "Enter The Amount To Be Withdrawn: ";
    cin >> amount;
    if (amount > balance)
    {
        cout << "Insufficient Balance." << endl;
    }
    else
    {
        balance -= amount;
        cout << "Money Withdrawal Successful!!!" << endl;
    }
    menu();
}

void depositMoney()
{
    int amount;
    cout << "Enter Amount To Deposit: ";
    cin >> amount;
    balance += amount;
    menu();
}

void menu()
{
    int option;
    cout << "Enter Your Choice: " << endl;
    cout << " 1. Check Balance." << endl;
    cout << " 2. Withdraw Money." << endl;
    cout << " 3. Deposit Money." << endl;
    cout << " 4. EXIT." << endl;

    cin >> option;

    switch (option)
    {
        case 1:
            checkBalance();
            break;
        case 2:
            withdrawMoney();
            break;
        case 3:
            depositMoney();
            break;
        case 4:
            cout << "EXITING...." << endl;
            break;
        default:
            cout << "Enter A Valid Option : " << endl;
            break;
    }

    if (option != 4)
    {
        menu();  // Continue menu until the user chooses to exit
    }
}

void checkPIN()
{
    int enteredPIN;
    int attempts = 3;

    do
    {
        cout << "Enter Your PIN: ";
        cin >> enteredPIN;

        if (enteredPIN != PIN)
        {
            attempts--;
            cout << "Invalid PIN. Attempts left: " << attempts << endl;
        }
        else
        {
            menu();
            return;
        }
    } while (attempts > 0);

    cout << "Too many incorrect attempts. Exiting." << endl;
}

void displayATMMachine()
{

    cout << "  ______\n";
    cout << " |      |\n";
    cout << " |  0 0 |\n";
    cout << " |  ___ |\n";
    cout << " | |___| |\n";
    cout << " |______|\n";
    cout << "   |  |\n";
    cout << "  /___\\\n";
}
