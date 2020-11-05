#include "Computadora.h"

Computadora::Computadora(){}
Computadora::Computadora(
    const string &procesador,
    const string &graficos,
    int ram,
    int hdd)

    {this->procesador = procesador;
     this->graficos = graficos;
     this->hdd = hdd;
     this->ram = ram;}

    void Computadora::setProcesador(const string &v)
    {procesador = v;}
    string Computadora::getProcesador(){
    return procesador;
    }

    void Computadora::setGraficos(const string &v)
    {graficos = v;}
    string Computadora::getGraficos(){
    return graficos;
    }


    void Computadora::setHdd(int v){
    hdd = v;
    }
    int Computadora::getHdd(){
    return hdd;
    }

    void Computadora::setRam(int v){
    ram = v;}
    int Computadora::getRam(){
    return ram;
    }

