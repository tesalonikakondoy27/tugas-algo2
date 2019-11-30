#include <iostream>
using namespace std;

int main (){
	int barang;
	int uang;
	int jumlah_barang;
	int harga_sepatu = 25000;
	int harga_tas = 30000;
	int harga_celana = 20000;
	int harga_dompet = 25000;
	int harga_kemeja = 35000;
	
	cout<<"daftar barang \n"<<"1.sepatu = "<<harga_sepatu;
	cout<<"\n 2.tas = "<<harga_tas;
	cout<<"\n 3.celana = "<<harga_celana;
	cout<<"\n 4.dompet = "<<harga_dompet;
	cout<<"\n 5.kemeja = "<<harga_kemeja<<"\n";
	cin>>barang;
	
	switch (barang){
		case 1 :
			cout<<"sepatu = "<<harga_sepatu;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total yang harus dibayar = "<<harga_sepatu * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_sepatu * jumlah_barang);
			break;
		case 2 :
			cout<<"tas = "<<harga_tas;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total yang harus dibayar = "<<harga_tas * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_tas * jumlah_barang);
			break;
		case 3 :
			cout<<"celana = "<<harga_celana;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total yang harus dibayar = "<<harga_celana * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_celana * jumlah_barang);
			break;
		case 4 :
			cout<<"dompet = "<<harga_dompet;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total yang harus dibayar = "<<harga_dompet * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_dompet * jumlah_barang);
			break;
		case 5 :
			cout<<"kemeja = "<<harga_kemeja;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total yang harus dibayar = "<<harga_kemeja * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_kemeja * jumlah_barang);
			break;
		default :
			cout<<"stok habis";
	}
	
}
