#include <iostream>
using namespace std;
int main(){
	const float segitiga=0.5;
	float alas;
	float tinggi;
	float panjang;
	float lebar;
	int pilihan;
	
	cout<<"1. hitung luas segitiga\n";
	cout<<"2. hitung luas persegi\n";
	cin>>pilihan;
	
	switch(pilihan){
		case 1:
			cout<<"masukan alas";
			cin>>alas;
			cout<<"masukan tinggi";
			cin>>tinggi;
			cout<<segitiga*(alas*tinggi);
			break;
		case 2:
			cout<<"masukan panjang";
			cin>>alas;
			cout<<"masukan lebar";
			cin>>tinggi;
			cout<<panjang*lebar;
			break;
		default:
			cout<<"pilihan salah";
	}
}
