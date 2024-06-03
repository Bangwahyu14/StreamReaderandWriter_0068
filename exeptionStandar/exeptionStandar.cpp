#include <iostream>
#include <exeption>
//untuk objek exeption di gunakan
#include <array>
//untuk objek array yang di gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 8,4,2 };
		//pesan array integer 3 elemen
		cout << data.at(5) << endl;
	}
	catch (exception& e) {
		//penangkap menggunakan objeck exception
		cout << e.what() << endl;
		/*akan diekesekusi karna array data hanyta memiliki 3 elemen*/
	}
}
