#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int main()
{
    int x,y, GCD;
    printf("Please enter two number: ");
    scanf("%d%d",&x,&y);
    GCD = gcd(x,y);
    printf("Greatest common divisor (GCD): %d",GCD);
    return 0;
}

int gcd(int a, int b)
{
    if (a==0)
        {
            return (b);
        }
    if (b==0)
        {
            return (a);
        }


    if (a>b)
    {
        return gcd(a%b,b);
    }

    else
    {
        return gcd(a,b%a);
    }

}
