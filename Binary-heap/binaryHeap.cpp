/*----------------------------------------------------------
* CENTRO FEDERAL DE EDUCACAO TECNOLOGICA DE MINAS GERAIS
* LABORATORIO DE ALGORITMOS E ESTRUTURAS DE DADOS II  
* HEAP BINARIO  
*-----------------------------------------------------------*/
#include "binaryHeap.hpp"

Heap::Heap(int cap){
	size = 0;
	capacity = cap;
    harr = new int[cap];
}
 
void Heap::insert(int n){
    if (size == capacity){
    	cout << "\n Overflow \n";
        return;
    }
	size++;
    int i = size - 1;
    harr[i] = n;
	while (i != 0 && harr[pai(i)] > harr[i]){
		swap(&harr[i], &harr[pai(i)]);
        i = pai(i);
    }
}
 
void Heap::decrease(int i, int new_val){
	harr[i] = new_val;
    while (i != 0 && harr[pai(i)] > harr[i]){
    	swap(&harr[i], &harr[pai(i)]);
    	i = pai(i);
    }
}

int Heap::extractMin(){
    if (size <= 0)
    	return INT_MAX;
    if (size == 1){
    	size--;
        return harr[0];
    }
 
    int root = harr[0];
    harr[0] = harr[size-1];
    size--;
    MinHeapify(0);
 
    return root;
}
 
void Heap::remove(int i){
    decrease(i, INT_MIN);
    extractMin();
}
 
void Heap::MinHeapify(int i){
	int l = left(i);
    int r = right(i);
    int menor = i;
    if (l < size && harr[l] < harr[i])
    	menor = l;
    if (r < size && harr[r] < harr[menor])
        menor = r;
    if (menor != i){
        swap(&harr[i], &harr[menor]);
        MinHeapify(menor);
    }
}
 
void Heap::swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
int main()
{
    Heap h(11);
    h.insert(3);
    h.insert(2);
    h.remove(1);
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);
	cout << endl << endl;
    cout << "Remove o elemento mínimo do Heap: ";
	cout << h.extractMin() << endl;
    cout << "Elemento raiz do Heap: "; 
	cout << h.getMin() << endl << endl ;
	cout << "Diminui o valor de chave. " << endl << endl;
    h.decrease(2, 1);
    cout << "Novo elemento raiz do Heap: ";
	cout << h.getMin() << endl << endl;

    return 0;
}




