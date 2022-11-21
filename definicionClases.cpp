#include <iostream>
using namespace str; 

class Cliente {
    Private {
        str nombre; 
        str ocupaccion; 
    }
    Public {
        Cliente();
        str importaDatos(); 
        void creaPerfil(); 
        void setNombre(str); 
        str getNombre(); 
        void setOcupaccion(str); 
        str getOcupaccion(); 

    }
}; 

class Inciso {
    Private {
        str descripcion; 
        str horaRecordar; 
        Cliente cliente; 
    }
    Public {
        Inciso(); 
        Inciso(str); 
        void setDescripcion(str); 
        str getDescripcion(); 
        void setHoraRecordar(str); 
        str getHoraRecordar(); 
    }
}; 

class Objetivo {
    Private {
        str tipoObjetivo; 
        str verificadorHabito; 
        str rangoTiempo; 
        Inciso inciso;
    }
    Public {
        Objetivo(); 
        Objetivo(str); 
        void setTipoObjetivo(str); 
        str getTipoObjetivo(); 
        void setVerificadorHabito(str); 
        str getVerificadorHabito(); 
        void setRangoTiempo(str);
        str getRangoTiempo();  
    }
}; 

class Recordatorio {
    Private {
        str rangoT; 
        Inciso inciso; 
    }
    Public {
        Recordatorio(); 
        Recordatorio(str); 
        void setRangoT(str); 
        str getRangoT(); 
    }
}; 

class Agenda {
    Private {
        Inciso inciso; 
        Cliente cliente;
        str calendarioMeses[12]; 
        int calendarioDias[]; 
    }
    Public {
        Agenda(); 
        void despliegaCalendario(); 
        void recuerdaObjetivo(); 
        bool verificaHabito(); 
        void concluyeObjetivo(); 
        str statusObjetivo(); 
    }
}; 