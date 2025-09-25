#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout<<"enter 2 numbers:";
    cin>>a>>b;
    if (b!=0) {
        if (a%b==0)
            cout<<a<<" is divisible by" <<b<<endl;
        else
            cout<<a<<" is not divisible by"<<b<<endl;
    }
    else
        cout<<" Division by 0 is not allowed"<< endl;
    return 0;
}
