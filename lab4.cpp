
#include <iostream>

int main()
{
    int S = 100;
    int sum = 0;
    for (int i = 0; i < S; i++)
    {
        sum += i * i;
    }
    printf("%d", sum);
}