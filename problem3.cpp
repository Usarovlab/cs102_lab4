#include <iostream>
using namespace std;
int main() {
    int a,b,c;
int max=0;
    cout<< "enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    cout<<"enter the third number: ";
    cin>>c;
    if(a>=b && a>=c) {
        max=a;
    }
        else if (b>=a && b>=c) {
            max=b;
        }
            else if (c>=b && c>=a) {
                max=c;
            }
    cout<<"max is "<<max;
    return 0;
}
