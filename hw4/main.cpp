#include <iostream>
#include "bank.h"
using namespace std;

int main() {
    Bank bank;

    bank.read_accounts("accounts.txt");

    bank.print();

    bank.process_transactions("transactions.txt");

    bank.print();

    return 0;
}

