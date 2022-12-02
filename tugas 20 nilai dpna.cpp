#include <iostream>

using namespace std;

int main() {

    int ak, tt, um, ua;
    float nAk, nTt, nUm, nUa, dpna;
    char grade;

    cout <<"<!--Soal No. 2-->\n";
    cout <<"Program Menghitung Nilai DPNA Mahasiswa\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"*************************************************************\n";
    cout <<"Masukkan Nilai Aktivitas Kelas (0-100) ";
    cin >>ak;
    cout <<"Masukkan Nilai Tugas Terstruktur (0-100) ";
    cin >>tt;
    cout <<"Masukkan Nilai Ujian MID (0-100) ";
    cin >>um;
    cout <<"Masukkan Nilai Ujian Akhir (0-100) ";
    cin >>ua;

    nAk = ak * 0.1;
    nTt = tt * 0.2;
    nUm = um * 0.3;
    nUa = ua * 0.4;
    dpna = nAk + nTt + nUm + nUa;

    if (dpna >=80.00 && dpna <=100.00 ) {
      grade = 'A';
    }else if (dpna >=70.00 && dpna <=79.99 ) {
      grade = 'B';
    }else if (dpna >=60.00 && dpna <=69.99 ) {
      grade = 'C';
    }else if (dpna >=40.00 && dpna <=59.99 ) {
      grade = 'D';
    }else if (dpna >=0.00 && dpna <=39.99 ) {
      grade = 'E';
    }
    cout <<"_____________________________________________________________";
    cout <<"\n| Total Nilai Aktivitas Kelas             = "<<nAk;
    cout <<"\n| Total Nilai Tugas Terstruktur           = "<<nTt;
    cout <<"\n| Total Nilai Ujian MID                   = "<<nUm;
    cout <<"\n| Total Nilai Ujian Akhir                 = "<<nUa;
    cout <<"\n|============================================================";
    cout <<"\n|";
    cout <<"\n| Total Nilai DPNA                            = "<<dpna;
    cout <<"\n| Grade Yang Diperoleh Mahasiswa adalah       Grade "<<grade;
    cout <<"\n|                                             ---------------\n";
    cout <<"|____________________________________________________________";

    return 0;
}
