#include "account.h"
#include <iostream>

using namespace std;

class Account() {

void deposits(){
    Money(double b) {
    balance = b;
    }
    int n, sum = balance;
    balance = 100.55;
    cout << "Please enter number of deposits. " << endl;
    cin>> n;
    int arr[n];
    cout << "Enter deposit amounts";

        for(int i=0; i<n; i++){
            cin>>arr[i];
    }

        for(int i=0;i<n;i++)
            sum+=arr[i];

    cout<<"\n total sum ammount:"<<sum;
    return 0;
    }
}
void withdrawls(){
    int n, sum = sum;
    cout<<"total account balance:"<<sum<<endl;
    cout<<"How many withdrawls would you like to make"<<endl;
    cin>> n;
    int arr[n];
    cout<<"Enter the total withdrawl ammounts";

        for(int i=0; i<n; i++){
            cin>>arr[i];

        }

        for(int i=0; i<n; i++){
            sum-=arr[i];

        cout<<"\n new total balance:"<<sum;
        return 0;
        }



        }

    }
}