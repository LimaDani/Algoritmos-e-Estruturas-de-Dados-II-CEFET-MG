/*----------------------------------------------------------
*	CENTRO FEDERAL DE EDUCACAO TECNOLOGICA DE MINAS GERAIS
*	ALUNA: DANIELE DE SOUZA LIMA
*	LABORATORIO DE ALGORITMOS E ESTRUTURAS DE DADOS II
*   TRABALHO PRATICO III  
*   1.2 HEAP BINARIO  
*-----------------------------------------------------------*/
#ifndef BINARYHEAP_H
#define BINARYHEAP_H
#include<climits>
#include <bits/stdc++.h>
using namespace std;

class Heap
{
    int *harr;
    int capacity; 
    int size;
	void swap(int *x, int *y); 
public:

    Heap(int capacity);

    void MinHeapify(int );

    int pai(int i) { return (i-1)/2; }
 
    int left(int i) { return (2*i + 1); }
 
    int right(int i) { return (2*i + 2); }
 
    int extractMin();
 
    void decrease(int i, int new_val);

    int getMin(){ return harr[0]; }

    void remove(int i);

    void insert(int k);

    void heapsort( );
};
#endif
