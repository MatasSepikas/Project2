#include <string>
#include <vector>
#include <iostream>
#include <chrono>
using namespace std;
struct studentas
{
    string vardas;
    string pavarde;
    vector<int> namudarbai;
    int egzaminas;
    float galutinis;
};
double vidurkis(vector<int> namudarbai);
class studentasclass
{
private:
    string vardas;
    string pavarde;
    vector<int> namudarbai;
    int egzaminas;
    float galutinis;
public:
    studentasclass(string vardas, string pavarde, vector<int> namudarbai, int egzaminas)
    {
        this->vardas = vardas;
        this->pavarde = pavarde;
        this->namudarbai = namudarbai;
        this->egzaminas = egzaminas;
        this->galutinis = vidurkis(namudarbai) * 0.4 + 0.6 * egzaminas;
    }
    float returngalutinis() const
    {
        return galutinis;
    }
};

void dalijimass(vector<studentas> studentai);
void dalijimasc(vector<studentasclass> studentai);
void bandytisu100000();
void bandytisu1000000();