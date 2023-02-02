#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left,*right;
};
struct Node *root=NULL;
struct Node* insert(struct Node* root,int item);
struct Node * searchItem(struct Node *root,int item){
    if(root==NULL || root->data==item){
        return root;
    }
    else{
        if(root->data>item){
            return searchItem(root->left,item);
        }
        else{
            return searchItem(root->right,item);
        }
    }
}


struct Node* findMin(struct Node *root){
    if(root->left==NULL){
        return root;
    }
    else{
        return findMin(root->left);
    }
}
struct Node *findMax(struct Node *root){
    if(root->right==NULL){
        return root;
    }
    else{
        return findMax(root->right);
    }
}

int main()
{
    while(1){
        printf("1. Insert.\n");
        printf("2. print in order.\n");
        printf("3. Break.\n");
        printf("4. Search.\n");
        printf("5. print in pre order.\n");
        printf("6. print in post order.\n");
        printf("7. Find Minimum\n");
        printf("8. Find Maximum\n");
        int n;
        scanf("%d",&n);
        if(n==1){
            printf("Enter data: ");
        int x;
        scanf("%d",&x);
        root=insert(root,x);
        }
        else if(n==2){
                printf("Printing inorder: ");
            inorder(root);
            printf("\n");
        }
        else if(n==3){
            break;
        }
        else if(n==4){
            printf("Enter element you want to search: ");
            int d;
            scanf("%d",&d);
            struct Node *temp;
            temp=searchItem(root,d);
            if(temp==NULL){
                printf("Not Found.\n");
            }
            else{
                printf("Founded data: %d\n",temp->data);
            }
        }
        else if(n==5){
                printf("Printing preorder: ");
            preorder(root);
            printf("\n");
        }
        else if(n==6){
            printf("Printing postorder: ");
            postorder(root);
            printf("\n");
        }
        else if(n==7){
                struct Node *temp;
            temp=findMin(root);
        printf("Minimum is: %d\n",temp->data);
        }
        else if(n==8){
            struct Node *temp;
            temp=findMax(root);
        printf("Maximum is: %d\n",temp->data);
        }
    }
}
struct Node * makingNew(int item){
    struct Node *temp;
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=item;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
}
struct Node* insert(struct Node* root,int item){
    if(root==NULL){
            root=makingNew(item);
    return root;
    }
    else if(root->data>item){
        root->left=insert(root->left,item);
    }
    else{
        root->right=insert(root->right,item);
        return root;
    }
    return root;

}

void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left); //done
        printf("%d ",root->data); //done
        inorder(root->right); //done
    }
}
void preorder(struct Node *root){
    if(root!=NULL){
        printf("%d ",root->data);  // 12   6  3  32  14
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct Node *root) {
   if (root != NULL) {
      postorder(root->left);
      postorder(root->right);
      printf("%d ",root->data);  // 3   6  14  32  12
   }
}




