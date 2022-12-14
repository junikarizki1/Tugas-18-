#include <iostream>
using namespace std;
int main(){

    cout <<"<!--Tugas 24 Soal No.1-->\n";
    cout <<"Program Menghitung Tinggi Badan Siswa\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"*************************************************************\n";

    int n;
    float tinggi, total = 0, avg, mini;
    cout <<"Masukkan Jumlah Siswa ";
    cin >>n;
    for (int i = 1; i <= n; i++) {
        cout <<"Inputkan Tinggi Badan Siswa Ke-"<<i <<endl;
        cin >>tinggi;
        total = total + tinggi;
        if(i == 1) {
            mini = tinggi;
        }else if (mini > tinggi) {
            mini = tinggi;
        }
    }
    avg = total / n;
    cout <<"\n\nRata-rata Tinggi Badan Siswa : "<<avg <<endl;
    cout <<"Tinggi Badan Paling Rendah   : "<<mini <<endl;
    cout <<"============================================================";
return 0;
}
