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
    int person_1 = 0, person_2 = 0, person_3 = 0, total_invoice_number_per_person = 0;
    char invoice_a = 'A', invoice_b = 'B', invoice_c = 'C';
    cin >> person_1 >> total_invoice_number_per_person;
    char invoice_type_person_1[total_invoice_number_per_person];
    float invoice_amount_per_type_person_1[total_invoice_number_per_person];
    float invoice_amount_a = 0, invoice_amount_b = 0, invoice_amount_c = 0;
    int j = 0;
    for (int i = 0; i < total_invoice_number_per_person; i++){
        cin >> invoice_type_person_1[i] >> invoice_amount_per_type_person_1[i];
        cout << "invoice_type: " << invoice_type_person_1[i] << " invoice_amount: " <<  invoice_amount_per_type_person_1[i] << endl;        
    }
    int total_amount_a_person1 = amount_per_invoice_type_per_person(invoice_type_person_1, invoice_amount_per_type_person_1, invoice_amount_a, invoice_a, total_invoice_number_per_person);
    int total_amount_b_person1 = amount_per_invoice_type_per_person(invoice_type_person_1, invoice_amount_per_type_person_1, invoice_amount_b, invoice_b, total_invoice_number_per_person);
    int total_amount_c_person1 = amount_per_invoice_type_per_person(invoice_type_person_1, invoice_amount_per_type_person_1, invoice_amount_c, invoice_c, total_invoice_number_per_person);
    cout << "A: " << total_amount_a_person1 << "B: " << total_amount_b_person1 << "C: " << total_amount_c_person1;
    return 0;
}