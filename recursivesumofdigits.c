#include <stdio.h>

// recursive function to find sum of digits
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;   // convert negative to positive

    printf("Sum of digits = %d\n", sumOfDigits(n));

    return 0;
}