#include <stdio.h>
#include <stdlib.h>

int armstrong(int i);

int main()
{
    int i,sum=0;
    printf("The Armstrong numbers between 1 and 500 are: \n");
    for (i=1; i<=500; i++)
    {
        sum = armstrong(i);
        if (i==sum)
        {
            printf ("%d\n",i);
        }
    }
    return 0;
}

int armstrong(int i)
{
    int rem,sum=0;
    while(i)
    {
        rem = i%10;
        i /= 10;
        sum +=(rem*rem*rem);
    }
    return (sum);
}
