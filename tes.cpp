#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char gol;
    int gaji = 0;
    int a = 1800000;
    int b = 2500000;
    int c = 4000000;
    int jamKerja, gajiLembur,total;
    int jamLembur = 0;

    cout <<"<!--Tugas 19-->\n";
    cout <<"Program Menghitung Gaji Pegawai\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"*************************************************************\n";
    cout <<"Masukkan Golongan Pegawai ";
    cin >>gol;

    if(gol == 'a') {
        gaji = gaji + a;
         cout <<"Gaji Pegawai                          : Rp."<<gaji;
    }else if(gol == 'b') {
        gaji = gaji + b;
         cout <<"Gaji Pegawai                          : Rp."<<gaji;
    }else if(gol == 'c') {
        gaji = gaji + c;
         cout <<"Gaji Pegawai                          : Rp."<<gaji;
    }


    cout <<"\n\nMasukkan Jam Kerja\n";
    cin >>jamKerja;

    if(jamKerja >150)
        jamLembur = jamKerja - 150;
    gajiLembur = jamLembur * 12000;
    cout <<"Jam Lembur                             : "<<jamLembur <<" Jam\n";
    cout <<"Gaji Lembur                            : Rp."<<gajiLembur;

    total = gajiLembur + gaji;
    cout <<"\nTotal Gaji                             : Rp."<<total;



    return 0;

}
