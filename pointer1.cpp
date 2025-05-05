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
dsref.nama = ""