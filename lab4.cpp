
#include <iostream>

int main()
{
    int S = 100;//the last element of a natural progression, up to which the sum of squares is calculated
    int sum = 0;
    int array[5];

    if (S > 100){//checks if the variable S is positive
        printf_s("Variable 'S' is positive");
    }

    for (int i = 0; i < S; i++)
    {
        sum += i * i;
    }
    printf("%d", sum);

    srand(time(nullptr));
    printf("\n");
    for (int i = 0; i < 5; i++) {
        array[i] = rand() % 21 - 10;
        printf("%d ", array[i]);
    }
}