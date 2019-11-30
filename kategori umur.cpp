#include <iostream>
using namespace std;
int main(){
	int umur;
	
	cout<<"masukan umur:";
	cin>>umur;
	
	if (umur>=0&&umur<=1){
		cout<<"kategori bayi";
	}else if (umur>1&&umur<=3){
	cout<<" kategori batita";

	}else if (umur>3&&umur<=5){
	cout<<"kategori balita";
	
	}else if (umur>5&&umur<=12){
	cout<<"kategori anak-anak";
	
	}else if (umur>12&&umur<=17){
	cout<<"kategori remaja";
	
	}else if (umur>17&&umur<=30){
	cout<<"kategori pemuda";
	
	}else if (umur>30&&umur<=60){
	cout<<"kategori dewasa";
	
	}else{
	cout<<"kategori lansia";
	}
}
