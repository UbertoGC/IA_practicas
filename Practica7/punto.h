#ifndef PUNTO_H
#define PUNTO_H
struct punto
{
    int dimensiones;
    float *posiciones;
    punto(int r,float *d){
        dimensiones = r;
        posiciones = new float[dimensiones];
        for (int i = 0; i < r; i++){
            posiciones[i]=d[i];
        }
    }
    ~punto(){
        delete[] posiciones;
    }
};
#endif