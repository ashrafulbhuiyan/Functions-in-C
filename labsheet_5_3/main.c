#include <stdio.h>
#include <stdlib.h>

int lcd(int x,int y);
int main()
{
    int x,y,LCD;
    printf("Please inter two number: ");
    scanf("%d%d",&x,&y);

    LCD = lcd(x,y);
    printf("LCD = %d", LCD);
    return 0;
}

int lcd(int x,int y)
{
    int i,max;
    static int k=1;
    max= x*y;
    for (i=2; i<=max; i++)
    {
        if (x%i==0 && y%Si==0)
        {
           x /=i;
           y /=i;
           k *=i;
           if (x==0 && y==0)
           {
            return lcd(x,y);
           }

        }
    }

    return (k);
}
