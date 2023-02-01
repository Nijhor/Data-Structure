#include<stdio.h>
long long int findPower(int base,int pow){
    if(base==pow)return pow;

    return base*findPower(base+1,pow);
}
int main()
{
    printf("Input any number: ");
    int base;
    scanf("%d",&base);
    printf("Input power: ");
    int pow;
    scanf("%d",&pow);
    printf("Output: %lld\n",findPower(1,pow));
}
