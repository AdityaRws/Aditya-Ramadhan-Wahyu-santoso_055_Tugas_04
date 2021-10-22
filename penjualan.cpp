#include <iostream>
using namespace std;

int main(){
	
	int hargabarang=0,jumlah_brg,totaljumlahunit_brg=0,totalpotongan_hrg,diskon_hrg;
	char jenisbarang,yn;
	float totalhargaakhir;
	
	struct dataharga
	{
		float harga_brg[40],jumlahjenis_brg[40],totalhargajenis_brg[40];
	};
	dataharga hrg[45];
	
	awal :
	cout<<"[     Progam Menghitung Penjualan Barang   ]"<<endl;
	cout<<""<<endl;
	cout<<"\n";
	cout<<"KASIR PENJUALAN"<<endl;
	cout<<"\n";
	
	cout<<" Masukkan Jumlah Jenis Barang : "; cin>>jumlah_brg;
	
	cout<<"\n";
	
	for (int i=1;i<=jumlah_brg;i++)
	{
	
		cout<<"       << Jenis Barang ke "<<i<<" >>        "<<endl;
		cout<<""<<endl;
		cout<<" Harga Barang       : Rp. "; cin>>hrg[i].harga_brg[i];
		cout<<" Jumlah Barang Unit : "; cin>>hrg[i].jumlahjenis_brg[i];

		
		hrg[i].totalhargajenis_brg[i]=hrg[i].harga_brg[i]*hrg[i].jumlahjenis_brg[i];
		
		cout<<" Total Harga Barang : Rp. "<<hrg[i].totalhargajenis_brg[i]<<endl;

		cout<<"\n";
		
		hargabarang += hrg[i].harga_brg[i];
		totaljumlahunit_brg += hrg[i].jumlahjenis_brg[i];
	}
	
	totalhargaakhir=hargabarang;
	
	if (totalhargaakhir>=500000)
	{
		diskon_hrg=(totalhargaakhir*0.1);
	}
	else if (totalhargaakhir>200000&&totalhargaakhir>500000)
	{
		diskon_hrg=(totalhargaakhir*0.05);
	}
	else if (totalhargaakhir<=200000)
	{
		diskon_hrg=(totalhargaakhir*0);
	}
	
	totalpotongan_hrg=totalhargaakhir-diskon_hrg;
	
	cout<<"--------------------------------------------"<<endl;
	cout<<" Total Keseluruhan Barang      : Rp. "<<totalhargaakhir<<endl;
	cout<<" Total Jumlah Unit Barang      : "<<jumlah_brg<<endl;
	cout<<" Pemberian Diskon              : Rp. "<<diskon_hrg<<endl;
	cout<<" Total Setelah Potongan Diskon : Rp. "<<totalpotongan_hrg<<endl;
	cout<<"\n";
		
	return 0;
}
