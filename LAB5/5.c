#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL,*tail;
int main()
{

    while(1){
        printf("1. Insert.\n");
        printf("2. Print soja.\n");
        printf("3. Print ulta.\n");
        printf("4. Break.\n");
        int n;
        scanf("%d",&n);
        if(n==1){
                insert();
        }
        else if(n==2){
            printList();
        }
        else if(n==3){
            printUlta(head);
            printList();
        }
        else if(n==4){
            break;
        }
    }
}
void insert(){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

void printList(){
    struct Node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void printUlta(struct Node *ptr){
    if(ptr==NULL){
        return ;
    }
    printUlta(ptr->next);
    printf("%d ",ptr->data);
    if(ptr==head){
        printf("\n");
    }

}
