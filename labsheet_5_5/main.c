#include <stdio.h>
#include <stdlib.h>

int sumd(int n);

int main()
{
    int n,Sumd;
    printf("Please enter a positive number: ");
    scanf("%d",&n);

    Sumd = sumd(n);
    printf("The sum of digits for %d number: %d",n,Sumd);
    return 0;
}

int sumd(int n)
{
    int a,sum=0;

    if (n==0)
    {
        return (0);
    }
    else if (n>0)
    {
        a = n%10;
        n /=10;
        sum = a+ sumd(n);
    }
    return (sum);
}
