#include "Laboratorio.h"
#include <fstream>
#include <algorithm>

Laboratorio::Laboratorio()
{

}
void Laboratorio::agregarComputadora(const Computadora &c)
{
    computadoras.push_back(c);
}
void Laboratorio::mostrar()
{
     cout << left;
     cout <<setw(30) << "Procesador";
     cout <<setw(30) << "Tarjeta grafica";
     cout <<setw(10) << "HDD";
     cout <<setw(6) << "RAM";
     cout << endl;
     for(size_t i=0; i<computadoras.size(); i++){
        Computadora &c = computadoras[i];
        cout << c;
        //cout << "Procesador: " << c.getProcesador() << endl;
        //cout << "Tarjeta Grafica: " << c.getGraficos() << endl;
        //cout << "RAM: " << c.getRam() << " GB" <<endl;
        //cout << "HDD: " << c.getHdd() << " GB" <<endl;
        //cout << endl;
     }
}
void Laboratorio::respaldar_tabla()
{

    ofstream archivo("Computadoras_tablas.txt");
    if(archivo.is_open()){
        archivo<< left;
     archivo <<setw(30) << "Procesador";
     archivo<<setw(30) << "Tarjeta grafica";
     archivo <<setw(10) << "HDD";
     archivo <<setw(6) << "RAM";
     archivo << endl;
        for(size_t i=0; i<computadoras.size(); i++){
        Computadora &c = computadoras[i];
        archivo << c;
        }
    }
    archivo.close();
}
void Laboratorio::respaldar()
{

    ofstream archivo("Computadoras.txt");
    if(archivo.is_open()){
        for(size_t i=0; i<computadoras.size(); i++){
        Computadora &c = computadoras[i];
        archivo << c.getProcesador() << endl;
        archivo << c.getGraficos() << endl;
        archivo << c.getHdd() << endl;
        archivo << c.getRam() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){

ifstream archivo("Computadoras.txt");
if(archivo.is_open()){
    string temp;
    int hdd;
    int ram;
    Computadora c;

    while(true)
     {
    getline(archivo, temp);
    if(archivo.eof()){
        break;
    }
    c.setProcesador(temp);

    getline(archivo, temp);
    c.setGraficos(temp);

    getline(archivo, temp);
    ram = stoi(temp);
    c.setRam(ram);

    getline(archivo, temp);
    hdd = stoi(temp);
    c.setHdd(hdd);

    agregarComputadora(c);
    }
  }
  archivo.close();
}

void Laboratorio::insertar(const Computadora &p, size_t pos)
{
    computadoras.insert(computadoras.begin()+pos, p);
}

size_t Laboratorio::size()
{
    return computadoras.size();
}

void Laboratorio::inicializar(const Computadora &c, size_t n)
{
    computadoras = vector<Computadora>(n, c);
}

void Laboratorio::eliminar(size_t pos)
{
    computadoras.erase(computadoras.begin()+pos);
}

void Laboratorio::ordenar()
{
    sort(computadoras.begin(), computadoras.end());
}

Computadora* Laboratorio::buscar(const Computadora &c)
{
     //vector<Computadora>::iterator
     auto it= find(computadoras.begin(), computadoras.end(), c);

     if(it == computadoras.end()){
         return nullptr;
     }
     else 
     {
         return &(*it);
     }
}