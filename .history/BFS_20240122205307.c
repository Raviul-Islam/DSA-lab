#include <stdio.h>
#include <conio.h>
#define SIZE 10
#define FALSE 0
#define TRUE 1
typedef int adj_mat[SIZE][SIZE];
int front = 1, rear = 1;
int q[SIZE];
typedef struct graph_t
{
    int nodes : int *visited;
    adj_mat mat;
} graph;
.............Function Declaration Begin ********** / void BFS(graph);
void add queue(int[], int);
int delete queue();
............ Function Declaration End *****...../
    void main()
{
}
graph G;
clrscr();
printf("\n\t\t Program shows Breath First Search in a graph ");
printf("\n\t\t Enter number of nodes in the graph: ");
scanf("%d", &G.nodes);
BFS(&G);
getch();
breadth first searching ********** / ... Function Definition begins ********** / void BFS(graph *G) int k,
    i, j;
for (k = 1; k < -G->nodes; k++)
    G->visited[k] = FALSE;
for (i = 1; i <= G->nodes; i++)
{
    for (j = 1; j < -G->nodes : j++)
} )
( for(k=1;k<=G->nodes;k++)
printf("\n Enter data of vertex %d for(%d,%d): ",i,i,j);
printf("\n Enter I for adjacent vertex and 0 otehrwise ");
scanf("%d",&G->mat[i][j]);
if (!G->visited[k])
(
add_queue(q,k);
do
k= delete_queue(q);
G->visited[k] = TRUE;
for(j=1;j<=G->nodes;j++)
if(G->mat[k][j]=0)
continue;
if (!G->visited[j])
(
Gvisited[j] = TRUE;
add_queue(q, j);
}
}
}
while (front !-rear)
    ;
}
}
printf("\n Adjacency matrix of a graph is :\n");
for (i = 1; i <= G->nodes; i++)
{
    for (k = 1; k < -G->nodes; k++)
        printf("%d\t", G->mat[i][k]);
}
printf("\n");
}
i = 0;
printf("\n Traversal of a given graph is \n");
while (i < G->nodes)