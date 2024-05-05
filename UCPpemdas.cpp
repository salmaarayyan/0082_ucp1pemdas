// 1. int nMtk,nFis;
//    double nRerata;
//    string cStatus ;
//
// 2. string nama;
//    int nXpander, nPorsche, nAvanza, nBrio, nLamborghini;
//    int hXpander = 300, hPorsche = 8000, hAvanza = 260, hBrio = 200, hLamborghini = 6000;
//
// 3. struct Mahasiswa {
//    string nim;
//    string nama;
//    string alamat;
//    int umur;
//    };
//
// 4. Void NamaProsedur()
//    {Kode program}
//    Int main()
//    {kode program}
//
// 5. do while
//    int main(){
//    char pilihan;
//
//      do{
//        cout << "berangkat ambil takjil" << endl;
//        cout << "antri takjil" << endl;
//        cout << "ambil takjil" << endl;
//        cout << "apakah mau antri kembali?" << endl;
//        cin >> pilihan;
//
//      }while(pilihan == 'y' || pilihan == 'Y');
//    }
//
//    while
//	  int angka;
//    int main() {
//	  angka = 1;
//	    while(angka<5){
//	        cout << angka <<endl;
//	        angka++;
//	    }
//    }
//    
//    for
//    	int main(){
//	    int angka;
//	    angka = 14;
//	    for (int i = 0; i < angka ;i++){
//	        cout << i << endl;
//	    }
//    }
//
// 6.

#include <iostream>
using namespace std;

void inputMahasiswa()
{
    string namaMahasiswa;
    int status;
    
    cout << "Masukan nama mahasiswa : ";
    cin.ignore();
    getline(cin, namaMahasiswa);

    cout << "Masukkan status mahasiswa : ";
    cin >> status;

    if (status == 1)
    {
        status++;
        cout << "Status : " << "Mahasiswa " << namaMahasiswa << "dinyatakan diterima." << endl;
    }
    else{
        status++;
        cout << "Status : " << "Mahasiswa " << namaMahasiswa << "dinyatakan ditolak." << endl;
    }
}

void inputNilai()
{
    int nMtk, nBI;
    double nRerata;
    string cStatus;

    // Input nilai Matematika dan Bahasa Inggris
    cout << "Masukkan Nilai Matematika : ";
    cin >> nMtk;
    cout << "Masukkan Nilai Bahasa Inggris : ";
    cin >> nBI;

    // Hitung nilai rata-rata
    nRerata = (nMtk + nBI) / 2;

    // Penentuan status kelulusan
    if (nRerata >= 70) {
        cStatus = "Lulus";
    } else if (nMtk >= 80) {
        cStatus = "Lulus";
    } else {
        cStatus = "Tidak Lulus";
    }

    
}


int main() {
    int pilihan;

        do {
            system("cls");
            cout << "=============== MENU ===============" << endl;
            cout << "1. Input Data Mahasiswa" << endl;
            cout << "2. Input Nilai" << endl;
            cout << "3. Exit" << endl;
            cout << "Masukkan pilihan: ";
            cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            inputMahasiswa();
            break;

        case 2:
            inputNilai();
            break;

        case 3:
            break;
            
        default:
            cout << "Pilihan tidak ada" << endl;
            system("pause");
            break;
        }
    } while (pilihan != 3);

    return 0;
}