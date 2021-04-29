#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
    int i=0;
    int *diziPtr, diziSayi[10];
    diziPtr=&diziSayi;
    int *pCift, *pTek,diziCift[10], diziTek[10];
    pCift=&diziCift;
    pTek=&diziTek;
    srand(time(NULL));
    for(i=0;i<10;i++)
        *(diziPtr+i)=rand()%100;

    for(i=0;i<10;i++)
        {
        if(*(diziPtr+i)%2==0)
            *(pCift+i)=*(diziPtr+i);

        else
           *(pTek+i)=*(diziPtr+i);

        }

    printf("Sayilar\tTek Sayilar\tCift Sayilar\n");
  for (int i=0;i<10;i++) {
    if(*(diziPtr+i)%2==0)
            printf("%d\t%c\t\t%d\n",*(diziPtr+i),'-',*(pCift+i));

        else
           printf("%d\t%d\t\t%c\n",*(diziPtr+i),*(pTek+i),'-');

  }

}
