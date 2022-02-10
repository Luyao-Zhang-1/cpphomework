#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 0;
    char operation = 'o';
    cin >> a >> b >> operation;
    if (operation == '+') cout << a+b;
    else if (operation == '-') cout << a-b;
    else if (operation == '*') cout << a*b;
    else if (operation == '/') {
        if (b == 0) cout << "Divided by zero!";
        else cout << a/b;
    }
    else cout << "Invalid operator!";
return 0;
}