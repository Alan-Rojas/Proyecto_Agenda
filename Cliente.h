#include <iostream>
using namespace std; 

class Cliente {
    private :
        string nombre;  //Defieniendo Artibutos
        string ocupaccion; 
    
    public :            // Definiendo Métodos
        Cliente();
        Cliente(string, string);
        string importaDatos();  
        void setNombre(string); 
        string getNombre(); 
        void setOcupaccion(string); 
        string getOcupaccion(); 
        void muestraPerfil(); 

    
}; 
Cliente:: Cliente() {       // Constructor Default
    nombre = "None"; 
    ocupaccion = "None"; 
}
Cliente:: Cliente(string n, string o) {     // Constructor con parámetros
    nombre = n;
    ocupaccion = o;
}
string Cliente:: importaDatos() {           //Crea un perfil
    string perfil[2]; 
    perfil[0] = "Nombre: " + nombre;
    perfil[1] = "Ocupaccion: " + ocupaccion; 
}
void Cliente:: muestraPerfil() {            // MUestra al usuario el perfil
    string perfil[2];
    for (int i=0; i<2; i++) {
        cout<<perfil[i]<<endl; 
    }
}
void Cliente:: setNombre(string n) {    //Setters y getters
    nombre = n;
}
string Cliente:: getNombre() {
    return nombre;
}
void Cliente:: setOcupaccion(string o) {
    ocupaccion = o;
}
string Cliente:: getOcupaccion() {
    return ocupaccion; 
}