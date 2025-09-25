#include <iostream>
using namespace std;// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int x;
    cout << "Please enter a number: ";
    cin >> x;
    if (x>=0) {
        cout<<"Positive";
        cout<<endl;
    }
    else {
        cout<<"Negative";
    }// TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    return 0;
}
