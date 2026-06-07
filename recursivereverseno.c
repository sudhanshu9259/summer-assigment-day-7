#include <stdio.h>

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;
    
    rev = rev * 10 + (n % 10);
    return reverse(n / 10, rev);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Reverse is not handled for negative numbers in this program.\n");
    }
    else
    {
        printf("Reversed number = %d\n", reverse(n, 0));
    }

    return 0;
}