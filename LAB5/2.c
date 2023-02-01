#include<stdio.h>

int findGCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return findGCD(b,a%b);
    }
}

int main()
{
    printf("Input first number: ");
    int a;
    scanf("%d",&a);
    printf("Input second number: ");
    int b;
    scanf("%d",&b);
    printf("Output GCD: %d\n",findGCD(a,b));
}
