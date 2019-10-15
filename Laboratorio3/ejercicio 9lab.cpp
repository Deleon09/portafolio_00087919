#include <iostream>
#include <string>
using namespace std;

enum generos{masculino,femenino};

struct TPersonas{
    int carnet ;//dui
    string nombre;//titulo
    string apellido;
    int edad;//autor
    long numero;
    string correo;
    generos genero;
};
typedef struct TPersonas Persona;

Persona solicitarPersona(){
     Persona p;
    
    //---Solicitar carnet, nombre y Edad---
    cout << "carnet: "; cin >> p.carnet;
    cin.ignore();//Limpiando el buffer
    cout << "Nombre: "; getline(cin, p.nombre);
    cout << "Apellido: "; getline(cin, p.apellido);
    cout << "Edad: "; cin >> p.edad;
    cin.ignore();
    cout << "Numero de telefono: "; cin >> p.numero;
    cin.ignore();
    cout << "Correo electronico: "; getline(cin, p.correo);
    
    //---Solicitar genero de la Persona---
    bool continuar = true;
    do{
        char opcion = 0;
        cout << "Genero (m-Masculino|f-Femenino): ";
        cin >> opcion;
        switch(opcion){
            case 'm': p.genero = masculino;   continuar = false;
            break;
            case 'f': p.genero = femenino;   continuar = false;
            break;
        }
    }while(continuar);  
    //---Devolver persona ya poblado---
    return p;
}

void mostrarPersona(Persona p){
    cout << "carnet: " << p.carnet << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Apellido: " << p.apellido << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Numero de telefono: " << p.numero << endl;
    cout << "Correo electronico: " << p.correo << endl;
    
    cout << "Genero: ";
    switch(p.genero){
        case masculino: cout << "Masculino" << endl;
        break;
        case femenino: cout << "Femenino" << endl;
        break;
        cout<<"\n";
    }
    cout<<"\n";
}

struct TNodo{
    Persona dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Persona p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Persona p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void insertarDespuesDe(Persona p) {
    int uncarnet = 0;
    cout << "carnet de la persona: ";
    cin >> uncarnet;
    
    Nodo *s = pInicio;
    
    while(s != NULL && (s->dato).carnet != uncarnet)
        s = s->sig;
    if(s == NULL){
        cout << "La persona no existe" << endl;
        return;
    }
    
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s->sig;
    
    s->sig = nuevo;
    cout << "Persona agregada con exito" << endl;
}

void insertarAntesDe(Persona p) {
    int uncarnet = 0;
    cout << "carnet de la persona: ";
    cin >> uncarnet;
    
    Nodo *s = pInicio, *q = NULL;
    
    while(s != NULL && (s->dato).carnet != uncarnet){
        q = s;
        s = s->sig;
    }
    if(s == NULL){
        cout << "Persona no existe" << endl;
        return;
    }
    
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s;
    
    if(q == NULL)
        pInicio = nuevo;
    else
        q->sig = nuevo;
    cout << "Persona agregada con exito" << endl;
}

void agregarPersona(){
    Persona p = solicitarPersona();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\t3) Despues de\n\t4) Antes de"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);  continuar = false;
            break;
            case 2: insertarFinal(p);   continuar = false;
            break;
            case 3: insertarDespuesDe(p);   continuar = false;
            break;
            case 4: insertarAntesDe(p);   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarPersona(s->dato);
        s = s->sig;
    }
}

void eliminarPersona(){
    int uncarnet = 0;
    cout << "carnet de la persona a eliminar: ";
    cin >> uncarnet;
    
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && (p->dato).carnet != uncarnet){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Persona a eliminar no existe" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Persona eliminada con exito!" << endl;
}

bool buscarPersona() {
    int uncarnet = 0;
    cout << "carnet de la persona a buscar: ";
    cin >> uncarnet;
    
    Nodo *s = pInicio;

    while(s != NULL && (s->dato).carnet != uncarnet)
        s = s->sig;
    
    //Si s!=NULL entonces la persona SI se encuentra
    //Si s==NULL entonces la persona NO se encuentra
    return (s != NULL);
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Persona\n\t2) Ver Personas"
            << "\n\t3) Eliminar Persona\n\t4) Buscar Persona"
            << "\n\t5) Actualizar Datos\n\t6) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarPersona();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: cout << "Eliminando..." << endl;
                eliminarPersona();
            break;
            case 4: cout << "Buscando..." << endl;
                if(buscarPersona())
                    cout << "La persona SI se encuentra registrada" << endl;
                else
                    cout << "La persona NO se encuentra registrada" << endl;
                //cout << "La persona" << (buscarPersona() ? "SI" : "NO") << " se encuentra" << endl;
            break;
            case 6: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
