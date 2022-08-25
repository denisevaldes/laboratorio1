#include"ListaEstudiante.h"

using namespace std;

int main(){    
    ListaEstudiantes lista;

    ///
    Estudiante p("Estudiante 1", 20);
    NodoEstudiante *nuevo= new NodoEstudiante(p);
    lista.insertarNodo(nuevo);
   
    ///
    Estudiante q("Estudiante 2", 30);
    NodoEstudiante *nuevo2= new NodoEstudiante(q);
    lista.insertarNodo(nuevo2);
    
    Estudiante n("Estudiante 3", 18);
    NodoEstudiante *nuevo3= new NodoEstudiante(n);
    lista.insertarPrimero(nuevo3);

    lista.mostrarLista();

    bool res = lista.buscarEstudiante("Estudiante 4");

    if (res)
        cout << "Existe!\n" << endl;
    else
        cout << "No Existe!\n" << endl;
    cout << "--------\n" << endl;

    lista.quitarUltimo();
    lista.mostrarLista();
    cout << "--------\n" << endl;

    cout << "-- quitar primero ----" << endl;
    lista.quitarPrimero();
    lista.mostrarLista();
    cout << "--------\n" << endl;

    cout << "-- quitar primero ----" << endl;
    lista.quitarPrimero();
    lista.mostrarLista();
    cout << "--------\n" << endl;

    return 0;
}