#include <iostream>
#include <string>
using namespace std;

int main() {

struct BUKU {
	string Judul_Buku, pengarang;
	int TahunT, Harga;
	};
	
	BUKU Data_MK;
	
	Data_MK.Judul_Buku = "daffa si pemberani";
	Data_MK.pengarang = "zekicen";
	Data_MK.TahunT = 2009;
	Data_MK.Harga = 400000;
	cout<<endl;
	cout<<endl;
	cout << "Judul Buku		= " << Data_MK.Judul_Buku << endl;
	cout << "pengarang		= " << Data_MK.pengarang << endl;
	cout << "Tahun Terbit		= " << Data_MK.TahunT << endl;
	cout << "harga			= " << Data_MK.Harga << endl; 
	cin.get(); }