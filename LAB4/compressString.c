#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char data;
    struct Node *next;
};
struct Node *head=NULL;
struct Node *tail=NULL;



int main(){
    while(1){
            head=NULL;
            printf("Enter string: ");
            char ch[200];
            scanf("%[^\n]%*c", ch);
    int i;
    for(i=0; ch[i]!='\0'; i++){
        if(ch[i]!=' '){
            enqueue(ch[i]);
        }
    }
    printQueue();

    }
}
void enqueue(char item){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=item;
    temp->next=NULL;

    if(head==NULL){
            head=temp;
    tail=temp;
       // front = temp;
        //rear=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }

}



void printQueue(){
    struct Node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%c",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
