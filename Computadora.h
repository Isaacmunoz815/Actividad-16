#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED
#include <iostream>
#include <iomanip>

using namespace std;

class Computadora
{
    string procesador;
    string graficos;
    int ram;
    int hdd;

public:
    Computadora();
    Computadora(
        const string &Procesador,
        const string &graficos,
        int hdd,
        int ram);

    void setProcesador(const string &v);
    string getProcesador();

    void setGraficos(const string &v);
    string getGraficos();

    void setHdd(int v);
    int getHdd();

    void setRam(int v);
    int getRam();

    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
    out << left;
    out << setw(30) << c.procesador;
    out << setw(30) <<c.graficos;
    out << setw(10) <<c.hdd;
    out << setw(6) <<c.ram;
    out << endl;

    return out;
    }

    friend istream& operator>>(istream &in, Computadora &c)
    {
    //string temp;
    //float ram;
    //float hdd;

    cout <<"Procesador: ";
    getline(cin, c.procesador);

    cout <<"Tarjeta grafica: ";
    getline(cin, c.graficos);

    cout <<"RAM: ";
    cin>>c.ram;

    cout <<"HDD: ";
    cin>>c.hdd;

    return in;
    }

    bool operator==(const Computadora& c)
    {
        return procesador == c.procesador;
    }
    bool operator==(const Computadora& c) const
    {
        return procesador == c.procesador;
    }
    bool operator<(const Computadora& c) const
    {
        return procesador < c.procesador;
    }
};

#endif // COMPUTADORA_H_INCLUDED
