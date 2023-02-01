#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *end=NULL;
struct queue{
    struct queue *front,*rear;
};

int main(){
    while(1){
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Print Queue\n");
        printf("4. Exit.\n");
        int n;
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("The queue is: ");
            printQueue();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong Choice\n");
            break;


        }

    }
}
void enqueue(){
    struct node *t;
    t=start;
    t=(struct node*)malloc(sizeof(struct node));
    t->next=NULL;
    printf("Enter data: ");
    scanf("%d",&t->data);
    if(start==NULL){
            start=t;
    end=t;
    }
    else{
        end->next=t;
        end=t;
    }

}


void dequeue(){
   struct node  *t;
    if(start==NULL){
    end=NULL;
   }
   if(start==NULL){
    printf("Empty Queue.\n");
   }else{
       t=start;
       start=start->next;
       free(t);
   }
   if(start==NULL){
    end=NULL;
   }
}

void printQueue(){
    struct node *t;
    t=start;
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->next;
    }
    printf("\n");
}
