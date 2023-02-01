#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char ch;
    struct Node *next;
};
struct Node *start=NULL;
int main()
{


    printf("Enter expression: ");
    char st[100];
    scanf("%s",st);
    int l=strlen(st);
    int i;
    for(i=0; i<l; i++)
    {
        push(st[i]);
    }

    checkvalidity();

}
void push(char c)
{
    struct Node *t,*p;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(c=='('  || c==')')
    {
        t->ch=c;
        if(start==NULL){
        start=t;
        t->next=NULL;
        }
    else
        {
        p=start;
        t->next=p;
        start=t;
        }
    }

}
void checkvalidity()
{
    struct Node *t;
    t=start;
    int count=0,sum=0;
    while(t!=NULL)
    {
        if(t->ch=='(')
            sum--;
        else
            sum++;

        if(sum<0)
        {
            printf("Opening parenthesis not end.\n");
            count=-1;
            break;
        }
           t=t->next;
    }
    if(sum==0)
        printf("Valid Patenthesis\n");
    else if(count==0)
        printf("Closing parenthesis not match\n");

}

void printStack()
{
    struct Node* t;
    t=start;
    if(start!=NULL)
    {
    while(t!=NULL)
    {
        printf("%c ",t->ch);
        t=t->next;
    }
        printf("\n");
    }
    else
        printf("Stack is empty\n");

}
