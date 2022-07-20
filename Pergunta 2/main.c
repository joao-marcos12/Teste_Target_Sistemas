#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int a, b, fib, n, x=0; ;

    printf ("Informe um numero: ");
    scanf ("%d", &n);

    a = 0;
    b = 1;


    for (int i = 1; i <= 15; i++ )
     {
        if (i == 1)
         {
            printf (" %d " ,a);
         }
        else if (i == 2)
         {
            printf (" %d ", b);
         }
        else
         {
            fib = a + b;
            a = b;
            b = fib;
            printf(" %d ", fib);
         }

        if(n == fib)
         {
            x++;
         }
     }

    if(x == 1)
     {
        printf("\nPertence a sequencia!");
     }
    else
     {
        printf("\nNao pertence a sequencia!");
     }

    return 0;
}
