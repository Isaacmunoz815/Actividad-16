#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "Computadora.h"
#include <vector>


class Laboratorio
{
    vector<Computadora> computadoras;
public:
    Laboratorio();
    void agregarComputadora(const Computadora &c);
    void mostrar();
    void respaldar();
    void respaldar_tabla();
    void recuperar();

    void insertar(const Computadora &c, size_t pos);
    size_t size();
    void inicializar(const Computadora &c, size_t n);
    void eliminar(size_t pos);
    void ordenar();
    Computadora* buscar(const Computadora &c);


    friend Laboratorio& operator <<(Laboratorio &l, const Computadora &c)
    {
        l.agregarComputadora(c);

        return l;
    }

};

#endif // LABORATORIO_H
