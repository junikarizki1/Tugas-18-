#include <iostream>
using namespace std;
int main() {

    cout <<"<!--Tugas 24 Soal No.2-->\n";
    cout <<"Program Menghitung Total Harga\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"*************************************************************\n";

    int hrg, qty, total;
    int i = 1;
    do {
        cout << "Inputkan Bararng ke-" << i << endl;
        cout << "     Harga Satuan : ";
        cin >> hrg;
        cout << "     Kuantitas    : ";
        cin >> qty;
        cout << " " << endl;
        total += hrg * qty;
        i++;
        if (hrg == 0 || qty == 0) {
            break;
        }
    } while (i > 0);

    cout << " " << endl;
    cout << "====================================\n" << endl;
    cout << "Total Harganya Adalah : RP " << total << endl;

    return 0;

}

