#include<iostream>
using namespace std;

class Joko;
class Lia;
class Giga;

class Joko {
private:
	string pengarang;
	string nama;
public:
	void inputdata() {
		cout << "Masukkan Pengarang";
		cin >> pengarang;
		cout << "Masukkan Nama";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nPengarang : " << pengarang << endl;
		cout << "Nama : " << nama << endl;
	}
};

	class Lia {
	private:
		string pengarang;
		string nama;
	public:
		void inputdata() {
			cout << "Masukkan Pengarang";
			cin >> pengarang;
			cout << "Masukkan Nama";
			cin >> nama;
		}
		void tampildata() {
			cout << "\nPengarang : " << pengarang << endl;
			cout << "Nama : " << nama << endl;
		}
	};

	class Giga {
	private:
		string pengarang;
		string nama;
	public:
		void inputdata() {
			cout << "Masukkan Pengarang";
			cin >> pengarang;
			cout << "Masukkan Nama";
			cin >> nama;
		}
		void tampildata() {
			cout << "\nPengarang : " << pengarang << endl;
			cout << "Nama : " << nama << endl;
		}

	};


	class Buku {
	private:
		string kode;
		string nama;

	public:
		void InputBuku();
		void TampilBuku();
	};

	void Buku::InputBuku() {
		cout << "\nMasukkan Kode Buku : ";
		cin >> kode;
		cout << "Masukkan Nama : ";
		cin >> nama;
	}


	


