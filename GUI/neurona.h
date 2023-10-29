#ifndef NEURONA_H
#define NEURONA_H
#include"listaneuronas.h"

class ListaNeuronas;

class Neurona{
private:
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
    friend class ListaNeuronas;
public:
    Neurona(int, float, int, int, int, int, int);
    void print();
};

#endif // NEURONA_H
