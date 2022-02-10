#include <iostream>
using namespace std;
float amount_per_invoice_type_per_person(char a[], float b[], float c, char m, int n){
    for (int i = 0; i < n; i++){
        if (a[i] == m){
        c = b[i] + c;
        }
    }
    return c;
}
int main(){
    int total_invoice_number_per_person = 0;
    int person[3];
    float invoice_amount_a = 0, invoice_amount_b = 0, invoice_amount_c = 0;
    int total_amount_a[3], total_amount_b[3], total_amount_c[3], total_amount_per_person[3];
    char invoice_a = 'A', invoice_b = 'B', invoice_c = 'C';
    for (int j = 0; j < 3; j++){
        cin >> person[j] >> total_invoice_number_per_person;
        char invoice_type_per_person[total_invoice_number_per_person];
        float invoice_amount_per_type_per_person[total_invoice_number_per_person];
        for (int i = 0; i < total_invoice_number_per_person; i++){
            cin >> invoice_type_per_person[i] >> invoice_amount_per_type_per_person[i];
        }
        total_amount_a[j] = amount_per_invoice_type_per_person(invoice_type_per_person, invoice_amount_per_type_per_person, invoice_amount_a, invoice_a, total_invoice_number_per_person);
        total_amount_b[j] = amount_per_invoice_type_per_person(invoice_type_per_person, invoice_amount_per_type_per_person, invoice_amount_b, invoice_b, total_invoice_number_per_person);
        total_amount_c[j] = amount_per_invoice_type_per_person(invoice_type_per_person, invoice_amount_per_type_per_person, invoice_amount_c, invoice_c, total_invoice_number_per_person);
        total_amount_per_person[person[j]] = total_amount_a[j] + total_amount_b[j] + total_amount_c[j];
        cout << "j: " << j << ", total_amount_a" << total_amount_a[j] << endl;
        cout << "j: " << j << ", total_amount_b" << total_amount_b[j] << endl;
        cout << "j: " << j << ", total_amount_c" << total_amount_c[j] << endl;        
        }
   /* cout << 1 << ' ' << total_amount_per_person[1] << endl;
    cout << 2 << ' ' << total_amount_per_person[2] << endl;
    cout << 3 << ' ' << total_amount_per_person[3] << endl;   
    cout << 'A' << ' ' << total_amount_a[0] + total_amount_a[1] + total_amount_a[2] << endl;
    cout << 'B' << ' ' << total_amount_b[0] + total_amount_b[1] + total_amount_b[2] << endl;
    cout << 'C' << ' ' << total_amount_c[0] + total_amount_c[1] + total_amount_c[2] << endl;*/
    return 0;
}