#include <iostream>
#include <cstdlib>

#define MAX 20

int *fibo;

int main()
{
    int i;

    fibo = (int*) malloc(MAX * sizeof(int));

    *(fibo + 1) = 1;
    *(fibo + 2) = 1;

    for (i = 3; i <= MAX; i++)
        *(fibo + i) = (*(fibo + i - 2) + *(fibo + i - 1));

    std::cout << MAX << " Bilangan Fibonaci Pertama adalah : \n";

    for (i = 1; i < MAX; i++)
        std::cout << *(fibo + i);

    free(fibo);

    return 0;
}
