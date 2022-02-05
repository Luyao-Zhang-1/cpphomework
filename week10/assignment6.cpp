#include<iostream>
using namespace std;

int main(){
int num = 0, position = 0;
cin >> num >> position;
int line[num * 2];
for (int i = 0; i < num; i++){
    cin >> line[i];
}
for (int i = 0; i < num - position; i++){
    line[num + i] = line[i];
}
for (int i = num - position; i < num + num - position; i++){
    cout << line[i] <<' ';
}
return 0;
}