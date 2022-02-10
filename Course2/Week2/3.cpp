#include <iostream>
#include <stdio.h> 
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
    float total_amount_a[3], total_amount_b[3], total_amount_c[3], total_amount_per_person[4];
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
    }
     printf("1 %.2f\n", total_amount_per_person[1]);
     printf("2 %.2f\n", total_amount_per_person[2]);
     printf("3 %.2f\n", total_amount_per_person[3]);
     printf("A %.2f\n", total_amount_a[0] + total_amount_a[1] + total_amount_a[2]);
     printf("B %.2f\n", total_amount_b[0] + total_amount_b[1] + total_amount_b[2]);
     printf("C %.2f\n", total_amount_c[0] + total_amount_c[1] + total_amount_c[2]);

    return 0;
}