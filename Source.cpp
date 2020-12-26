#include "Header.h"
using namespace std;

double vidurkis(vector<int> namudarbai)
{
    int suma = 0;
    for (int i : namudarbai)
    {
        suma += i;
    }
    return suma / namudarbai.size();
}



vector<studentas> generavimas(int kiek, vector<studentasclass>& studentaiclass)
{
    vector<studentas> studentai;
    for (int i = 0; i < kiek; i++)
    {
        studentas temp;
        string vardas = "Vardas" + to_string(i + 1);
        string pavarde = "Pavarde" + to_string(i + 1);
        int egzaminas = egzaminas = rand() % 10 + 1;
        int ND1 = rand() % 10 + 1;
        int ND2 = rand() % 10 + 1;
        int ND3 = rand() % 10 + 1;
        int ND4 = rand() % 10 + 1;
        int ND5 = rand() % 10 + 1;
        vector<int> namudarbai;
        namudarbai.push_back(ND1);
        namudarbai.push_back(ND2);
        namudarbai.push_back(ND3);
        namudarbai.push_back(ND4);
        namudarbai.push_back(ND5);

        temp.vardas = vardas;
        temp.pavarde = pavarde;
        temp.namudarbai = namudarbai;
        temp.egzaminas = egzaminas;
        temp.galutinis = 0.4 * vidurkis(namudarbai) + 0.6 * temp.egzaminas;
        studentai.push_back(temp);

        studentasclass studClass(vardas, pavarde, namudarbai, egzaminas);
        studentaiclass.push_back(studClass);
    }
    return studentai;
}

void dalijimass(vector<studentas> studentai)
{
    int dydis = studentai.size();
    vector<studentas> tinginiai;
    vector<studentas> protingi;
    for (int i = 0; i < dydis; i++)
    {
        studentas stud = studentai[i];
        if (stud.galutinis < 5)
        {
            tinginiai.push_back(stud);
        }
        else
        {
            protingi.push_back(stud);
        }


    }
}
void dalijimasc(vector<studentasclass> studentai)
{
    int dydis = studentai.size();
    vector<studentasclass> tinginiai;
    vector<studentasclass> protingi;
    for (int i = 0; i < dydis; i++)
    {
        studentasclass stud = studentai[i];
        if (stud.returngalutinis() < 5)
        {
            tinginiai.push_back(stud);
        }
        else
        {
            protingi.push_back(stud);
        }


    }
}


void bandytisu100000()
{
    vector<studentas> studentai;
    vector<studentasclass> studentaiclass;
    studentai = generavimas(100000, studentaiclass);

    auto start = std::chrono::high_resolution_clock::now(); auto st = start;
    dalijimass(studentai);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start; // Skirtumas (s)
    std::cout << "100000 struct skirstymas uztruko: " << diff.count() << " s\n";

    auto start1 = std::chrono::high_resolution_clock::now(); auto st1 = start1;
    dalijimasc(studentaiclass);
    auto end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff1 = end1 - start1;
    std::cout << "100000 class skirstymas uztruko: " << diff1.count() << " s\n";
    cout << endl;
}
void bandytisu1000000()
{

    vector<studentas> studentai;
    vector<studentasclass> studentaiclass;
    studentai = generavimas(1000000, studentaiclass);

    auto start = std::chrono::high_resolution_clock::now(); auto st = start;
    dalijimass(studentai);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start; // Skirtumas (s)
    std::cout << "1000000 struct skirstymas uztruko: " << diff.count() << " s\n";

    auto start1 = std::chrono::high_resolution_clock::now(); auto st1 = start1;
    dalijimasc(studentaiclass);
    auto end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff1 = end1 - start1;
    std::cout << "1000000 class skirstymas uztruko: " << diff1.count() << " s\n";
    cout << endl;




}
