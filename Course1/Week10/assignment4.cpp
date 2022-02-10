#include<iostream>
#include <iomanip>
using namespace std;

int main(){

int a[5][5];
int temp[5];
int n = 0, m = 0;
for (int i = 0; i <=4; i++){
    for (int j = 0; j <=4; j++){
    cin >> a[i][j];
    }
}
cin >> n >> m;
if (n <= 4 && m <=4 && n >= 0 && m >= 0){
    for (int i = 0; i <= 4; i++){
    temp[i] = a[n][i];
    a[n][i] = a[m][i];
    a[m][i] = temp[i];
    }
    for (int i = 0; i <=4; i++){
        for (int j = 0; j <=4; j++){
            cout << setw(4) << a[i][j];
            if(j == 4){
                cout << endl;
            }
        }
    }
}
else cout << "error" << endl;
return 0;
}