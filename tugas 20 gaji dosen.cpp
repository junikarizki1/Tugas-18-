#include <iostream>

using namespace std;

int main() {

    int sks;
    int gajiPsks=0;
    int gajiKtr;
    string gol, npwp;
    float pajak, ttlGaji;

    cout <<"Masukkan Salah satu Golongan Dosen Dibawah Ini :\n";
    cout <<"lektor kepala\n";
    cout <<"lektor\n";
    cout <<"asisten ahli\n";
    cout <<"Tidak ada golongan\n\n";
    getline (cin, gol);
    cout <<"Masukkan Jumlah Sks Dosen Mengajar\n";
    cin >>sks;
    cout <<"Apakah Dosen Memiliki NPWP ?\n";
    cout <<"Isikan 'ada' atau 'tidak'" <<endl;
    cin >>npwp;


    if (gol == "lektor kepala") {
        gajiPsks = gajiPsks + 40000;
        gajiKtr = gajiPsks * sks;
    }else if (gol == "lektor") {
        gajiPsks = gajiPsks + 37000;
        gajiKtr = gajiPsks * sks;
    }else if (gol == "asisten ahli") {
        gajiPsks = gajiPsks + 33000;
        gajiKtr = gajiPsks * sks;
    } else {
        gajiPsks = gajiPsks + 28000;
        gajiKtr = gajiPsks * sks;
        gol = "Tidak Ada Golongan";
    }

    if (npwp == "ada") {
        pajak = gajiKtr * 0.025;
    }else {
        pajak = gajiKtr * 0.03;
    }

    ttlGaji = gajiKtr - pajak;
    cout <<"\nGolongan Dosen adalah               "<<gol <<endl;
    cout <<"Jumlah Sks Dosen                    "<<sks <<" Sks" <<endl;
    cout <<"Keterangan NPWP                     "<<npwp <<endl;
    cout <<"Gaji Dosen Per Sks                  Rp."<<gajiPsks <<endl;
    cout <<"Gaji Dosen Sebelum Pajak            Rp."<<gajiKtr <<endl;
    cout <<"Pajak                               Rp."<<pajak <<endl;
    cout <<"Total Gaji Dosen                    Rp."<<ttlGaji;



    return 0;
}
