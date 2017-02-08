/*----------------------------------------------------------
*	CENTRO FEDERAL DE EDUCACAO TECNOLOGICA DE MINAS GERAIS
*	LABORATORIO DE ALGORITMOS E ESTRUTURAS DE DADOS II
*   TRABALHO PRATICO III  
*   1.1 CONJUNTOS DISJUNTOS: UNION FIND  
*-----------------------------------------------------------*/
#include "unionFind.hpp"

void UnionFind::makeSet(){
    for (int i=0; i<n; i++)
		pai[i] = i;
	memset(rank,0,sizeof(rank));
}
//Retorna o pai do vertice u; usando heuristica "PATH COMPRESSION"
int UnionFind::findSet(int u){
    if (u != pai[u] )
    	pai[u] = findSet(pai[u]);
    return pai[u];
}

//Operação da Uniao: junta Conjunto contendo u ao conjunto contendo v; usando heurística "UNION-BY-RANK"
void UnionFind::Union(int u,int v) {
    int x = findSet(u);
    int y = findSet(v);
	if(x == y)
		return;
    if(rank[x] >= rank[y]){
        pai[y] = x;
        if(rank[x] == rank[y])
    		rank[x]++;
    }
    else
        pai[x] = y;
}

void UnionFind::print(){
    cout << "Vetor pai : ";
    for (int i=0; i<n; i++)
		cout << pai[i] << " ";
	cout << endl;
	cout << "Vetor rank: ";
	for (int i=0; i<n; i++)
		cout << rank[i] << " ";
	cout << endl << endl;
}

int main(int argc, char *argv[]){
    UnionFind b;
    int u,v,w;
    scanf("%d%d",&n,&m);

    for (int i=0; i<m; i++) {
        scanf("%d%d%d",&u,&v,&w);
        G.push_back(make_pair(w,make_pair(u,v)));
    }

    b.makeSet();
    cout << endl;
    /* TESTE 1 */
    cout << "Vetores inicializados " << endl;
    b.print();
    cout << "Uniao (1,2) " << endl;
    b.Union(1,2);
	b.print();
	cout << "Uniao (5,6) " << endl;
	b.Union(5,6);
	b.print();
	cout << "Uniao (2,3) " << endl;
	b.Union(2,3);
	b.print();
	cout << "Uniao (1,6) " << endl;
	b.Union(1,6);
	b.print();
	cout << "Uniao (0,5) " << endl;
	b.Union(0,5);
	b.print();
	cout << "Uniao (4,6) " << endl;
	b.Union(4,3);
	b.print();
    cout << "Uniao (2,6) " << endl;
    b.Union(2,6);
	b.print();

	/* TESTE 2
	cout << "Vetores inicializados " << endl;
    b.print();
    cout << "Uniao (4,6) " << endl;
    b.Union(4,6);
	b.print();
	cout << "Uniao (2,3) " << endl;
	b.Union(2,3);
	b.print();
	cout << "Uniao (0,5) " << endl;
	b.Union(5,0);
	b.print();
	cout << "Uniao (6,3) " << endl;
	b.Union(6,3);
	b.print();
	cout << "Uniao (1,3) " << endl;
	b.Union(1,3);
	b.print();
	cout << "Uniao (0,1) " << endl;
	b.Union(0,1);
	b.print();
    cout << "Uniao (5,4) " << endl;
    b.Union(5,4);
	b.print();
	cout << "Uniao (0,2) " << endl;
    b.Union(0,2);
	b.print();
    */
    return 0;
}

