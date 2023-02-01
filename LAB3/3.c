#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
struct Node *head=NULL;
int main()
{
    while(1){
        printf("1. Insert data/ push.\n");
        printf("2. Print stack.\n");
        printf("3. Pop stack.\n");
        printf("4. Break.\n");
        int n;
        scanf("%d",&n);
        if(n==1){
                push();
        }else if(n==2){
            printStack();
        }
        else if(n==3){
                pop();
        }else if(n==4){
            break;
        }
    }
}
void push(){
    struct Node *temp,*ptr;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d",&temp->data);
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
void pop(){
    struct Node *temp;
    if(head==NULL){
        printf("Stack is empty.\n");
    }else{
        temp=head;
        head=head->next;
        free(temp);
    }
}
