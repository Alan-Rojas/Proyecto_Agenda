#include <iostream>
#include <Agenda.h>
using namespace std; 
//Alan Rojas López __ A01706146

int main() {
                                    //Declaración de variables
    string nombre, ocupaccion; 
    string opcionTarea; 
    string descripcion; 
    string tipoObjetivo; 
    string habito; 
    string opcion; 
    time_t horaRecordar; 
    time_t tInicial;
    time_t tFinal; 
    time_t tiempoInicial; 
    time_t tiempoFinal; 
    bool Cierto = true; 
    int numObj = 0; 
    int numRec = 5; 



    cout<<"Hola, bienvendido al prototipo de agenda."<<endl;
    cout<<"Ingresa tus datos para generar tu perfil. "<<endl; 
    cout<<"Nombre: "<<endl;
    cin>>nombre; 
    cout<<"Occupacion: "<<endl; 
    cin>>ocupaccion; 
    Cliente Cliente(nombre,ocupaccion); 
    class Cliente importaDatos(); 
    cout<<"Aquí está tu perfil: "<<endl; 
    class Cliente muestraPerfil();          //Hasta aquí se debe de haber creado y mostrado el perfil. 
    cout<<"¿Qué quieres crear? ¿Un Objetivo o un Recordatorio?"<<endl; 
    cin>>opcionTarea; 

    if (opcionTarea == "Objetivo") { // Creando primer objetivo
        cout<<"Bien, ahora ingresa una descripcion breve de lo que quieres lograr: "<<endl; 
        cin>>descripcion; 
        cout<<"Qué tipo de objetivo será? Semanal, Mensual, Anual"<<endl;
        cin>>tipoObjetivo; 
        cout<<"Con qué hábito vamos a medir el objetivo?"<<endl; 
        cin>>habito; 
        cout<<"A qué hora te debo recordar de este objetivo?"<<endl; 
        cin>>horaRecordar; 
        cout<<"Cuantos días quieres que dure este objetivo?"<<endl;
        cin>>tFinal;  
        Objetivo Objetivo(tipoObjetivo, habito, tFinal, descripcion, horaRecordar, numObj); 
        numObj ++; 
    }
    else if(opcionTarea == "Recordatorio") {        // Creando primer recordatorio
        cout<<"Bien, ahora ingresa una descripcion breve de lo que quieres lograr: "<<endl; 
        cin>>descripcion;
        cout<<"A qué hora te debo recordar?"<<endl; 
        cin>>horaRecordar;
        cout<<"Cúando empiezo a recordarte?"<<endl; 
        cin>>tiempoInicial; 
        cout<<"Cuándo dejo de recordarte?"<<endl; 
        cin>>tiempoFinal; 
        Recordatorio Recordatorio(tiempoInicial, tiempoFinal, descripcion, horaRecordar, numRec);
        numRec ++;
    }
    else {
        cout<<"Lo siento, no entendí. "<<endl; 
        cin>>opcionTarea;
    }
    while(Cierto) {                     // Menú
        cout<<"Ahora qué quieres hacer?"<<endl; 
        cout<<"1. Ver objetivos activos"<<endl; 
        cout<<"2. Crear nuevo Objetivo"<<endl; 
        cout<<"3. Crear nuevo Recordatorio"<<endl; 
        cout<<"4. Salir"<<endl;
        if (opcion == "1") {
            Agenda despliegaCalendario();       // Muestra los objetivos activos. 
        }
        else if (opcion == "2") {
            numObj ++;
            cout<<"Bien, ahora ingresa una descripcion breve de lo que quieres lograr: "<<endl; 
            cin>>descripcion; 
            cout<<"Qué tipo de objetivo será? Semanal, Mensual, Anual"<<endl;
            cin>>tipoObjetivo; 
            cout<<"Con qué hábito vamos a medir el objetivo?"<<endl; 
            cin>>habito; 
            cout<<"A qué hora te debo recordar de este objetivo?"<<endl; 
            cin>>horaRecordar; 
            cout<<"Cuantos días quieres que dure este objetivo?"<<endl;
            cin>>tFinal;  
            Objetivo Objetivo(tipoObjetivo, habito, tFinal, descripcion, horaRecordar, numObj);
        }
        else if (opcion == "3") {
            numRec ++;
            cout<<"Bien, ahora ingresa una descripcion breve de lo que quieres lograr: "<<endl; 
            cin>>descripcion;
            cout<<"A qué hora te debo recordar?"<<endl; 
            cin>>horaRecordar;
            cout<<"Cúando empiezo a recordarte?"<<endl; 
            cin>>tiempoInicial; 
            cout<<"Cuándo dejo de recordarte?"<<endl; 
            cin>>tiempoFinal; 
            Recordatorio Recordatorio(tiempoInicial, tiempoFinal, descripcion, horaRecordar, numRec);
        }
        else if (opcion == "4") {       //Sale del programa
            Cierto = false; 
        }
        else {
            cout<<"Lo siento, no entendí."<<endl; 
            cin>>opcion; 
        }
    }
     

    return 0; 
}
 




