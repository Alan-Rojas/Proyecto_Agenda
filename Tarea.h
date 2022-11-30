#include <iostream>
#include <Cliente.h>
#include <ctime>
using namespace std; 

class Tarea {
    private :                   // Atributos: son listas de 10 pues el programa sólo podrá recibir 5 objetivos y 5 recordatorios a la vez. 
        string descripcion[10]; 
        time_t horaRecordar[10]; 
    
    public :                            // Métodos 
        Tarea ();
        Tarea(string, time_t, int); 
        void setDescripcion(string, int); 
        string getDescripcion(int); 
        void setHoraRecordar(time_t, int); 
        time_t getHoraRecordar(int); 
    
};
Tarea :: Tarea() {                      // Constructor Default
    descripcion[0] = "None"; 
    horaRecordar[0] = time(0);
}

Tarea:: Tarea(string d, time_t hr, int num) {       // Contructor con parámetros
    descripcion[num] = d; 
    horaRecordar[num] = hr;
}
void Tarea:: setDescripcion(string d, int num) {    // Setters y getters
    descripcion[num] = d; 
}
string Tarea:: getDescripcion(int num) {
    return descripcion[num]; 
}
void Tarea:: setHoraRecordar(time_t hr, int n) {
    horaRecordar[n] = hr; 
}
time_t Tarea:: getHoraRecordar(int n) {
    return horaRecordar[n]; 
}
