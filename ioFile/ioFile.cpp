#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//membuka file dalam mode menulis
	ofstream outfile;
	// menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memassukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	// selesai dalam menulis sekararang tutup filenya
	outfile.close();

	//Membuka file dalam mode membaca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open("Namafile.txt");

	cout << endl << ">= membuka dan membaca file " << endl;
	// jika file ada maka
	if (infile.is_open())
	{
		// melakukan setiap baris
		while (getline(infile, baris))
		{
			// dan tampilkan disini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai
		infile.close();
	}
	//jika tidak di temukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
} 