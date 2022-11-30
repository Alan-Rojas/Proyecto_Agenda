#include <iostream>
#include <Recordatorio.h>
#include <ctime>
using namespace std; 

class Agenda {                      // Atributos con composición 
    private :
        Tarea descripcion; 
        Tarea horaRecordar;
        Recordatorio tiempoInicial; 
        Recordatorio tiempoFinal;
        Objetivo tipoObjetivo; 
        Objetivo habito; 
        Objetivo tFinal;  
        Objetivo tInicial; 
        string status;
        time_t Tahora; 
        double diferenciaT = difftime(Tahora, tFinal.getTfinal(0));
    
    public :                        // Métodos
        Agenda(); 
        void despliegaCalendario(); 
        void recuerdaObjetivo(); 
        bool verificaHabito(int); 
        void concluyeObjetivo(); 
        void despliegaRecordatorio(); 
        string statusObjetivo(bool); 
    
}; 

Agenda:: Agenda() {                 // Constructor Default
    status = "None"; 
    Tahora = time(0); 
}
void Agenda:: despliegaCalendario() 
{
    
        cout<<"Estos son tus objetivos pendientes: "<<endl; 
        for (int i=0; i<5; i++) {
            if (diferenciaT < 0) {
                cout<<"Descripción: "<<descripcion.getDescripcion(i)<<endl;
                cout<<"Expiración "<<tFinal.getTfinal(i)<<endl; 
            }
            else {
                cout<<"No hay objetivos pendientes."<<endl; 
            }
        }
}

bool Agenda:: verificaHabito(int i) {
    bool opcion;
    if (Tahora == horaRecordar.getHoraRecordar(i)) {
        cout<<"Recuerda contestar con true o false. "<<endl;
        cout<<"Ya completaste el hábito a cumplir?"<<endl; 
        cout<<habito.gethabito(i)<<endl;
        cin>>opcion;
    }
    return opcion; 
}

string Agenda:: statusObjetivo(bool logra) {  
    if (logra) {
        status = "completado. ";
        return status; 
    }
    else {
        status = "No completado. ";
        return status;
    }
}

void Agenda:: recuerdaObjetivo() {

    char* dt = ctime(&Tahora);
    for (int i=0; i<5; i++) {
        if (horaRecordar.getHoraRecordar(i) == Tahora) {
            cout<<"Tipo de objetivo: "<<tipoObjetivo.getTipoObjetivo(i)<<endl;
            cout<<"Descripcion: "<<descripcion.getDescripcion(i)<<endl; 
            cout<<"Vence el:  "<<tFinal.getTfinal(i)<<endl; 
            cout<<"Hoy estamos a: "<<dt<<endl; 
            bool a = verificaHabito(i); 
            cout<<statusObjetivo(a)<<endl; 
        }
    }
}

void Agenda:: concluyeObjetivo() {
    for (int i=0; i<5; i++) {
        if (tInicial.getTiempoInicial(i) + tFinal.getTfinal(i) >= Tahora) {
        cout<<"El objetivo: "<<descripcion.getDescripcion(i)<<endl; 
        cout<<"Ha concluido. "<<endl; 
        cout<<status<<endl;
        }
    }
}

void Agenda:: despliegaRecordatorio() {
    for (int i = 5; i<10; i++) {
        if (Tahora == horaRecordar.getHoraRecordar(i)) {
        cout<<"Descripcion: "<<descripcion.getDescripcion(i)<<endl; 
        cout<<"Inicio: "<<tiempoInicial.getTI(i)<<endl; 
        cout<<"Final: "<<tiempoFinal.getTF(i)<<endl; 
        }
    } 
}


