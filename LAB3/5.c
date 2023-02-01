#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
struct Node *start=NULL;
int main()
{
    while(1)
        {
        printf("1. Input number\n");
        printf("2. Break.\n");
        int n;
        scanf("%d",&n);
        if(n==1)
        {
                printf("Enter number: ");
                int x;
        scanf("%d",&x);
        while(x>0)
        {
            int q=x%2;
            push(q);
            x=x/2;
        }
        printStack();
        start=NULL;
        }
        else if(n==2)
        {
            break;
        }
    }
}
void push(int item)
{
    struct Node *t,*p;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=item;
    if(start==NULL)
        {
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

void printStack()
{
    struct Node* t;
    t=start;
    printf("Output: ");
    if(start!=NULL)
    {
        while(t!=NULL)
            {
                printf("%d",t->data);
                t=t->next;
            }
        printf("\n");
    }
    else
    {
        printf("Stack Empty\n");
    }
}
