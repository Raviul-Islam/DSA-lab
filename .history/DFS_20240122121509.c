#include <stdio.h>
#include <conio.h>
#define SIZE 10
#define FALSE 0
#define TRUE 1

typedef int adj_mat[SIZE][SIZE];
typedef struct

    graph_t
{

    int nodes[SIZE];

    int n;

    int *visited;
    adj_mat mat;

} graph;

*****Function Declaration Begin ********** /

    void DFS(graph *);

void visit(graph *, int); /**************Function Declaration End****.....*/

static int find = 0;
void main()

{

    ");

        getch();

    graph G;

    // clrscr();

printf("\n\t\t Program shows the traversal of graph using Depth First Search

printf("\n\t\t Enter number of nodes in the graph: "); scanf("%d",&G.n);

DFS(&G);

**** depth first searching *******.../

****** Function Definition begins.../

void DFS( graph *G)

1

int k,i,j;

for(k=1;k<=G->n;k++)

G->visited[k] = FALSE;

for(i=1;i<=G->n;i++)

1

for(j=1;j<=G->n;j++)

printf("\n Enter data of vertex %d for(%d,%d) :\n",i,i,j); printf("\n Enter 1 for adjacent vertex and 0 for otherwise: ");

scanf("%d",&G->mat[i][j]);
}
}

for (k = 1; k <= G->n; k++)

    if (!G->visited[k])

        visit(G, k);
}

{
    for (i = 1; i <= G->n; i++)

        printf("\n Adjacency matrix of the grpah is \n");

    for (k = 1; k < -G->n; k++)
    {

        printf("%d\t", G->mat[i][k]);
    }

    printf("\n");
}

i = 0;

printf("\n Traversal of a given graph is \n");

while (i < G->n)

{

    printf("%d\t", G->nodes[++i]);
}
}

/*********************Function Definition ends**************/

/*****************visiting graph ***********************/

/********** Function Definition begins***********/

void visit(graph G, int k)

{

    int j;

    G->visited[k] = TRUE;

    G->nodes[++find] = k;

    for (j = 1; j <= G->n; j++)

    {
    printf("\n Enter data of vertex %d for(%d,%d) :ln^{\prime\prime},i,j): printf("\n Enter I for adjacent vertex and 0 for otherwise: "); scanf("%d",&G->mat[i][j]);
    }

    for (k = 1; k <= G->n; k++)

        (!G->visited[k])

        {
            if
        }

    visit(G, k);

    printf("'n Adjacency matrix of the grpah is \n");

    for (i = 1; i < (j->n, i++)

                {
                    for (k = 1; k < -G->n; k++)

( printf("%d\t",G->mat[i][k]);
                } printf("\n");

    )

        i = 0;

    printf("\n Traversal of a given graph is \n");
    while (i < G->n)

    {
        printf("%d\t", G->nodes[++i]);
    }
}
/********** Function Definition ends **********/
/***visiting graph ******** /
         /*********Function Definition begins ********** / 
            void visit(graph * G, int k)

        int j;
        G->visited[k] = TRUE;
        G->nodes[++find] = k;
        for (j = 1; j <= G->n; j++)
        {
            if (G-> mat[k][j] == 1)
            {
                if (!G->visited[j])
                    visit(G, j); )
                    }
                    }
                    }