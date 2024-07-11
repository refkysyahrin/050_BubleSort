#include <iostream>
using namespace std;

int arr[20];  // Deklarasi array a dengan ukuran 20
int n;        // Deklarasi variabel n untuk menyimpan banyaknya elemen

void input() {
    // procedur untuk input
        while (true) {
		cout << "Masukan banyaknya elemen pada array: "; // output ke layar
		cin >> n;     // input dari pengguna
		if (n <= 20)  // Jika n kurang dari atau sama dengan 20
			break;    // keluar dari loop
		else {        // jika n lebih dari 20
			cout << "nArray dapat mempunyai maksimal 20 elemen. \n";   // output ke layar
		}
    }
}
