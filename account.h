#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account {

    private: 
        int accountBalance(); 
        double balance();
	int x;

    public:
        void makeDeposit();
        void makeWithdrawls();

	Money(int x1)
    	{
        	x = x1;
    	}
    	int getX()
    	{
        	return x;
    
    	}


    };
    #endif
