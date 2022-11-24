#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int bpp = 2000000;
    double jmlSks, dMahasiswa, biayaPerSks, ttlBiayaSks, ttlBiayaKuliah;
    dMahasiswa = 200000;
    biayaPerSks = 115000;
    
    cout <<"<!--Soal No. 1-->\n";
    cout <<"Program Menghitung Biaya Kuliah Mahasiswa\n";
    cout <<"==========================================================\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"Masukkan Jumlah Sks ";
    cin >>jmlSks;
    ttlBiayaSks = jmlSks * biayaPerSks;
    ttlBiayaKuliah = bpp+  dMahasiswa + ttlBiayaSks;
    cout <<setprecision(10);
    cout <<"==========================================================\n";
    cout <<"BPP = Rp."<<bpp<<endl;
    cout <<"Dana Kemahasiswaan = Rp."<<dMahasiswa<<endl;
    cout <<"Jumlah Sks Mahasiswa = "<<jmlSks <<" Sks"<<endl;
    cout <<"Biaya Per Sks = Rp."<<biayaPerSks<<endl;
    cout <<"Total Biaya Sks Mahasiswa = Rp."<<ttlBiayaSks <<endl;
    cout <<"==========================================================\n";
    cout <<"Total Biaya Kuliah Mahasiswa = Rp."<<ttlBiayaKuliah <<endl;
    return 0;

}
