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
	void cetakdata();
	void isiData();
};
//definisi member function
angka::angka(int i) { //contructor
	panjang = i;
	arr = new int[1];
	isiData();
}
