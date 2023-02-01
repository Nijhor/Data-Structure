#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
struct Node *head=NULL;
struct Node *head1=NULL;
struct Node *tail=NULL;
int main()
{
        printf("Enter data: \n");
        int i;
        for(i=0; i<5; i++){
            int x;
            scanf("%d",&x);
            push(x);
        }
        int j;
        for(j=0; j<5; j++){
            int x=pop();
            enqueue(x);
        }
        printQueue();

}
void push(int item){
    struct Node *temp,*ptr;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=item;
    if(head==NULL){
        head=temp;
        temp->next=NULL;
    }else{
        ptr=head;
        temp->next=ptr;
        head=temp;
    }
}

void printStack(){
    struct Node* temp;
    temp=head;
    if(head!=NULL){
    while(temp!=NULL){
            printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    }else{
        printf("Stack is empty\n");
    }
}
int pop(){
    struct Node *temp;
    int val;
    if(head==NULL){
        printf("Stack is empty.\n");
    }else{
        temp=head;
        val=head->data;
        head=head->next;
        free(temp);
    }
    return val;
}
void enqueue(int item){
    struct Node *temp;
    temp=head1;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->next=NULL;
    temp->data=item;
    if(head1==NULL){
            head1=temp;
    tail=temp;

    }
    else{
        tail->next=temp;
        tail=temp;
    }

}

void printQueue(){
    struct Node *temp;
    temp=head1;
    printf("\nPrinting Queue: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
