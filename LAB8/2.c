#include<stdio.h>
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
