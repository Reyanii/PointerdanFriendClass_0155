#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string nama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setId(int pid);
    void displayAll(orang &a);
};