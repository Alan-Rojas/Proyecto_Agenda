#include <iostream>
#include <Objetivo.h>
using namespace std; 


class Recordatorio: public Tarea{           // Atributos: listas de 5, hay dos num pues uno es para Tarea, y con el otro trabaja Recordatorio. 
    private :
        time_t tiempoInicial[5];
        time_t tiempoFinal[5];   
        int numRecordatorio = 0;
        int numTarea = 5;  
    
    public :                                // Métodos con herencia; Recordatorio es una tarea. 
        Recordatorio(); 
        Recordatorio(time_t, time_t, string, time_t, int); 
        void setTI(time_t, int); 
        time_t getTI(int); 
        void setTF(time_t, int); 
        time_t getTF(int);
    
};

Recordatorio:: Recordatorio(): Tarea() {            // Constructor default
    tiempoInicial[0] = time(0);
    tiempoFinal[0] = time(0); 
}
Recordatorio :: Recordatorio (time_t tI, time_t tF, string d, time_t hr, int numTarea): Tarea(d, hr, numTarea) {        //Constructor con parámetros y herencia. 
    tiempoFinal[numRecordatorio] = tF; 
    tiempoInicial[numRecordatorio] = tI; 
    numTarea = numTarea + numRecordatorio; 
}
void Recordatorio :: setTI(time_t tI, int num) {        //Getters y setters
    tiempoInicial[num] = tI; 
}
time_t Recordatorio :: getTI(int num) {
    return tiempoInicial[num];
}
void Recordatorio :: setTF(time_t tF, int num) {
    tiempoFinal[num] = tF;
}
time_t Recordatorio :: getTF(int num) {
    return tiempoFinal[num];
}
