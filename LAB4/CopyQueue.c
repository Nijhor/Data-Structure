#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
struct Node *head2=NULL;
struct Node *tail=NULL;
struct Node *tail2=NULL;
struct Queue{
    struct Queue *front,*rear;
};

void createQueue(){
    struct Queue *temp;
    temp=malloc(sizeof(struct Queue));
    temp->front=NULL;
    temp->rear=NULL;
}
int main(){
    createQueue();
    while(1){
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Break\n");
        printf("4. Print Queue 1\n");
        printf("5. CopyQueue\n");
        printf("6. PrintQueue 2\n");
        int n;
        scanf("%d",&n);
        if(n==1){
            enqueue(head);
            printf("Front: %d \n",head->data);
            printf("Rear: %d \n",tail->data);
        }
        else if(n==2){
                dequeue();
                if(head!=NULL){
                    printf("Front: %d \n",head->data);
            printf("Rear: %d \n",tail->data);
                }else{
                    printf("Empty Queue.\n");
                }

        }
        else if(n==3){
            break;
        }
        else if(n==4){
            printQueue();
        }
        else if(n==5){
            copyQueue();
        }
        else if(n==6){
            printQueue2();
        }
    }
}
void enqueue(){
    struct Node *temp;
    temp=head;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->next=NULL;
    printf("Enter data: ");
    scanf("%d",&temp->data);
    if(head==NULL){
            head=temp;
    tail=temp;
       // front = temp;
        //rear=temp;
    }
    else{
        tail->next=temp;
        //rear=temp;
        tail=temp;
    }

}


void dequeue(){
   struct Node  *temp;
   if(head==NULL){
    printf("Empty Queue.\n");
   }else{
       temp=head;
       head=head->next;
       free(temp);
   }
   if(head==NULL){
    tail=NULL;
   }
}

void printQueue(){
    struct Node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void copyQueue(){
    struct Node *cp;
    cp=head;
    head2=NULL;
    while(cp!=NULL){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=cp->data;
    temp->next=NULL;
    if(head2==NULL){
        head2=temp;
        tail2=temp;
    }
    else{
        tail2->next=temp;
        tail2=temp;
    }
    cp=cp->next;
    }
}

void printQueue2(){
    struct Node *temp;
    temp=head2;
    if(head2==NULL)printf("Queue 2 , Empty.\n");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
