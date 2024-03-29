#include <stdbool.h> /* variáveis bool assumem valores "true" ou "false"*/

#define MAXNUMVERTICES 100
#define AN (-1) /*aresta nula, ou seja, valor que representa ausência de aresta*/

typedef int Peso;
typedef struct {
    Peso mat[MAXNUMVERTICES][MAXNUMVERTICES];
    int numVertices;
    int numArestas;
} Grafo;

bool inicializaGrafo(Grafo* grafo, int nv);








