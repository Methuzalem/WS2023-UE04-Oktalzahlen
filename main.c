#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eingabe, hunderter, zehner, einer, oktal, hunderterOk, zehnerOk, einerOk, ziffSumme;

    printf(": ");
    scanf("%d", &eingabe);

    hunderter = eingabe/100;
    zehner = (eingabe - hunderter*100)/10;
    einer = eingabe - (hunderter*100+zehner*10);

    oktal = (hunderter*8*8)+(zehner*8)+(einer*1);

    hunderterOk = oktal/100;
    zehnerOk = (oktal - hunderterOk*100)/10;
    einerOk = oktal - (hunderterOk*100+zehnerOk*10);

    ziffSumme = hunderterOk+zehnerOk+einerOk;


    if(hunderter == 8 || hunderter == 9 || zehner == 8 || zehner == 9 || einer == 8 || einer == 9 || eingabe > 999){
        printf("Ungueltig\n");
    }
    else{
        printf("dec.: %d\n", oktal);
        printf("ZS: %d", ziffSumme);
    }

  return 0;
}
