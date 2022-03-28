#include "account.h"
#include <iostream>

using namespace std;

void Account::makeDeposit(){
    Money(double balance) {
    double balance;
    }
    int sum;
    int n, sum = balance;
    balance = 100.55;
    cout << "Please enter number of deposits. " << endl;
    cin>> n;
    int arr[n];
    cout << "Enter deposit amounts";

        for(int i=0; i<n; i++){
            cin>>arr[i];
    	}

        for(int i=0;i<n;i++) {
            sum+=arr[i];
	}

    cout<<"\n total sum amount:"<<sum;
    return sum;
}


void Account::makeWithdrawls(){
    int n, sum = sum;
    cout<<"total account balance:"<<sum<<endl;
    cout<<"How many withdrawls would you like to make"<<endl;
    cin>> n;
    int arr[n];
    cout<<"Enter the total withdrawl amounts";

        for(int i=0; i<n; i++){
            cin>>arr[i];

        }

        for(int i=0; i<n; i++){
            sum-=arr[i];

        cout<<"\n new total balance:"<<sum;
        return 0;
        }

}

