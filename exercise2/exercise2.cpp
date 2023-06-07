#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran : public bidangDatar {
public:
	string lingkaran;
	int jejari;

	Lingkaran(string plingkaran) :
		lingkaran(plingkaran) {
		cout << "Lingkaran dibuat " <<endl;
	}

	~Lingkaran() {
	}

	float Luas(int a) {
		return 3, 14 * a * a;
		cout << "Masukkan jejari : ";
		cin >> jejari;
		cout << "Luas Lingkaran = " << Luas(jejari);
	}

	float Keliling(int a) {
		return a * a;
		cin >> jejari;
		cout << "Keliling Lingkaran = " << Keliling(jejari);
	}
};

class Bujursangkar : public bidangDatar {
public: 
	string bujursangkar;
	int sisi;

	Bujursangkar(string pbujursangkar) :
		bujursangkar(pbujursangkar) {
		cout << "Bujursangkar dibuat " << endl;
	}

	~Bujursangkar() {
	}

	float Luas(int a) {
		return a * a;
		cout << "Measukkan sisi : ";
		cin >> sisi;
		cout << "Luas Bujursangkar = " << Luas(sisi);
	}

	float Keliling(int a) {
		return 4 * a;
		cin >> sisi;
		cout << "Keliling Bujursangkar = " << Keliling(sisi);
	}
};
int main() {	bidangDatar* bd;	bd = new Lingkaran();	return 0;}