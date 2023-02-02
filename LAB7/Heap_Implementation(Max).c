#include<stdio.h>
#define capacity 100
int heap[capacity];
int size=0;
//void insert(int item);
int main()
{
    while(1)
    {
        printf("--------MAX HEAP---------\n");
        printf("1. Insert.\n");
        printf("2. Print Heap.\n");
        printf("3. Extract Max\n");
        printf("4. EXtract Min\n");
        printf("5. Break\n");
        int n;
        scanf("%d",&n);
        if(n==1){
                int x;
        scanf("%d",&x);
            insert(x);
        }
        else if(n==2)
        {
            printHeap();
        }
        else if(n==3){
            deleteMax();
        }
        else if(n==4){
            deleteMin();
        }
        else if(n==5){
            break;
        }
    }
}
void insert(int item)
{
    if(size==capacity)
    {
        printf("Overloaded.\n");
    }
    else{
        int parent=(size-1)/2;
        heap[size]=item;
        int i=size;
        while(i!=0 && heap[parent]<heap[i]){
            int b=heap[i];
            heap[i]=heap[parent];
            heap[parent]=b;
            i=(i-1)/2;
            parent=(i-1)/2;
        }
        size++;
    }
}
void printHeap()
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",heap[i]);
    }
    printf("\n");
}
void deleteMax(){
    if(size!=0){
        printf("Extracted Value: %d\n",heap[0]);
        heap[0]=heap[size-1];
        size--;
        ReheapDown(0,size);
    }

}

void ReheapDown(int position,int lastposition)
{
    int left=2*position+1;
    int right=2*position+2;
    int largest=position;
    if(left<=lastposition && heap[largest]<heap[left]){
        largest=left;
    }
    if(right<=lastposition && heap[largest]<heap[right]){
        largest=right;
    }

    if(largest!=position)
    {
        int swap=heap[largest];
        heap[largest]=heap[position];
        heap[position]=swap;
        ReheapDown(largest,lastposition);
    }
}
void deleteMin(){
    if(size!=0){
        printf("Extracted Value: %d\n",heap[0]);
        heap[0]=heap[size-1];
        size--;
        ReheapDown(0,size);
    }

}

