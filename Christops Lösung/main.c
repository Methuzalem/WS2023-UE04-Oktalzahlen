#include <stdio.h>

int main()
{
    int oct, dec, zs;
    dec = 0;

    printf(": ");
    scanf("%d", &oct);

    while(oct >= 100)
    {
        dec = dec + 8 * 8;
        oct = oct - 100;
    }
    while(oct >= 10)
    {
        dec = dec + 8;
        oct = oct - 10;
    }
    while(oct >= 1)
    {
        dec = dec + 1;
        oct = oct - 1;
    }

    printf("dec.: %d\n", dec);

    zs = 0;

    while(dec >= 100)
    {
        zs++;
        dec = dec - 100;
    }
    while(dec >= 10)
    {
        zs++;
        dec = dec - 10;
    }
    while(dec >= 1)
    {
        zs++;
        dec = dec - 1;
    }

    printf("ZS: %d", zs);
    return 0;
}
