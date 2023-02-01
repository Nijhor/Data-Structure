#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
struct Node *tail=NULL;

int main(){
    while(1){
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Break\n");
        printf("4. Print Queue.\n");
        printf("5. Delete Negatives.\n");
        int n;
        scanf("%d",&n);
        if(n==1){
            enqueue();
            printf("Front: %d \n",head->data);
            printf("Rear: %d \n",tail->data);
        }
        else if(n==2){
                dequeue();
                if(tail!=NULL){
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
                deleteNegative();
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

    }
    else{
        tail->next=temp;
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

void deleteNegative(){
    struct Node *temp,*prev;
    temp=head;
    while(temp!=NULL){
            if(temp->data<0){
        if(temp==head){
        prev=head;
        head=head->next;
        //free(prev);
    }else if(temp==tail){
            prev=head;
            while(prev->next!=temp){
                prev=prev->next;
            }
            prev->next=NULL;
            temp=prev;
            temp->next=NULL;
            tail=prev;
            //free(prev);
    }
    else{
         prev=head;
            while(prev->next!=temp){
                prev=prev->next;
            }
            prev->next=temp->next;
           // free(temp);
    }
            }

            temp=temp->next;

}
}

