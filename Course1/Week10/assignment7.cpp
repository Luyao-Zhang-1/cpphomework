#include<iostream>
using namespace std;

int main(){

int N = 0;
cin >> N;
int numbers[N];
for (int i = 0; i < N; i++){
    cin >> numbers[i];
}


?????????



if (N % 2 != 0){
    cout << numbers[N % 2];
} else cout << (numbers[N / 2 - 1] + numbers[N / 2])/2;

return 0;
}