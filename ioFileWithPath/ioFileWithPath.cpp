#include <fstream>
#include <iostream>
#include <string> 
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File : ";
	cin >> NamaFile;

	// membuka file dalam mode menulis.
	ofstream outfile;
	// menunjuk ke sbuah nama file
	outfile.open(NamaFile + ".txt", ios::out);


	cout << ">= Menulis file,\'q\' untuk keluar" << endl;

	//unlimited loop untuk menlis
	while (true) {
		cout << "-";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//lookup akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;

		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;

	//menunjukkan ke sbuah file
	infile.open(NamaFile + ".txt, ios::in");

	cout << endl << ">Membuka dan Membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini 
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai 
		infile.close();
	}
	//jika tidak di temukan file maka akan menampilkan ini
	else cout << "unable to open";
	return 0;
} 
