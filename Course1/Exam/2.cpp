#include<iostream>
using namespace std;
int main(){
    int a = 0;
    while(cin >> a){
    bool multiples_3 = false;
    bool multiples_5 = false;
    bool multiples_7 = false;
    if (a % 3 == 0) multiples_3 = true;
    if (a % 5 == 0)  multiples_5 = true;
    if (a % 7 == 0)  multiples_7 = true;
    if ((multiples_3 == true) | (multiples_5 == true) | (multiples_7==true)){
        if ((multiples_3 == true) && (multiples_5 == true) && (multiples_7==true)){
            cout << 3 << ' ' << 5 << ' ' << 7 << endl;
        }
        else if ((multiples_3 == true) && (multiples_5 == true)) cout << 3 << ' ' << 5 <<endl;
        else if ((multiples_3 == true) && (multiples_7 == true)) cout << 3 << ' ' << 7 <<endl;
        else if ((multiples_5 == true) && (multiples_7 == true)) cout << 5 << ' ' << 7 <<endl;
        else if (multiples_3 == true) cout << 3 <<endl;
        else if (multiples_5 == true) cout << 5 <<endl;        
        else if (multiples_7 == true) cout << 7 <<endl;        
    }
    else cout << 'n' <<endl;
    }
return 0;
}