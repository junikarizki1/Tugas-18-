#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int berat;
    double biayaPerKg, biaya,pajak,ttlBiaya;
    cout <<"Program Menghitung Biaya Ekspedisi\n";
    cout <<"==========================================================\n";
    cout <<"By : Junika Rizki\n\n";
    cout <<"Masukkan Berat Barang ";
    cin >>berat;
    cout <<"Masukkan Biaya Per Kg ";
    cin >>biayaPerKg;
    biaya = biayaPerKg * berat;
    pajak = biaya * 0.1;
    ttlBiaya = biaya - pajak;
    //system("cls");
    cout <<"=========================================================="<<endl;
    cout <<setprecision(10);
    cout <<"\nBerat Barang = "<<berat <<"Kg" <<endl;
    cout <<"Biaya Per Kg = Rp."<<biayaPerKg<<endl;
    cout <<"Biaya Pengiriman Sebelum Pajak = Rp."<<biaya<<endl;
    cout <<"Pajak = Rp."<<pajak<<endl;
    cout <<"=========================================================="<<endl;
    cout <<"Total Biaya Pengiriman Setelah Pajak = Rp."<<ttlBiaya<<endl;

    return 0;
}
