#include <iostream>
#include <string>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //constructor
	~angka(); //destructor
	void cetakData();
	void isiData();
};
//definisi member function
angka::angka(int i) { //contructor
	panjang = i;
	arr = new int[1];
	isiData();
}

angka::~angka() {//destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData() {
	for (int i = 1; i <= panjang; i++) {
		cout << 1 << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << "=";
		cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3);
	angka* ptrBelajarcpp = new angka(5);
	delete ptrBelajarcpp;

	return 0;
}