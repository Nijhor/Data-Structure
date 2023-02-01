#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head;
    head=(struct Node*)malloc(sizeof(struct Node));
    head->next=NULL;
    while(1){
        printf("1. Insert\n");
        printf("2. Print\n");
        printf("3. Break\n");
        printf("4. Insert Eelement at begin\n");
        printf("5. Insert Eelement at position\n");
        printf("6. Delete Node from last position\n");
        printf("7. Delete Node from any position\n");
        int n;
        scanf("%d",&n);
        if(n==1){
            insert(head);
        }
        else if(n==2){
            print(head);
        }else if(n==3){
            break;
        }else if(n==4){
            insertElementAtBegin(head);
        }
        else if(n==5){
                insertElementAtPosition(head);
        }
        else if(n==6){
         deleteLastNode(head);
        }
        else if(n==7){
                deleteNodeFromAnyPos(head);
        }
    }
}
void insert(struct Node *head){
    struct Node *temp;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    struct Node *temp1;
    temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1->next=NULL;
    temp->next=temp1;
    printf("Enter data: ");
    scanf("%d",&temp1->data);

}
void print(struct Node* head){
    struct Node *temp;
    temp=head->next;
    printf("\n\nPrinting List: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
}
void insertElementAtBegin(struct Node *head){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->next=head->next;
    head->next=temp;
    printf("Enter data for first: ");
    scanf("%d",&temp->data);
}
void insertElementAtPosition(struct Node *head){
    struct Node *temp,*temp1,*nxt;
    temp=(struct Node*)malloc(sizeof(struct Node));
    int index;
    printf("Enter index: ");
    scanf("%d",&index);
    printf("Enter value: ");
    scanf("%d",&temp->data);
    int pos=-1;
    if(index!=0){
    temp1=head->next;
    while(temp1!=NULL){
        pos++;
        if(pos==index-1){
            break;
        }
        temp1=temp1->next;

    }
    nxt= temp1->next;
    temp1->next=temp;
    temp->next=nxt;
    }else{
        temp->next=head->next;
    head->next=temp;
    }

}

void deleteLastNode(struct Node *head){
    struct Node *temp,*pre;
    temp=head;
    pre=head;
    while(temp->next!=NULL){
        pre=temp;
        temp=temp->next;
    }
    pre->next=NULL;
    free(temp);
}
void deleteNodeFromAnyPos(struct Node *head){
    struct Node *temp,*pre,*post;
    temp=head;
    printf("Enter index: ");
    int index;
    scanf("%d",&index);
    int pos=-1;
    while(temp->data!=NULL){
        pos++;

        pre=temp;
        temp=temp->next;
        if(pos==index)break;
    }
    pre->next=temp->next;
    free(temp);
}
