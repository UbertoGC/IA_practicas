#ifndef DBSCAN_H
#define DBSCAN_H
#include "punto.h"
#include <iostream>
#include <deque>
#include <map>
#include <cmath>
using namespace std;
float distancia(punto* a, punto* b){
    float suma = 0.0;
    for (int i = 0; i < a->dimensiones; i++){
        float dif = a->posiciones[i] - b->posiciones[i];
        suma += dif*dif;
    }
    return float(sqrt(suma));
}
deque<int> vecinos(punto* valores, int tamano,int centro,float rango){
    deque<int> resultado;
    for (int i = 0; i < tamano; i++){
        if(i != centro && distancia(&valores[i],&valores[centro]) <= rango){
            resultado.push_back(i);
        }
    }
    return resultado;
}
void DBSCAN(punto* valores, int tamano ,float e, int limite_vecinos){
    int estado[tamano]{0};
    map<int,int> no_visitados;
    for (int i = 0; i < tamano; i++){
        no_visitados[i] = i;
    }
    while(no_visitados.empty()){
        int i = no_visitados.begin();
        if(estado[i] != 0){
            deque<int> N_1 = Vecinos(valores,tamano,i,e);
            if(vecinos.size() < limite_vecinos){
                estado[i] = 2;
            }
            else{
                for (auto j:N_1){
                    if(estado[j] != 0){
                        deque<int>
                    }
                    if(estado[j] > 3){

                    }
                }
            }
        }
    } 
}
#endif