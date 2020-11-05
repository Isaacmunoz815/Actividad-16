#include <iostream>
#include "Laboratorio.h"
using namespace std;

int main (){
    Laboratorio l;
    string op;

    while (true)
    {
        cout << "..........ADMINISTRADOR DE COMPUTADOR POR HARDWARE............";
        cout << endl << endl;
        cout << "1) Agregar Computadora" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "5) Insertar" << endl;
        cout << "6) Inicializar" << endl;
        cout << "7) Eliminar" << endl;
        cout << "8) Ordenar" << endl;
        cout << "9) Buscar" << endl;
        cout << "0) Salir" << endl;
        cout << endl << endl;
        cout << "Opcion: ";
        getline(cin, op);

        if(op == "1")
        {   
            system("CLS");
            Computadora c;
            cin>>c;
            l.agregarComputadora(c);
            cin.ignore();

            system ("PAUSE");
            system("CLS");
        }
        else if (op == "2")
        {   
            system("CLS");
            l.mostrar();

            system ("PAUSE");
            system("CLS");
        }
        else if(op == "3")
        {   
            system("CLS");
            l.respaldar();

            system ("PAUSE");
            system("CLS");
        }
        else if(op == "4")
        {
            system("CLS");
            l.recuperar();

            system ("PAUSE");
            system("CLS");
        }
        else if(op == "5")
        {   
            system("CLS");
            Computadora c;
            cin>>c;

            size_t pos;
            cout << "posicion: ";
            cin>>pos; cin.ignore();

            if(pos >= l.size())
            {
                cout << "Posición no valida" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else 
            {
                l.insertar(c, pos);
                system ("PAUSE");
                system("CLS");
            }
        }
        else if(op == "6")
        {   
            system("CLS");
            Computadora c;
            cin>>c;

            size_t n;
            
            cout << "n: ";
            cin>> n; cin.ignore();

            l.inicializar(c, n);
            system ("PAUSE");
            system("CLS");

        }
        else if(op == "7")
        {   
            system("CLS");
            size_t pos;
            cout << "posicion: ";
            cin>>pos; cin.ignore();

            if(pos >= l.size())
            {
                cout << "Posición no valida" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else 
            {
                l.eliminar(pos);
                system ("PAUSE");
                system("CLS");
            }
        }
        else if(op == "8")
        {   
            system("CLS");
            l.ordenar();
            system ("PAUSE");
            system("CLS");
        }
        else if(op == "9")
        {   
            system("CLS");
            Computadora c;
            cin>>c; cin.ignore();

            Computadora *ptr = l.buscar(c);

            if(ptr == nullptr)
            {
                cout << "No encontrado" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else 
            {
                cout << *ptr << endl;
                system ("PAUSE");
                system("CLS");
            }
        }
        else if(op == "0")
        {   
            break;
        }
        
    }

    return 0;
}