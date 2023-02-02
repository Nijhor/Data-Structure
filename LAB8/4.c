#include<stdio.h>
#include<stdlib.h>
int graph[50][50];
int nodes;
int edges;
int main()
{
    while(1){
            printf("1. Create \n");
            printf("2. Display \n");
            printf("3. Add new edge\n");
            printf("4. Add new vertex\n");
            printf("5. Delete vertex\n");
            printf("5. BFT traversal\n");
    int x;
    scanf("%d",&x);
    if(x==1){
      createGraph();
    }
    else if(x==2){
        displayGraph();
    }
    else if(x==3){
        addEdge();
    }
    else if(x==4){
        addVertex();
    }
    else if(x==5){
        deleteVartex();
    }



    }
}
void createGraph(){
printf("Enter number of nodes: ");
    scanf("%d",&nodes);

    printf("Enter number of edges: ");
    scanf("%d",&edges);
    int i,j;
    for(i=1; i<=edges; i++){
        int u,v;
        scanf("%d%d",&u,&v);
        graph[u][v]=1;
        graph[v][u]=1;
    }
}

void displayGraph()
{
    int i,j;
    printf("Number of Nodes %d\n",nodes);
    printf("Number of Edges %d\n\n",edges);
    for(i=1; i<=nodes; i++){
        for(j=1; j<=nodes; j++){
            printf("%d  ",graph[i][j]);
        }
        printf("\n");
    }
}
void addEdge(){
    printf("Enter endpoints: ");
    int u,v;
    scanf("%d%d",&u,&v);
    if(u<=nodes && v<=nodes){
        graph[u][v]=1;
        graph[v][u]=1;
    }
    edges++;
}
void addVertex()
{
    printf("Enter the new vertex: ");
    int u;
    scanf("%d",&u);
    nodes++;
    edges++;
}
void deleteVartex()
{
    printf("Enter vartex: ");
    int u,i,j;
    scanf("%d",&u);
    if(u<=nodes){
      while (u <= nodes) {
            for (i = 0; i <=nodes; ++i) {
                graph[i][u] = graph[i][u + 1];
            }

            for (i = 0; i <=nodes; ++i) {
                graph[u][i] = graph[u + 1][i];
            }
            u++;
        }
    }
    else{
        printf("Doesn't exists.\n");
    }
    nodes--;
}
