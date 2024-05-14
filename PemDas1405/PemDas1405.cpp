#include <iostream>
using namespace std;

class mahasiswa
{
	static int nim;
	int id;
	string nama;

	void setID();

	void printAll();
	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};