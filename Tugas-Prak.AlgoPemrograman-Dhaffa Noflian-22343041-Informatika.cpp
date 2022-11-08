/*
do-while digunakan ketika ingin melakukan perulangan 
if else digunakan ketika ingin melakukan percabangan/ menyeleksi suatu kondisi yang diinginkan
*/
#include <iostream>
using namespace std;

int main (){
	cout << "Nama\t: Dhaffa Noflian" << endl;
	cout << "Nim\t: 22343041" << endl;
	cout << "Makul\t: Prak.Algo Pemrograman" << endl;
	cout << "Tugas\t: Membuat Program menggunakan do-while dan if-else" << endl;
	cout << "Program : Kasir Sederhana"  << endl << endl << endl;
	int pil, jum_bar, harga, total, bayar, diskon;
	string item;
	
	cout << "                           BetaMart                             " << endl;
	cout << "                   Universitas Negeri Padang                    " << endl;
	cout << "================================================================" << endl;
	cout << "================================================================" << endl;
	cout << "                         Daftar Menu                            " << endl << endl;
	cout << "1. Permen Kopiko : Rp.  5.000  " << " 6. Minyak Wangi AXE : Rp. 35.000" << endl;
	cout << "2. Doritos       : Rp. 10.000  " << " 7. Es Magnum        : Rp. 20.000" << endl;
	cout << "3. Qtela         : Rp.  9.000  " << " 8. Susu Milo        : Rp. 45.000" << endl;
	cout << "4. Ultra Milk    : Rp.  6.000  " << " 9. Kinder Joy       : Rp. 11.000" << endl;
	cout << "5. Fiesta Nugget : Rp. 35.000  " << " 10. Selesai                     " << endl;
	cout << "================================================================" << endl << endl;
	
	do{
		cout << "Masukkan Pilihan : ";
		cin >> pil;
		
		switch(pil){
			case 1 :
				item = "Permen Kopiko";
				harga = 5000;
				cout << "Jumlah barang    : ";
				cin >> jum_bar;
				total += harga * jum_bar;
				cout << jum_bar << " " << item << " = Rp. " << harga * jum_bar << endl << endl;
				break;
			case 2 :
				item = "Doritos";
				harga = 10000;
				cout << "Jumlah barang    : ";
				cin >> jum_bar;
				total += harga * jum_bar;
				cout << jum_bar << " " << item << " = Rp. " << harga * jum_bar << endl << endl;
				break;
			case 3 :
				item = "Qtela";
				harga = 9000;
				cout << "Jumlah barang    : ";
				cin >> jum_bar;
				total += harga * jum_bar;
				cout << jum_bar << " " << item << " = Rp. " << harga * jum_bar << endl << endl;
				break;
			case 4 :
				item = "Ultra Milk";
				harga = 6000;
				cout << "Jumlah barang    : ";
				cin >> jum_bar;
				total += harga * jum_bar;
				cout << jum_bar << " " << item << " = Rp. " << harga * jum_bar << endl << endl;
				break;
			case 5 :
				item = "Fiesta Nugget";
				harga = 35000;
				cout << "Jumlah barang    : ";
				cin >> jum_bar;
				total += harga * jum_bar;
				cout << jum_bar << " " << item << " = Rp. " << harga * jum_bar << endl << endl;
				break;
			case 6 :
				item = "Minyak Wangi AXE";
				harga = 35000;
				cout << "Jumlah barang    : ";
				cin >> jum_bar;
				total += harga * jum_bar;
				cout << jum_bar << " " << item << " = Rp. " << harga * jum_bar << endl << endl;
				break;
			case 7 :
				item = "Es Magnum";
				harga = 20000;
				cout << "Jumlah barang    : ";
				cin >> jum_bar;
				total += harga * jum_bar;
				cout << jum_bar << " " << item << " = Rp. " << harga * jum_bar << endl << endl;
				break;
			case 8 :
				item = "Susu Milo";
				harga = 45000;
				cout << "Jumlah barang    : ";
				cin >> jum_bar;
				total += harga * jum_bar;
				cout << jum_bar << " " << item << " = Rp. " << harga * jum_bar << endl << endl;
				break;
			case 9 :
				item = "Kinder Joy";
				harga = 11000;
				cout << "Jumlah barang    : ";
				cin >> jum_bar;
				total += harga * jum_bar;
				cout << jum_bar << " " << item << " = Rp. " << harga * jum_bar << endl << endl;
				break;
			case 10 :
				cout << endl << endl;
				cout << "==============================================================" << endl;
				cout << "Jumlah Bayar : Rp. " << total << endl;
				
				if(total >= 100000){
					diskon = 0.06 * total;
				} else if(total >= 50000){
					diskon = 0.04 * total;
				} else if(total <= 25000){
					diskon = 0.02 * total;
				} else {
					diskon = 0;
				}
				cout << "Diskon       : Rp. " << diskon << endl;
				cout << "Total Bayar  : Rp. " << total - diskon << endl;
				cout << "Bayar        : Rp. ";
				cin >> bayar;
				cout << "Kembalian    : Rp. " << (bayar - (total - diskon)) << endl << endl;
				break;	
			default	:
				cout << "Masukkan pilihan yang benar !!" << endl << endl;
				break;
		}		
	} while(pil != 10);	
	cout << "Terima Kasih Sudah Belanja" << endl;
}
