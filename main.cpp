/*
Name: Programming Assignment 3
Purpose: Keep an account with a balance as well as the ability to deposit and withdraw
Authors: Claire Gan, Sierra Scott, and Peverel Shipley
*/

#include "money.h"
#include "account.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    //Money newAccount(300, 23);
    Money deposit(300, 23);
    Money withdrawal(300, 10);

    Account testAccount(deposit);

    cout << testAccount << endl;

    deposit.Money::setMoney(200, 0);
    testAccount.Account::makeDeposit(deposit);
    deposit.Money::setMoney(300, 24);
    testAccount.Account::makeDeposit(deposit);
    deposit.Money::setMoney(501, 22);
    testAccount.Account::makeDeposit(deposit);
    testAccount.Account::recalculate();
	
	cout << testAccount << endl;

    withdrawal.Money::setMoney(300, 10);
    testAccount.Account::makeWithdrawals(withdrawal);
    withdrawal.Money::setMoney(201, 34);
    testAccount.Account::makeWithdrawals(withdrawal);
    testAccount.Account::recalculate();

    cout << testAccount << endl;

    Money m(100,10);
    Money n(100,10);
    if(m > n){
        cout << "m greater than n" << endl;
    } 
    else if (m < n){
        cout << "m less than n" << endl;
    }
    else if (m >= n){
        cout << "m is greater than or equal to n" << endl;
    }
    else if (m <= n){
        cout << "m is less than or equal to n" << endl;
    }
    else if (m != n){
        cout << "m does not equal n" << endl;
    }
    else if (m == n){
        cout << "m equals n" << endl;
    }

    return 0;
}
