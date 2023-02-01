#include<stdio.h>
int sum=0;
int checkPalindrome(int a){
    static int sum=0;
    if(a!=0){
            int z=a%10;
    sum=sum*10+z;

    return checkPalindrome(a/10);
    }
    else{
        return sum;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int b=checkPalindrome(a);
    if(a==b){
        printf("Palindrome.\n");
    }
    else{
        printf("Not Palindrome.\n");
    }
}

