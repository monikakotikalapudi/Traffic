#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sig,i;
    printf("Enter Traffic Signal:\n 1.Red\n 2.Orange\n 3.Green\n");
    scanf("%d",&sig);
    switch(sig)
    {
        case 1:printf("Stop\nTimer\n");
                for(i=20;i>0;i--)//20 sec wait might differ according to area and traffic;
                    printf("%d\n",i);//no break cause after red its orange and green followed;
        case 2:printf("Catious\nTimer\n");
                for(i=3;i>0;i--)
                    printf(".\n");
        case 3:printf("Go\nTimer\n");
                for(i=20;i>0;i--)
                    printf("%d\n",i);//20 sec time according to area differs
                    break;
        default:printf("Invalid Choice");
    }
    return 0;
}
