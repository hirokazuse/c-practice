#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int i;

    for(i = 0; i < 30; i++)
    {
        printf("\r");
        for(int j = 0; j < i; j++)
            printf(" ");

        printf("🚜");
        fflush(stdout);

        usleep(100000);
    }

    printf("\n");

    return 0;
}
