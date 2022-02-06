#include<iostream>
#include <cstring>
using namespace std;
int main(){
    string str = "";
    string substr = "";
    int str_length = 0;
    while (cin >> str >> substr){
    str_length = str.length();//create a variable to store the length of str
    char str_char[str_length + 3];//create a char array to store each letter of str and str
    //store each of the element of str in the char array
    for (int i = 0; i < str_length; i++){
        str_char[i] = str[i];
    }
    char max = 0;//create a variable to store the maximum element in the array
    for (int i = 0; i < str_length; i++){
        if (str_char[i] > max) max = str_char[i];
    }
    int position_max = 0;//create a variable to store the position of the maximum element
    for (int i = 0; i < str_length; i++){
        if (str_char[i] == max) {
            position_max = i;
            break;
        }
    }
    char substr_char[3];//create a char array to store each letter of substr, which has 3 elements
    //store each of the element in the char array
    for (int i = 0; i < 3; i++){
        substr_char[i] = substr[i];
    }
    //Insert substr to the position right after the maximum element
    for (int i = str_length - 1; i > position_max; i--){
        str_char[i+3] = str_char[i];
    }
    for (int i = 0; i < 3; i++){
        str_char[position_max + 1 + i] = substr_char[i];
    }
    for (int i = 0; i < str_length + 3; i++){
       cout << str_char[i];
       if (i == (str_length + 2)) cout << endl; // When outputing the last element, add an enter.
    }
    }
return 0;
}