#include <iostream>
#include <iomanip>
#include <cstring>
#include <conio.h>
#include <fstream>

using namespace std;

struct Pelanggan {
    char nama[30];
    char alamat[40];
    char kd_mobil[4];
    char kd_motor[4];
    char merk[10];
    char tipe[10];
    char no_ktp[16];
    char no_hp[16];
    char pembayaran[16];
    int lama;
    int disc;
    int tot_hrg;
    int totbay;
};

int main()
{
    char lagi;
    int input, tipe_kendaraan, tipe_motor, hrg_kendaraan, hrg_motor;
    Pelanggan pelanggan;

menu:
    cout << endl << endl;
    cout << "\t\t==============================================" << endl;
    cout << "\t\t        | PROGRAM RENTAL KENDARAAN | " << endl;
    cout << "\t\t        |     COBA COBA RENT       | " << endl;
    cout << "\t\t        |      BEKASI ASELI        | " << endl;
    cout << "\t\t==============================================" << endl;
    cout << endl << endl;
    cout << "\t\t Selamat Datang Di COBA COBA RENT " << endl << endl;
    cout << "\t Pilihan Menu : " << endl << endl;
    cout << "\t 1. Rental Mobil " << endl;
    cout << "\t 2. Rental Motor " << endl;
    cout << "\t 3. Informasi Penyewaan " << endl;
    cout << "\t 4. Keluar " << endl;
    cout << "\t =======================================================" << endl << endl << endl;
    cout << "\t Input Pilihan Anda : ";
    cin >> input;

    if (input == 1)
    {
        system("cls");
    mobil:
        cout << endl << endl;
        cout << "\t\t==============================================" << endl;
        cout << "\t\t| PROGRAM RENTAL KENDARAAN | " << endl;
        cout << "\t\t| COBA COBA RENT | " << endl;
        cout << "\t\t| BEKASI ASELI | " << endl;
        cout << "\t\t==============================================" << endl;
        cout << endl << endl;
        cout << " Nama Penyewa\t\t: ";
        cin.ignore();
        cin.getline(pelanggan.nama, sizeof(pelanggan.nama));
        cout << " Alamat \t\t: ";
        cin.getline(pelanggan.alamat, sizeof(pelanggan.alamat));
        cout << " Nomor KTP \t\t: ";
        cin.getline(pelanggan.no_ktp, sizeof(pelanggan.no_ktp));
        cout << " Nomor HP \t\t: ";
        cin.getline(pelanggan.no_hp, sizeof(pelanggan.no_hp));
        cout << " Metode Pembayaran\t: ";
        cin.getline(pelanggan.pembayaran, sizeof(pelanggan.pembayaran));
        cout << "\n\t\t==============================" << endl;
        cout << " \t\t| MERK MOBIL | KODE MOBIL |" << endl;
        cout << " \t\t==============================" << endl;
        cout << " \t\t| | |" << endl;
        cout << " \t\t| TOYOTA | TY |" << endl;
        cout << " \t\t| | |" << endl;
        cout << " \t\t------------------------------" << endl;
        cout << " \t\t| | |" << endl;
        cout << " \t\t| DAIHATSU | DH |" << endl;
        cout << " \t\t| | |" << endl;
        cout << " \t\t------------------------------" << endl;
        cout << " \t\t| | |" << endl;
        cout << " \t\t| SUZUKI | SZ |" << endl;
        cout << " \t\t| | |" << endl;
        cout << " \t\t==============================" << endl;
        cout << " \n Masukkan Kode Mobil : ";
        cin.getline(pelanggan.kd_mobil, sizeof(pelanggan.kd_mobil));

        if ((strcmp(pelanggan.kd_mobil, "TY") == 0) || (strcmp(pelanggan.kd_mobil, "ty") == 0))
        {
            strcpy(pelanggan.merk, " Toyota");
            system("cls");
        kembali1:
            cout << endl << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | Tipe Mobil | Harga |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | 1.Fortuner |Rp.480.000 |" << endl;
            cout << "\t\t | 2.Avanza   |Rp.350.000 |" << endl;
            cout << "\t\t | 3.Innova   |Rp.330.000 |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\n Pilih Tipe Mobil [1/2/3] : ";
            cin >> tipe_kendaraan;
            cout << endl;

            if (tipe_kendaraan == 1)
            {
                strcpy(pelanggan.tipe, " Fortuner");
                hrg_kendaraan = 480000;
            }
            else if (tipe_kendaraan == 2)
            {
                strcpy(pelanggan.tipe, " Avanza");
                hrg_kendaraan = 350000;
            }
            else if (tipe_kendaraan == 3)
            {
                strcpy(pelanggan.tipe, " Innova");
                hrg_kendaraan = 330000;
            }
            else
            {
                system("cls");
                cout << "\n\n\t\tTipe Mobil Tidak Tersedia. Silahkan Ulangi !!" << endl;
                goto kembali1;
            }
        }
        else if ((strcmp(pelanggan.kd_mobil, "DH") == 0) || (strcmp(pelanggan.kd_mobil, "dh") == 0))
        {
            strcpy(pelanggan.merk, " Daihatsu");
            system("cls");
        kembali2:
            cout << endl << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | Tipe Mobil | Harga |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | 1.Sigra    |Rp.320.000 |" << endl;
            cout << "\t\t | 2.Xenia    |Rp.340.000 |" << endl;
            cout << "\t\t | 3.Terios   |Rp.450.000 |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\n Pilih Tipe Mobil [1/2/3] : ";
            cin >> tipe_kendaraan;
            cout << endl;

            if (tipe_kendaraan == 1)
            {
                strcpy(pelanggan.tipe, " Sigra");
                hrg_kendaraan = 320000;
            }
            else if (tipe_kendaraan == 2)
            {
                strcpy(pelanggan.tipe, " Xenia");
                hrg_kendaraan = 340000;
            }
            else if (tipe_kendaraan == 3)
            {
                strcpy(pelanggan.tipe, " Terios");
                hrg_kendaraan = 450000;
            }
            else
            {
                system("cls");
                cout << "\n\n\t\tTipe Mobil Tidak Tersedia. Silahkan Ulangi !!" << endl;
                goto kembali2;
            }
        }
        else if ((strcmp(pelanggan.kd_mobil, "SZ") == 0) || (strcmp(pelanggan.kd_mobil, "sz") == 0))
        {
            strcpy(pelanggan.merk, " Suzuki");
            system("cls");
        kembali3:
            cout << endl << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | Tipe Mobil | Harga |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | 1.XL7      |Rp.370.000 |" << endl;
            cout << "\t\t | 2.Ignis    |Rp.300.000 |" << endl;
            cout << "\t\t | 3.Ertiga   |Rp.350.000 |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\n Pilih Tipe Mobil [1/2/3] : ";
            cin >> tipe_kendaraan;
            cout << endl;

            if (tipe_kendaraan == 1)
            {
                strcpy(pelanggan.tipe, " XL7");
                hrg_kendaraan = 370000;
            }
            else if (tipe_kendaraan == 2)
            {
                strcpy(pelanggan.tipe, " Ignis");
                hrg_kendaraan = 300000;
            }
            else if (tipe_kendaraan == 3)
            {
                strcpy(pelanggan.tipe, " Ertiga");
                hrg_kendaraan = 350000;
            }
            else
            {
                system("cls");
                cout << "\n\n\t\tTipe Mobil Tidak Tersedia. Silahkan Ulangi !!" << endl;
                goto kembali3;
            }
        }
        else
        {
            cout << "\n\n\t\tKode Mobil Tidak Tersedia. Silahkan Ulangi !!" << endl;
            goto mobil;
        }
        cout << " Lama Peminjaman (hari) : ";
        cin >> pelanggan.lama;

        pelanggan.tot_hrg = hrg_kendaraan * pelanggan.lama;
        pelanggan.disc = 0.05 * pelanggan.tot_hrg;
        pelanggan.totbay = pelanggan.tot_hrg - pelanggan.disc;

        // Menyimpan data pelanggan ke dalam file
        ofstream outfile;
        outfile.open("pelanggan.csv", ios::app);
        outfile << pelanggan.nama << ","
                << pelanggan.alamat << ","
                << pelanggan.no_ktp << ","
                << pelanggan.no_hp << ","
                << pelanggan.pembayaran << ","
                << pelanggan.merk << ","
                << pelanggan.tipe << ","
                << pelanggan.tot_hrg << ","
                << pelanggan.disc << ","
                << pelanggan.totbay << endl;
        outfile.close();

        system("cls");

        cout << "\n\n\t\t==============================================" << endl;
        cout << "\t\t\tCOBA COBA RENT" << endl;
        cout << "\t\t\tBekasi Aseli" << endl;
        cout << "\t\t==============================================" << endl << endl;
        cout << "\t\t Nama\t\t\t: " << pelanggan.nama << endl;
        cout << "\t\t Alamat\t\t\t: " << pelanggan.alamat << endl;
        cout << "\t\t Nomor KTP\t\t: " << pelanggan.no_ktp << endl;
        cout << "\t\t Nomor HP\t\t: " << pelanggan.no_hp << endl;
        cout << "\t\t Pembayaran\t\t: " << pelanggan.pembayaran << endl;
        cout << "\t\t Jenis Kendaraan\t:" << pelanggan.merk << pelanggan.tipe << endl;
        cout << "\t\t Harga Sewa\t\t: Rp." << hrg_kendaraan << "/hari" << endl;
        cout << "\t\t Lama Sewa\t\t: " << pelanggan.lama << " hari" << endl;
        cout << "\t\t==============================================" << endl;
        cout << "\t\t Total Harga\t\t: Rp." << pelanggan.tot_hrg << endl;
        cout << "\t\t Diskon (5%)\t\t: Rp." << pelanggan.disc << endl;
        cout << "\t\t----------------------------------------------" << endl;
        cout << "\t\t Total Bayar\t\t: Rp." << pelanggan.totbay << endl;
        cout << "\t\t==============================================" << endl;

        cout << "\n\n\t\tSewa Lagi ? (Y/T) : ";
        cin >> lagi;
        if (lagi == 'Y' || lagi == 'y')
            goto menu;
        else
            goto selesai;
    }
    else if (input == 2)
    {
        system("cls");
    motor:
        cout << endl << endl;
        cout << "\t\t==============================================" << endl;
        cout << "\t\t| PROGRAM RENTAL KENDARAAN | " << endl;
        cout << "\t\t| COBA COBA RENT | " << endl;
        cout << "\t\t| BEKASI ASELI | " << endl;
        cout << "\t\t==============================================" << endl;
        cout << endl << endl;
        cout << " Nama Penyewa\t\t: ";
        cin.ignore();
        cin.getline(pelanggan.nama, sizeof(pelanggan.nama));
        cout << " Alamat\t\t\t: ";
        cin.getline(pelanggan.alamat, sizeof(pelanggan.alamat));
        cout << " Nomor KTP\t\t: ";
        cin.getline(pelanggan.no_ktp, sizeof(pelanggan.no_ktp));
        cout << " Nomor HP\t\t: ";
        cin.getline(pelanggan.no_hp, sizeof(pelanggan.no_hp));
        cout << " Metode Pembayaran\t\t: ";
        cin.getline(pelanggan.pembayaran, sizeof(pelanggan.pembayaran));
        cout << "\n\t\t==============================" << endl;
        cout << " \t\t| MERK MOTOR | KODE MOTOR |" << endl;
        cout << " \t\t==============================" << endl;
        cout << " \t\t| 1. Honda   | HN        |" << endl;
        cout << " \t\t| 2. Yamaha  | YM        |" << endl;
        cout << " \t\t| 3. Suzuki  | SZ        |" << endl;
        cout << " \t\t==============================" << endl;
        cout << "\n Masukan Kode Motor [HN/YM/SZ] : ";
        cin >> pelanggan.kd_motor;

        if ((strcmp(pelanggan.kd_motor, "HN") == 0) || (strcmp(pelanggan.kd_motor, "hn") == 0))
        {
            strcpy(pelanggan.merk, " Honda");
            system("cls");
        kembali4:
            cout << endl << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | Tipe Motor    | Harga |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | 1.CBR150    |Rp.150.000 |" << endl;
            cout << "\t\t | 2.Vario     |Rp.80.000  |" << endl;
            cout << "\t\t | 3.PCX       |Rp.95.000  |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\n Pilih Tipe Motor [1/2/3] : ";
            cin >> tipe_motor;
            cout << endl;

            if (tipe_motor == 1)
            {
                strcpy(pelanggan.tipe, " CBR150");
                hrg_motor = 150000;
            }
            else if (tipe_motor == 2)
            {
                strcpy(pelanggan.tipe, " Vario");
                hrg_motor = 80000;
            }
            else if (tipe_motor == 3)
            {
                strcpy(pelanggan.tipe, " PCX");
                hrg_motor = 95000;
            }
            else
            {
                system("cls");
                cout << "\n\n\t\tTipe Motor Tidak Tersedia. Silahkan Ulangi !!" << endl;
                goto kembali4;
            }
        }
        else if ((strcmp(pelanggan.kd_motor, "YM") == 0) || (strcmp(pelanggan.kd_motor, "ym") == 0))
        {
            strcpy(pelanggan.merk, " Yamaha");
            system("cls");
        kembali5:
            cout << endl << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | Tipe Motor  | Harga |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | 1.R15     |Rp.150.000 |" << endl;
            cout << "\t\t | 2.Aerox   |Rp.100.000 |" << endl;
            cout << "\t\t | 3.Nmax    |Rp.90.000  |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\n Pilih Tipe Motor [1/2/3] : ";
            cin >> tipe_motor;
            cout << endl;

            if (tipe_motor == 1)
            {
                strcpy(pelanggan.tipe, " R15");
                hrg_motor = 150000;
            }
            else if (tipe_motor == 2)
            {
                strcpy(pelanggan.tipe, " Aerox");
                hrg_motor = 100000;
            }
            else if (tipe_motor == 3)
            {
                strcpy(pelanggan.tipe, " Nmax");
                hrg_motor = 90000;
            }
            else
            {
                system("cls");
                cout << "\n\n\t\tTipe Motor Tidak Tersedia. Silahkan Ulangi !!" << endl;
                goto kembali5;
            }
        }
        else if ((strcmp(pelanggan.kd_motor, "SZ") == 0) || (strcmp(pelanggan.kd_motor, "sz") == 0))
        {
            strcpy(pelanggan.merk, " Suzuki");
            system("cls");
        kembali6:
            cout << endl << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | Tipe Motor 	  | Harga |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\t\t | 1.GSX        |Rp.140.000 |" << endl;
            cout << "\t\t | 2.Address	|Rp.75.000  |" << endl;
            cout << "\t\t | 3.Burgman	|Rp.80.000  |" << endl;
            cout << "\t\t ============================" << endl;
            cout << "\n Pilih Tipe Motor [1/2/3] : ";
            cin >> tipe_motor;
            cout << endl;

            if (tipe_motor == 1)
            {
                strcpy(pelanggan.tipe, " GSX");
                hrg_motor = 140000;
            }
            else if (tipe_motor == 2)
            {
                strcpy(pelanggan.tipe, " Address");
                hrg_motor = 75000;
            }
            else if (tipe_motor == 3)
            {
                strcpy(pelanggan.tipe, " Burgman");
                hrg_motor = 80000;
            }
            else
            {
                system("cls");
                cout << "\n\n\t\tTipe Motor Tidak Tersedia. Silahkan Ulangi !!" << endl;
                goto kembali6;
            }
        }
        else
        {
            cout << "\n\n\t\tKode Motor Tidak Tersedia. Silahkan Ulangi !!" << endl;
            goto motor;
        }
        cout << " Lama Peminjaman (hari) : ";
        cin >> pelanggan.lama;

        pelanggan.tot_hrg = hrg_motor * pelanggan.lama;
        pelanggan.disc = 0.05 * pelanggan.tot_hrg;
        pelanggan.totbay = pelanggan.tot_hrg - pelanggan.disc;

        ofstream outfile;
        outfile.open("pelanggan.csv", ios::app);
        outfile << pelanggan.nama << ","
                << pelanggan.alamat << ","
                << pelanggan.no_ktp << ","
                << pelanggan.no_hp << ","
                << pelanggan.merk << ","
                << pelanggan.tipe << ","
                << pelanggan.tot_hrg << ","
                << pelanggan.disc << ","
                << pelanggan.totbay << endl;
        outfile.close();

        system("cls");

        cout << "\n\n\t\t==============================================" << endl;
        cout << "\t\t\tCOBA COBA RENT" << endl;
        cout << "\t\t\tBekasi Aseli" << endl;
        cout << "\t\t==============================================" << endl << endl;
        cout << "\t\t Nama\t\t\t: " << pelanggan.nama << endl;
        cout << "\t\t Alamat\t\t\t: " << pelanggan.alamat << endl;
        cout << "\t\t Nomor KTP\t\t: " << pelanggan.no_ktp << endl;
        cout << "\t\t Nomor HP\t\t: " << pelanggan.no_hp << endl;
        cout << "\t\t Pembayaran\t\t: " << pelanggan.pembayaran << endl;
        cout << "\t\t Jenis Kendaraan\t: " << pelanggan.merk << pelanggan.tipe << endl;
        cout << "\t\t Harga Sewa\t\t: Rp." << hrg_motor << "/hari" << endl;
        cout << "\t\t Lama Sewa\t\t: " << pelanggan.lama << " hari" << endl;
        cout << "\t\t==============================================" << endl;
        cout << "\t\t Total Harga\t\t: Rp." << pelanggan.tot_hrg << endl;
        cout << "\t\t Diskon (5%)\t\t: Rp." << pelanggan.disc << endl;
        cout << "\t\t----------------------------------------------" << endl;
        cout << "\t\t Total Bayar\t\t: Rp." << pelanggan.totbay << endl;
        cout << "\t\t==============================================" << endl;

        cout << "\n\n\t\tSewa Lagi ? (Y/T) : ";
        cin >> lagi;
        if (lagi == 'Y' || lagi == 'y')
            goto menu;
        else
            goto selesai;
    }
    else if (input == 3)
        {
        system("cls");
        cout << endl
             << endl;
        cout << "\t\t==============================================" << endl;
        cout << "\t\t| PROGRAM RENTAL KENDARAAN | " << endl;
        cout << "\t\t| COBA COBA RENT | " << endl;
        cout << "\t\t| BEKASI ASELI | " << endl;
        cout << "\t\t==============================================" << endl;
        cout << endl
             << endl;
        cout << " Berikut informasi tentang harga sewa kendaraan : " << endl
             << endl;
        cout << "\n\t========================================================" << endl;
        cout << " \t| MERK MOBIL | KODE MOBIL | TIPE MOBIL | HARGA     |" << endl;
        cout << "\t========================================================" << endl;
        cout << " \t|            |            | 1.Fortuner |Rp.480.000 |" << endl;
        cout << " \t| TOYOTA     | TY         | 2.Avanza   |Rp.350.000 |" << endl;
        cout << " \t|            |            | 3.Innova   |Rp.330.000 |" << endl;
        cout << " \t----------------------------------------------------------" << endl;
        cout << " \t|            |            | 1.Terios   |Rp.450.000 |" << endl;
        cout << " \t| DAIHATSU   | DH         | 2.Xenia    |Rp.340.000 |" << endl;
        cout << " \t|            |            | 3.Sigra    |Rp.320.000 |" << endl;
        cout << " \t----------------------------------------------------------" << endl;
        cout << " \t|            |            | 1.XL7      |Rp.370.000 |" << endl;
        cout << " \t| SUZUKI     | SZ         | 2.Ignis    |Rp.320.000 |" << endl;
        cout << " \t|            |            | 3.Ertiga   |Rp.350.000 |" << endl;
        cout << "\t========================================================" << endl;
                cout << "\n\t========================================================" << endl;
        cout << " \t| MERK MOTOR | KODE MOTOR | TIPE MOTOR |  HARGA    |" << endl;
        cout << "\t========================================================" << endl;
        cout << " \t|            |            | 1.NMAX     |Rp.90.000  |" << endl;
        cout << " \t| YAMAHA     | YM         | 2.AEROX    |Rp.100.000 |" << endl;
        cout << " \t|            |            | 3.R15      |Rp.150.000 |" << endl;
        cout << " \t----------------------------------------------------------" << endl;
        cout << " \t|            |            | 1.PCX      |Rp.95.000  |" << endl;
        cout << " \t| HONDA      | HD         | 2.VARIO    |Rp.80.000  |" << endl;
        cout << " \t|            |            | 3.CBR150   |Rp.150.000 |" << endl;
        cout << " \t----------------------------------------------------------" << endl;
        cout << " \t|            |            | 1.BURGMAN  |Rp.85.000  |" << endl;
        cout << " \t| SUZUKI     | SZ         | 2.ADDRESS  |Rp.75.000  |" << endl;
        cout << " \t|            |            | 3.GSX      |Rp.140.000 |" << endl;
        cout << "\t========================================================" << endl;
        cout << "\n\n Tekan [Enter] untuk kembali ke Menu Utama ";
        getch();
        goto menu;
    }
    else if (input == 4)
    {
    selesai:
        cout << endl << endl;
        cout << "\n\n\t\tTerima Kasih Telah Menggunakan Layanan Kami" << endl;
    }
    else
    {
        cout << "\n\n\t\t\tPilihan Tidak Tersedia. Silahkan Ulangi !!" << endl;
        goto menu;
    }

    return 0;
}
