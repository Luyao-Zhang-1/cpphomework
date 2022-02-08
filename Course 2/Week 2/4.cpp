#include <iostream>
#include <sstream>
using namespace std;
int year = 0;
int month = 0;
int date = 0;
int char_convert_integer(char n){
    return (int)n - 48;
}

int yyyy_conversion(char n[]){
    return char_convert_integer(n[0]) * 1000 + char_convert_integer(n[1]) * 100 + char_convert_integer(n[2]) * 10 + char_convert_integer(n[3]);
}

int mm_conversion(char n[]){
  return char_convert_integer(n[5]) * 10 + char_convert_integer(n[6]);
}

int dd_conversion(char n[]){
  return char_convert_integer(n[8]) * 10 + char_convert_integer(n[9]);
}
bool leap_year(int n){
    if ((n % 4 == 0 && n % 100 !=0) || (n%100 == 0 && n % 400 == 0)){
        return true;
    } else return false;
}

void date_next(int, int, int){
    if (date <= 27){
        date = date + 1;
    }
    else if (date == 28){
        if (month == 2){
            if (leap_year(year) == true){
                date = date + 1;
            } else {
                date = 0;
                month = 3;
            }
        }
        else date = 29;
        }
    else if (date == 29){
        if (month == 2){
        date = 0;
        month = 3;
        }
        else date = 30;
    }
    else if (date == 30){
        if (month == 1 || 3 || 5 || 7 || 8 || 10 || 12){
            date = 31;
        }
        else {
            date = 0;
            month = month + 1;
        }
    } 
    else if (date == 31){
        if (month != 12){
        date = 0;
        month = month + 1;
        }
        else {
            month = 1;
            year = year + 1;
        }
    }
}
  
int main(){
    string original_date;
    cin >> original_date;
    char yyyy_mm_dd[10];
    for (int i = 0; i < 10; i++){
        yyyy_mm_dd[i] = original_date[i];
    }
    year = yyyy_conversion(yyyy_mm_dd);
    month = mm_conversion(yyyy_mm_dd);
    date = dd_conversion(yyyy_mm_dd);
    date_next(date, month, year);
    string yyyy;
    string mm;
    string dd;
    stringstream ss1;
    ss1 << year;
    ss1 >> yyyy;
    stringstream ss2;
    ss2 << month;
    ss2 >> mm;
    stringstream ss3;
    ss3 << date;
    ss3 >> dd;
    if (month < 10){
        mm = '0' + mm;
    }
    if (date < 10){
        dd = '0' + dd;
    }
    cout << yyyy << '-' << mm << '-' <<dd;
    return 0;
}