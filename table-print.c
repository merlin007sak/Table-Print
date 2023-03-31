// print a table of n , n take input from user

#include <stdio.h>

int main()
{

    int n;
read:
    printf("(By Santosh Khade)\tEnter a number to print a table : ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("\nPlease enter greater than 0 :\n");
    }
    else
    {

        for (int i = n; i <= n * 10; i = i + n)
        {
            printf("%d\n", i);
        }
    }
    goto read;
}
