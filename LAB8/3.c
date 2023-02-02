#include<stdio.h>
#inlcude<stdlib.h>
int graph[100][100];
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
    int x;
    scanf("%d",&x);
    if(x==1){
      creategraph();
    }
    else if(x==2){
        displaygraph();
    }
    else if(x==3){
        addedge();
    }
    else if(x==4){
        addvertex();
    }
    else if(x==5){
        deletevartex();
    }



    }
}
void creategraph(){
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

void displaygraph()
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
void addedge(){
    printf("Enter endpoints: ");
    int u,v;
    scanf("%d%d",&u,&v);
    if(u<=nodes && v<=nodes){
        graph[u][v]=1;
        graph[v][u]=1;
    }
    edges++;
}
void addvertex()
{
    printf("Enter the new vertex: ");
    int u;
    scanf("%d",&u);
    nodes++;
    edges++;
}
void deletevartex()
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
        printf("Dont exist.\n");
    }
    nodes--;
}
