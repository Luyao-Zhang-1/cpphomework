#include <iostream>
using namespace std;
int result = 101;
void compare_index_value(int a[],int n){
        for (int i= 0; i < n; i++){
            if (a[i] == i){
                result = i;
                break;
            }
        }
    }
int main(){
    int n = 0;
    cin >> n;
    int a[n];
    for (int i= 0; i < n; i++){
    cin >> a[i];
    }
    compare_index_value(a,n);
    if (result == 101){
        cout << 'N' << endl;
    } else cout << result << endl;

    return 0;
}