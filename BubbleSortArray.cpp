#include <iostream>
using namespace std;

int arr[20];  // Deklarasi array a dengan ukuran 20
int n;        // Deklarasi variabel n untuk menyimpan banyaknya elemen

void input() {   // procedur untuk input
	while (true) {
		cout << "Masukan banyaknya elemen pada array: "; // output ke layar
		cin >> n;     // input dari pengguna
		if (n <= 20)  // Jika n kurang dari atau sama dengan 20
			break;    // keluar dari loop
		else {        // jika n lebih dari 20
			cout << "nArray dapat mempunyai maksimal 20 elemen. \n";   // output ke layar
		}
	}
	cout << endl;                           //output baris kosong
	cout << "===================" << endl;  //output ke layar
	cout << "masukan elemen array" << endl; //output ke layar
	cout << "===================" << endl;  //output ke layar

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << "; ";
		cin >> arr[i];
	}
}

void BubbleShortArray() { // procedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1; // step 1

	