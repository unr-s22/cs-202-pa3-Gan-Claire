#include "account.h"

using namespace std;

Account::Account(Money deposit){
    balance = deposit;
    //deposits[1] = deposit;
    //withdrawals[1] = deposit;
}

void Account::makeDeposit(Money deposit){
    deposits.push_back(deposit);
    depositUpdate = true;
    depositNum++;
    
    /*Money(double balance) {
    double balance;
    }
    int sum;
    int n, sum = balance;
    balance = 300.23;
    /*cout << "Enter deposit amounts";
        void deposit(const money &m);
        deposit = arr[i];
        //amounts from main

        for(int i=0;i<n;i++) {
            sum+=arr[i];
    }
        for(int i=0; i<n; i++){
            cin>>arr[i];
    	}

        for(int i=0;i<n;i++) {
            sum+=arr[i];
	}*/

    //cout<<"\n total sum amount:"<<sum;
}


void Account::makeWithdrawals(Money withdrawal){
    withdrawals.push_back(withdrawal);
    withdrawalUpdate = true;
    withdrawalNum++;
    
    /*int n, sum = sum;
    cout<<"total account balance:"<<sum<<endl;
    cout<<"How many withdrawls would you like to make"<<endl;
    cin>> n;
    int arr[n];
    cout<<"Enter the total withdrawl amounts";

        void withdrawl(const money &m);
        withdrawl = arr[i];

        }

        for(int i=0; i<n; i++){
            sum-=arr[i];

        cout<<"\n new total balance:"<<sum;
        return 0;
        }*/

}

void Account::recalculate(){
    if(depositUpdate == true){
        /*int count1 = 0, count2 = 0;
        count1 = depositNum;
        count2 = withdrawalNum;

        for(int i = 0; i<count1;i++){
            balance = balance + deposits[i];
        }

        for(int i = 0; i<count2;i++){
            balance = balance - deposits[i];
        }*/
        Money a;
        auto sum_deposits = accumulate(deposits.begin(), deposits.end(),a);
        //auto sum_withdrawals = accumulate(withdrawals.begin(), withdrawals.end(), a);
        balance = balance + sum_deposits;
        depositUpdate = false;
    }
    if(withdrawalUpdate == true){
        /*int count1 = 0, count2 = 0;
        count1 = depositNum;
        count2 = withdrawalNum;

        for(int i = 0; i<count1;i++){
            balance = balance + deposits[i];
        }

        for(int i = 0; i<count2;i++){
            balance = balance - deposits[i];
        }*/
        Money d;
        //auto sum_deposits = accumulate(deposits.begin(), deposits.end(),a);
        auto sum_withdrawals = accumulate(withdrawals.begin(), withdrawals.end(), d);
        balance = balance - sum_withdrawals;
        withdrawalUpdate = false;
    }
}