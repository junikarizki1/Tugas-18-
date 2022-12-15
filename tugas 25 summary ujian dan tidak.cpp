#include <iostream>
using namespace std;
int main () {

    cout <<"<!--Tugas 25 Soal No.1-->\n";
    cout <<"Program Menghitung Total Mahasiswa Ikut Ujian/Tidak\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"*************************************************************\n";

    int jmlMhs, lulus=0, tdkLulus=0;
    float tHdrDsn, tHdrMhs, akMin;
    cout <<"Masukkan Jumlah Mahasiswa ";
    cin >>jmlMhs;
    cout <<"Masukkan Total Hadir Dosen ";
    cin >>tHdrDsn;

    for (int i = 1; i <= jmlMhs; i++) {
        cout <<"Masukkan Jumlah Kehadiran Mahasiswa Ke-"<<i <<" ";
        cin >>tHdrMhs;
        akMin = tHdrMhs * 10 / tHdrDsn ;
        if (akMin >= 7.5) {
            lulus += 1;
        }else if (akMin <7.5) {
            tdkLulus += 1;
        }

    }
    cout <<endl<<endl;
    cout <<"Jumlah Mahasiswa Yang Bisa Ikut Ujian           : "<<lulus <<endl;
    cout <<"Jumlah Mahasiswa Yang Tidak Bisa Ikut Ujian     : "<<tdkLulus <<endl;
    return 0;
}
