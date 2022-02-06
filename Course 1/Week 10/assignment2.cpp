#include<iostream>
using namespace std;

int main(){
    char s1[80];
    char s2[80];
    char result = 0;
    cin.getline(s1,80);
    cin.getline(s2,80);
    for (int i = 0; i < 80; i++){
        if (s1[i] > 91){
            s1[i] = s1[i] - 32;
        }
        if (s2[i] > 91){
             s2[i] = s2[i] - 32;
        }
        if (s1[i] > s2[i]){
            result = '>';
            break;
        } else if (s1[i] < s2[i]){
            result = '<';
            break;
        } else if (s1[i] == s2[i]){
            result = '=';
            if (s1[i] == '\0' && s2[i] == '\0'){
                goto Label;
        }
    }
    }
Label:
    cout <<result << endl;
    return 0;
}