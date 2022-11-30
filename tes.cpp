#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char gol;
    int gaji = 0, jamLembur = 0;
    int a = 1800000;
    int b = 2500000;
    int c = 4000000;
    int jamKerja, gajiLembur,total;

    cout <<"<!--Tugas 19-->\n";
    cout <<"Program Menghitung Gaji Pegawai\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"*************************************************************\n";
    cout <<"Masukkan Golongan Pegawai ";
    cin >>gol;

    cout <<"_____________________________________________________________\n";
    if(gol == 'a' || gol == 'A') {
        gaji = gaji + a;
         cout <<"| Gaji Pegawai Gol " <<gol <<"                        : Rp."<<gaji;
    }else if(gol == 'b' || gol == 'B') {
        gaji = gaji + b;
         cout <<"| Gaji Pegawai Gol " <<gol <<"                        : Rp."<<gaji;
    }else if(gol == 'c' || gol == 'C') {
        gaji = gaji + c;
         cout <<"| Gaji Pegawai Gol " <<gol <<"                        : Rp."<<gaji;
    }
    cout <<"\n| ===========================================================";
    cout <<"\n|";
    cout <<"\n|"<<endl;
    cout <<"| Masukkan Jam Kerja ";
    cin >>jamKerja;

    if(jamKerja >150)
        jamLembur = jamKerja - 150;
    gajiLembur = jamLembur * 12000;
    cout <<"| Jam Lembur                      : "<<jamLembur <<" Jam\n";
    cout <<"| Gaji Lembur Per Jam             : Rp.12000\n";
    cout <<"| ===========================================================  \n";
    cout <<"| Gaji Lembur                                : Rp."<<gajiLembur;

    total = gajiLembur + gaji;
    cout <<"\n| Total Gaji                                 : Rp."<<total <<endl;
    cout <<"|                                             ---------------\n";
    cout <<"|____________________________________________________________";



    return 0;

}
