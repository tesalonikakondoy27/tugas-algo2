#include <iostream>
using namespace std;
int main(){
	
	int item;
	int uang;
	int harga_sepatu = 30000;
	int harga_tas = 35000;
	int harga_celana = 40000;
	int harga_dompet = 25000;
	int harga_kemeja = 30000;
	
	cout<<"\n 1.sepatu \n"<<"2.tas \n"<<"3.celana \n"<<"4.dompet \n"<<"5.kemeja \n";
	cin>>item;
	
	switch(item){
		case 1 :
			cout<<"sepatu = "<<harga_sepatu;
			cout<<"\n mendapatkan potongan harga 20000 \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-(harga_sepatu-20000);
			break;
		case 2 :
			cout<<"tas = "<<harga_tas;
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_tas;
			break;
		case 3 :
			cout<<"celana = "<<harga_celana;
			cout<<"\n mendapatkan diskon 50% \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-(harga_sepatu*50/100);
			break;
		case 4 :
			cout<<"dompet = "<<harga_dompet;
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_dompet;
			break;
		case 5 :
			cout<<"kemeja = "<<harga_kemeja;
			cout<<"\n mendapatkan diskon 30% + 20% \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_kemeja * 30/100 - 30000;
			break;
		default :
			cout<<"pilihan item salah";
	}
}
