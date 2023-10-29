#include "listaneuronas.h"

ListaNeuronas::ListaNeuronas()
{

}

void ListaNeuronas::agregar_inicio(Neurona neurona){
    neuronas.insert(0, neurona);
}

void ListaNeuronas::agregar_final(Neurona neurona){
    neuronas.push_back(neurona);
}

int ListaNeuronas::cant_neuronas(){
    return neuronas.size();
}

int ListaNeuronas::getid(int i){
    return neuronas[i].id;
}

float ListaNeuronas::getvoltaje(int i){
    return neuronas[i].voltaje;
}

int ListaNeuronas::getx(int i){
    return neuronas[i].posicion_x;
}

int ListaNeuronas::gety(int i){
    return neuronas[i].posicion_y;
}

int ListaNeuronas::getred(int i){
    return neuronas[i].red;
}

int ListaNeuronas::getgreen(int i){
    return neuronas[i].green;
}

int ListaNeuronas::getblue(int i){
    return neuronas[i].blue;
}

void ListaNeuronas::quickSort(int by){
    recursivo(0, neuronas.size() -1, by);
}

void ListaNeuronas::recursivo(int menor, int mayor, int by){
    if(menor <mayor){
        int pivote =particion(menor, mayor, by);
        recursivo(menor, pivote -1, by);
        recursivo(pivote +1, mayor, by);
    }
}

int ListaNeuronas::particion(int menor, int mayor, int by){
    float pivote;
    if(by)
        pivote =neuronas[mayor].id;
    else
        pivote =neuronas[mayor].voltaje;
    int i =menor -1;
    for(int j =menor; j <mayor; j ++){
        if(by){
            if(comparar(neuronas[j].id, pivote)){
                i ++;
                std::swap(neuronas[i], neuronas[j]);
            }
        }
        else{
            if(comparar(neuronas[j].voltaje, pivote)){
                i ++;
                std::swap(neuronas[i], neuronas[j]);
            }
        }
    }
    std::swap(neuronas[i +1], neuronas[mayor]);
    return i +1;
}

bool ListaNeuronas::comparar(float a, float b){
    return a <b;
}
