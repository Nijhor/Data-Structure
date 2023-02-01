#include<stdio.h>

int find_lcm(int a, int b)
{

    static int temp = 1;
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}

int main()
{
    int a, b, lcm;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    lcm = find_lcm(a,b);
    printf("LCM is: %d\n",lcm);
    return 0;
}


