#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

struct Node *head=NULL;
struct Node* insertNode(struct Node *head);
int main()
{
    while(1){
        printf("1. Insert. \n");
        printf("2. Print. \n");
        printf("3. Insert At the beginning \n");
        printf("4. Break. \n");
        int n;
        scanf("%d",&n);
        if(n==1){
            head=insertNode(head);
        }
        else if(n==2){
            printList(head);
        }
        else if(n==3){
                insertAtBegin(head);
        }else if(n==4){
            break;
        }
    }
}
struct Node* insertNode(struct Node *head){
    struct Node *temp;
    temp=(struct Node*) malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d",&temp->data);
    temp-> next =NULL;

    if(head==NULL){
        head=temp;
    }else{
        struct Node *temp1;
        temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    return head;

}

void printList(struct Node * head){
    struct Node *temp;
    temp =head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insertAtBegin(struct Node *head){
    struct Node* temp,*temp1;
    temp=(struct Node*) malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d",&temp->data);
    temp-> next =NULL;
    temp1=head;
    temp1=temp1->next;
    head=temp;
    head->next=temp1;
}

