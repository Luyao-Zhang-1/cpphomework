#include<iostream>
using namespace std;

int main(){
    char s[80];
    cin.getline(s,80);
    int count_a = 0;
    int count_e = 0;
    int count_i = 0;
    int count_o = 0;
    int count_u = 0;
    for (int i = 0; i < 80; i++){
        if (s[i] == 'a') {
            count_a++;
        } else if (s[i] == 'e') {
            count_e++;
        } else if (s[i] == 'i') {
            count_i++;
        } else if (s[i] == 'o') {
            count_o++;
        } else if (s[i] == 'u') {
            count_u++;
        }
    } 
    cout << count_a <<" " << count_e <<" " << count_i <<" " << count_o <<" " << count_u;
    return 0;
}