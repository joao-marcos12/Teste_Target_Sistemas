#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[8] = {'E','x','e','m','p','l','o'};

    for(int i = 8; i >= 0; i--)
        {
            printf(" %c ", palavra[i]);
        }

}
