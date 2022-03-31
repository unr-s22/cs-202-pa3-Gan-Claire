#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include <vector>
#include <numeric>

#include "money.h"

using namespace std;

class Account {

    private: 
	    Money balance;
        vector<Money> deposits;
        vector<Money> withdrawals;
        bool depositUpdate = false;
        bool withdrawalUpdate = false;
        int depositNum = 0, withdrawalNum = 0;
        

    public:
        //Account();
        Account(Money);
        void makeDeposit(Money);
        void makeWithdrawals(Money);
        void recalculate();
        friend std::ostream &operator << (std::ostream &os, const Account &account)
        {
            os << "Account Details\n--------------------------\nCurrent Balance:" << account.balance << "\n--------------------------\nNumber of Deposits: " << account.depositNum << "\n--------------------------\n";
            if(account.deposits.size() != 0)
            {
                for(int i = 0; i<account.depositNum; i++)
                {
                    os << "(" << i+1 << ") " << account.deposits[i] << "\n";
                }
            }
            //os << endl;
            os << "--------------------------\n Number of Withdrawals: " << account.withdrawalNum << "\n--------------------------\n";
            if(account.withdrawals.size() != 0)
            {
                for(int i = 0; i<account.withdrawalNum; i++)
                {
                    os << "(" << i+1 << ") " << account.withdrawals[i] << "\n";
                };
            }
            os << "----\n";
            return os;
	    }   

	/*Money(int x1)
    	{
        	x = x1;
    	}
    	int getX()
    	{
        	return x;
    
    	}*/


    };
    #endif
