// 1. pada algorithma bubble sort kita dapat membandingkan serta menukar elemen elemen dengan cara mengurutkan array dari terkecil - terbesar
// 2. pada algorithma shell sort kita dapat membandingkan serta menukar elemen elemen dengan cara apply insertion sort untuk menggeser elemen ke posisi yang benar
// 3. algorithma yang dipilih adalah insertion sort karena lebih efisien dan sudah tertata


#include <iostream>
using namespace std;

int arr[67];
int n;

void input() {

	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 67)
			break; 
		else {
			cout << "\nArray dapat mempunyai maksimal 67 elemen.\n";

		}
	}
	cout << endl;
	cout << "======" << endl;
	cout << "Naufal" << endl;
	cout << "======" << endl;


	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];


	}
	
}