#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    // A banking program : deposit money
    //                     withdraw money and show balance

    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "*******************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "*******************\n";
        std::cout << "1. Show Balance: \n";
        std::cout << "2. Deposit Money: \n";
        std::cout << "3. Withdraw Money: \n";
        std::cout << "4. Exit \n";

        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(0);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting\n";
            break;
        default:
            std::cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit() {

    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    return 0;
}
double withdraw(double balance){
    return 0;
}