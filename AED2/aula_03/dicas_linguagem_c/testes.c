#include <stdbool.h> /* variáveis bool assumem valores "true" ou "false"*/
#include <stdio.h>

#define MAXNUMVERTICES 100
#define AN -1 /*aresta nula, ou seja, valor que representa ausência de aresta*/

// Grafo não ponderado
typedef struct {
    bool mat[MAXNUMVERTICES][MAXNUMVERTICES];
    int numVertices;
    int numArestas;
} Grafo;

bool inicializaGrafo(Grafo* grafo, int nv){
    if (nv > MAXNUMVERTICES){
        fprintf(stderr, "ERRO na chamada de incilizaGrafo: Numero de vertices maior que o maximo permitido de %d,\n", MAXNUMVERTICES);
        return false;
    }
    if(nv <= 0){
        fprintf(stderr, "ERRO na chamada de inicializaGrafo: Numero de vertices deve ser positivo.\n");
        return false;
    }

    grafo->numVertices = nv;
    grafo->numArestas = 0;

    for(int i = 0; i < grafo->numVertices; i++){
        for(int j = 0; j < grafo->numVertices; j++){
            grafo->mat[i][j] = AN;
        }
    }
    return true;
}


int main(){
    printf("Teste");
    return 0;
}