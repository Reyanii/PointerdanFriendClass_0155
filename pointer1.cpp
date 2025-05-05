#include <iostream>
using namespace;

class Dosen {
    public:
    string nama;
    void tampilNama(){
        cout << "namanya adalah" << nama << endl;
    }

};








Dosen &dsref = ds;
dsref.nama = "Joko";
cout << "alamat memori = " << &dsref << endl;
dsref.tampilNama();

Dosen *pds = &ds;
pds->nama = "reza";
cout << "Alamat memori = " << pds << endl;
pds->tampilNama;

int a = 5;
int b 3;
int *c = &a;
*c = 9;
cout << endl;
cout << a << endl;

cout << "Alamat memori a = " << &a << endl;
cout << "Alamat memori c = " << c ,, endl;
cout << "cetak c = " << *c << endl;
