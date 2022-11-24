#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 
    float ak, tt, um, ua, nAk, nTt, nUm, nUa,dpna;
    
    cout <<"<!--Soal No. 4-->\n";
    cout <<"Program Menghitung Total Nilai DPNA Mahasiswa\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"*************************************************************\n";
    cout <<"Masukkan Nilai Aktivitas Kelas ";
    cin >>ak;
    cout <<"Masukkan Nilai Tugas Terstruktur Kelas ";
    cin >>tt;
    cout <<"Masukkan Nilai Ujian MID ";
    cin >>um;
    cout <<"Masukkan Nilai Ujian Akhir ";
    cin >>ua;
    nAk = ak * 0.1;
    nTt = tt * 0.2;
    nUm = um * 0.3;
    nUa = ua * 0.4;
    dpna = nAk + nTt + nUm + nUa;
    cout <<setprecision(10); //Jika menggunakan float atau digit angkanya panjang, sebaiknya aktifkan ini dan <iomanip>
    cout <<"_____________________________________________________________\n";
    cout <<"| Nilai Aktivitas Kelas                   = "<<ak <<endl;
    cout <<"| Nilai Tugas Terstruktur                 = "<<tt <<endl;
    cout <<"| Nilai Ujian MID                         = "<<um <<endl;
    cout <<"| Nilai Ujian Akhir                       = "<<ua <<endl;
    cout <<"|============================================================\n";
    cout <<"| Total Nilai Aktivitas Kelas             = "<<nAk <<endl;
    cout <<"| Total Nilai Tugas Terstruktur           = "<<nTt <<endl;
    cout <<"| Total Nilai Ujian MID                   = "<<nUm <<endl;
    cout <<"| Total Nilai Ujian Akhir                 = "<<nUa <<endl;
    cout <<"|============================================================ + \n";
    cout <<"|\n";
    cout <<"| Total Nilai DPNA Mahasiswa              = "<<dpna <<endl;
    cout <<"|                                         -------------------     \n";
    cout <<"|____________________________________________________________";
    return 0;

}
