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
    Account account(30023);

    cout << account << endl;

    account.makeDeposit(20000);
    account.makeDeposit(30024);
    account.makeDeposit(50122);
	
	cout << account << endl;

    account.makeWithdrawals(30010);
    account.makeWithdrawals(20134);

    cout << account << endl;

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
