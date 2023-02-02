#include<stdio.h>
int main()
{
    int graph[50][50];
    printf("Enter number of nodes: ");
    int nodes;
    scanf("%d",&nodes);

    printf("Enter number of edges: ");
    int edges;
    scanf("%d",&edges);
    int i,j;
    for(i=1; i<=edges; i++){
        int u,v;
        scanf("%d%d",&u,&v);
        graph[u][v]=1;
        graph[v][u]=1;
    }
    for(i=1; i<=nodes; i++){
        for(j=1; j<=nodes; j++){
            printf("%d  ",graph[i][j]);
        }
        printf("\n");
    }
}
