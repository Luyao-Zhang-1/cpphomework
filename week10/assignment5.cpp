#include<iostream>
using namespace std;

int main(){
int cell[100][100];
int line = 0;
int abnormal = 0;
cin >> line;
for (int m = 0; m < line; m++){
    for (int n = 0; n < line; n++)
        cin >> cell[m][n];
    }
for (int a = 1; a < line-1; a++){
    for (int b = 1; b < line-1; b++){
        if ((cell[a][b] <= cell[a-1][b] - 50) && (cell[a][b] <= cell[a][b-1] - 50) && (cell[a][b] <= cell[a][b+1] - 50) && (cell[a][b] <= cell[a+1][b] - 50))
            abnormal++;
        }
    }
cout << abnormal << endl;
return 0;
}