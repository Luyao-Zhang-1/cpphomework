#include<iostream>
using namespace std;

int main(){
int L = 0, M = 0;
cin >> L >> M;
//the elements in the string is L + 1
string tree[L+1];
for (int i = 0; i <= L; i++){
    tree[i] = "tree";
}
int area_start = 0, area_end = 0;

int area_number = 0;
while (area_number < M){
    cin >> area_start >> area_end;
        for (area_start; area_start <= area_end; area_start++){
            tree[area_start] = "tree_removed";
        }
    area_number++; 
}
int trees_number = 0;
for (int i = 0; i <=L; i++){
    if (tree[i] == "tree"){
        trees_number++;
    }
}
cout << trees_number;
return 0;
}