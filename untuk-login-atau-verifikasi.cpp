#include <iostream>
#include <string>

using namespace std;

struct DataPengajuan {
    string nomorKTP;
    string namaLengkap;
    string nomorTelepon;
    string alamatEmail;
    string kotaDomisili;
    int kodePos;
    bool sudahMenikah;
    int jumlahAnak;
    int jumlahIstri;
    string linkFile; 
};

bool dataLengkap(const DataPengajuan& data) {
    if (data.sudahMenikah) {
        return !data.nomorKTP.empty() && !data.namaLengkap.empty() && !data.nomorTelepon.empty() &&
               !data.alamatEmail.empty() && !data.kotaDomisili.empty() && data.kodePos > 0 && data.jumlahAnak >= 0 &&
               !data.linkFile.empty();
    } else {
        return !data.nomorKTP.empty() && !data.namaLengkap.empty() && !data.nomorTelepon.empty() &&
               !data.alamatEmail.empty() && !data.kotaDomisili.empty() && data.kodePos > 0 &&
               !data.linkFile.empty();
    }
}

void prosesPengajuan(const DataPengajuan& data) {
    if (dataLengkap(data)) {
        cout << "Pengajuan kredit untuk " << data.namaLengkap << " telah diverifikasi." << endl;
    
    } else {
        cout << "Data pengajuan tidak lengkap. Pengajuan kredit tidak dapat diproses." << endl;
    }
}

int main() {
    DataPengajuan pengajuan;

    cout << "Masukkan nomor KTP      : ";
    getline(cin, pengajuan.nomorKTP);

    cout << "Masukkan nama lengkap   : ";
    getline(cin, pengajuan.namaLengkap);

    cout << "Masukkan nomor telepon  : ";
    getline(cin, pengajuan.nomorTelepon);

    cout << "Masukkan alamat email   : ";
    getline(cin, pengajuan.alamatEmail);

    cout << "Masukkan kota domisili  : ";
    getline(cin, pengajuan.kotaDomisili);

    cout << "Masukkan kode pos       : ";
    cin >> pengajuan.kodePos;

    cout << "Apakah sudah menikah? (0 untuk tidak, 1 untuk ya): ";
    cin >> pengajuan.sudahMenikah;

    cin.ignore(); 
    
	if (pengajuan.sudahMenikah) {
    cout << "Masukkan jumlah Istri      : ";
    cin >> pengajuan.jumlahIstri;
	}
    if (pengajuan.sudahMenikah) {
        cout << "Masukkan jumlah anak   : ";
        cin >> pengajuan.jumlahAnak;
    }

    cout << "Masukkan link folder drive yang isinya berupa foto selfie KTP, foto kartu keluarga, foto slip gaji 3 bulan terakhir, dan foto surat nikah : ";
    cin.ignore(); 
    getline(cin, pengajuan.linkFile);

	system("cls");
    
    cout << "DATA PENGAJUAN KREDIT" << endl;
    cout << "Nomor KTP      : " << pengajuan.nomorKTP << endl;
    cout << "Nama Lengkap   : " << pengajuan.namaLengkap << endl;
    cout << "Nomor Telepon  : " << pengajuan.nomorTelepon << endl;
    cout << "Alamat Email   : " << pengajuan.alamatEmail << endl;
    cout << "Kota Domisili  : " << pengajuan.kotaDomisili << endl;
    cout << "Kode Pos       : " << pengajuan.kodePos << endl;
    cout << "Sudah Menikah  : " << (pengajuan.sudahMenikah ? "Ya" : "Tidak") << endl;
    if (pengajuan.sudahMenikah) {
        cout << "Jumlah Anak    : " << pengajuan.jumlahAnak << endl;
    }
    cout << "Link Folder Drive  : " << pengajuan.linkFile << endl;

   

    prosesPengajuan(pengajuan);

    return 0;
}

