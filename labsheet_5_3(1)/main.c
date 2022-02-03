#include <stdio.h>
#include <stdlib.h>

int lcm(int x, int y);

int main()
{
    int x,y,LCM;
    printf("Please enter two value: ");
    scanf("%d%d",&x,&y);

    if (x<y)
    {
        LCM = lcm(x,y);
    }
    else
    {
        LCM= lcm(y,x);
    }
    printf("Lowest common multiple (LCM): %d",LCM);
    return 0;
}

int lcm(int x, int y)
{
    static int c=0;
    c += x;
    if ((c%x==0) && (c%y==0))
    {
        return (c);
    }
    else
    {
        return lcm(x,y);
    }
}
