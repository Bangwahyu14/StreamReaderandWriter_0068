#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		//trow 0.5; //melemparkan sebuah interger maka
		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan di eksekusi
		cout << "pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/*jika selain interger maka block ini akan dieksekusi*/
		cout << "default pengecualian diexsekusi" << endl;
	}
}