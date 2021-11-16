#include <iostream>
#include <string>

using namespace std;

int main() {
	string nama, status;
	char gol_pegawai;
	long A=3000000, B=3500000, C=4000000;
	const int harga_beras = 10000;
	const char* kawin = "K";
	const char* jomblo = "BK";
	int jum_anak, tunj_is, gaji_pokok, status2, tunj_beras, gaji, gaji_istri, gaji_anak;
	float tunj_anak;
	
	cout<<"==============================================================================="<<endl;
	cout<<"================ Penghitung Gaji Pegawai PT. Patmi Dosen Alpro ================"<<endl;
	cout<<"===============================================================================\n\n"<<endl;
	cout<<"Masukkan nama pegawai : ";
	getline(cin, nama);
	cout<<"Status \n(K : Kawin BK : Belum Kawin) :";
	cin>>status;
	if (status == kawin) {
		tunj_is=15;
		status2=1;
		cout<<"Masukkan golongan pegawai :";
		cin>>gol_pegawai;
		cout<<"Masukkan jumlah anak pegawai :";
		cin>>jum_anak;
		if (jum_anak>=2) {
			tunj_anak=0.1;
		} else if (jum_anak<1) {
			tunj_anak=0;
		} else{
			tunj_anak=0.05;
		}
		status2=status2+jum_anak;
	} else if(status == jomblo) {
		tunj_is=0;
		status2=0;
		tunj_anak=0;
		jum_anak=0;
		cout<<"Masukkan golongan pegawai :";
		cin>>gol_pegawai;
	} else {
		tunj_is=0;
		status2=0;
		tunj_anak=0;
		cout<<"Kode anda salah"<<endl;
		status2=0;
	}
	

	switch (gol_pegawai) {
		case 'A':
			gaji_pokok=A;
			gaji_istri=A*tunj_is/100;
			gaji_anak=A*tunj_anak;
			tunj_beras=status2*harga_beras;
			gaji=A+gaji_istri+gaji_anak+tunj_beras;
			break;
		case 'B':
			gaji_pokok=B;
			gaji_istri=B*tunj_is/100;
			gaji_anak=B*tunj_anak;
			tunj_beras=status2*harga_beras;
			gaji=B+gaji_istri+gaji_anak+tunj_beras;
			break;
		case 'C':
			gaji_pokok=C;
			gaji_istri=C*tunj_is/100;
			gaji_anak=C*tunj_anak;
			tunj_beras=status2*harga_beras;
			gaji=C+gaji_istri+gaji_anak+tunj_beras;
			break;
		default:
			cout<<"Input yang anda masukkan salah!";
			break;
	}
	
	cout<<"\n\n";
	cout<<"Pegawai bernama : "<<nama<<endl;
	cout<<"Gaji pokok      : Rp. "<<gaji_pokok<<endl;
	cout<<"Tunjangan anak  : Rp. "<<gaji_anak<<endl;
	cout<<"Tunjangan istri : Rp. "<<gaji_istri<<endl;
	cout<<"Tunjangan beras : Rp. "<<tunj_beras<<endl;
	cout<<"Gaji Bersih     : Rp. "<<gaji;
	
}
