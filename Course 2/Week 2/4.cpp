#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
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

void date_next(int date, int month, int year){
    if (date <= 27){
        date = date + 1;
    }
    else if (date == 28){
        if (month == 2){
            if (leap_year(year) == true){
                date = date + 1;
            } else {
                date = 1;
                month = 3;
            }
        }
        else date = 29;
        }
    else if (date == 29){
        if (month == 2){
        date = 1;
        month = 3;
        }
        else date = 30;
    }
    else if (date == 30){
        if (month == 1 || 3 || 5 || 7 || 8 || 10 || 12){
            date = 31;
        }
        else {
            date = 1;
            month = month + 1;
        }
    } 
    else if (date == 31){
        date = 1;
        if (month != 12){        
        month = month + 1;
        }
        else {
            month = 1;
            year = year + 1;
        }
    }
    cout << year << '-' << setfill('0') << setw(2) << month 
                << '-' << setfill('0') << setw(2) << date; 
}
  
int main(){
    string original_date;
    cin >> original_date;
    char yyyy_mm_dd[10];
    for (int i = 0; i < 10; i++){
        yyyy_mm_dd[i] = original_date[i];
    }
    int year = yyyy_conversion(yyyy_mm_dd);
    int month = mm_conversion(yyyy_mm_dd);
    int date = dd_conversion(yyyy_mm_dd);
    date_next(date, month, year);

    return 0;
}