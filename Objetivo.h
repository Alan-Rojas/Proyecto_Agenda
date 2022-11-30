#include <iostream>
#include <Tarea.h>
using namespace std; 

class Objetivo: public Tarea {      // Atributos, con herencia pues Objetivo es una Tarea. 
    private :
        string tipoObjetivo[5]; 
        string habito[5]; 
        time_t Tfinal[5]; 
        time_t Tinicial[5];
        int numObjetivo = 0; 
    
    public :                        // Métodos 
        Objetivo();                 
        Objetivo(string, string, time_t, string, time_t, int); 
        void setTipoObjetivo(string, int); 
        string getTipoObjetivo(int); 
        void sethabito(string, int); 
        string gethabito(int); 
        void setTfinal(time_t, int);
        time_t getTfinal(int);  
        time_t getTiempoInicial(int); 
    
};

Objetivo:: Objetivo(): Tarea() {        // Constructor Default
    tipoObjetivo[0]= "None"; 
    habito[0] = "None"; 
    Tfinal[0] = time(0); 
    Tinicial[0] = time(0);
}
Objetivo:: Objetivo(string tO, string vH, time_t rT, string d, time_t hr, int numObjetivo): Tarea(d, hr, numObjetivo)   // Constructor con parámetros y herencia. 
{
    tipoObjetivo[numObjetivo]= tO; 
    habito[numObjetivo] = vH; 
    Tfinal[numObjetivo] = rT; 
    Tinicial[numObjetivo] = time(0);
    numObjetivo ++; 
}
void Objetivo:: setTipoObjetivo(string tO, int num) {       // Setters y getters 
    tipoObjetivo[num]= tO; 
 
}
string Objetivo:: getTipoObjetivo(int num) {
    return tipoObjetivo[num];
}
void Objetivo:: setTfinal(time_t rT, int num) {
    Tfinal[num]= rT;
}
time_t Objetivo:: getTfinal(int num) {
    return Tfinal[num]; 
}
time_t Objetivo:: getTiempoInicial(int num) {
    return Tinicial[num]; 
}
