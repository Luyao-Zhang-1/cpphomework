#include <iostream>
using namespace std;
int biggest, second, third, last;
void lakerank(int i){
    if (biggest == i) cout << 1 << endl;
    else if (second == i) cout << 2 << endl;
    else if (third == i) cout << 3 << endl;
    else if (last == i) cout << 4 << endl;
}
int main(){
    //    d = 1, h = 2, p = 3, t = 4
    for (biggest = 1; biggest <=4; biggest++){
        for (second = 1; second <=4; second++){
          for (third = 1; third <=4; third++){
               for (last = 1; last <=4; last++){
                   if (biggest == second || biggest  == third || biggest == last || second == third || second == last || third == last) {
                       continue;
                   }
    bool a1 = (biggest == 1);
    bool a2 = (last == 2);
    bool a3 = (third == 3);
    bool b1 = (biggest == 2);
    bool b2 = (last == 1);
    bool b3 = (second == 3);
    bool b4 = (third == 4);
    bool c1 = (last == 2);
    bool c2 = (third == 1);
    bool d1 = (biggest == 3);
    bool d2 = (last == 4);
    bool d3 = (second == 2);
    bool d4 = (third == 1);
    if ((a1 + a2 + a3 != 1) || (b1 + b2 + b3 + b4 != 1) || (c1 + c2 != 1) || (d1 + d2 + d3 + d4 !=1)){
        continue;
    }
    lakerank (3);
    lakerank (1);
    lakerank (4);
    lakerank (2);
               }
          }
        }
    }
    return 0;
}