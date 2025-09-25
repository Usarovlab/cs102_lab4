#include<iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter a number:";
    cin>>x;
    if (x>=0) {
      if (x%2==0) {
        cout<<" The number is positive  or Even";
        cout<<endl;
    }
        else {
            cout<<" The number is positive  or Odd";
        }

    }
    else{
        if (x%2==0) {
            cout<<" The  number is negative or Even";
            cout<<endl;
        }
        else {
            cout<<" The  number is negative or Odd";
        }
    }
    return 0;
}
// Created by Azamat O�sarov on 25/09/25.
//
