//private and public member

#include <iostream>
using namespace std;

class BankAccount{
    private:
    int Balance;

    public:
    void setBalance(int amount) {
        Balance = amount;
    }

    void displayBalance() {
        cout << "Balance: " << Balance << endl;
    }
};

int main () {
    BankAccount account;
    account.setBalance(5000);
    account.displayBalance();

    return 0;
}