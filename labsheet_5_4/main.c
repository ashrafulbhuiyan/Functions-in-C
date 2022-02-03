#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);

int main()
{
    int n,i,Fn;

    printf("Please enter fibonacci series number (value of n): ");
    scanf("%d", &n);
    printf("%dth number of fibonacci series is: ",n);
    for(i = 1; i <= n; i++)
    {
        Fn = fibonacci(i);
        printf("%d ", Fn);
    }

    return 0;
}

int fibonacci(int i)
{
    if(i == 1)
    {
        return(0);
    }

    else if(i == 2)
    {
        return(1);
    }

    else
    {
        return( fibonacci(i-1) + fibonacci(i-2) );
    }

}
