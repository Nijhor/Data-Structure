#include<stdio.h>
int main()
{
    printf("Enter size of the array: ");
    int n;
    scanf("%d",&n);
    int ar[n+1],i;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=n/2;i>=1; i--){
        heapify(ar,n,i);
    }
    printf("Converting Array to MaxHeap: \n");
    for(i=1; i<=n; i++){
        printf("%d ",ar[i]);
    }
    for(i=n; i>=1; i--){
        int x=ar[i];
        ar[i]=ar[1];
        ar[1]=x;
        heapify(ar,i-1,1);
    }
    printf("\n");
    printf("Sorted array: ");
    for(i=1; i<=n; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");

}

void heapify(int ar[],int n,int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<=n && ar[largest]<ar[left]){
        largest=left;
    }
    if(right<=n && ar[largest]<ar[right]){
        largest=right;
    }
    if(largest!=i)
    {
        int swap=ar[largest];
        ar[largest]=ar[i];
        ar[i]=swap;
        heapify(ar,n,largest);
    }
}
