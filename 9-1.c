#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    itn abc,dfg;
    int arr[12];

    srand((unsigned) time(0));

    for(i=0; i<12; i++)
        arr[i] = rand() % 20;

    printf("÷�� : ");
    for(i=0; i<12; i++)
        printf("%2d ",i);
    printf("\n");

    printf("��� : ");
    for(i=0; i<12; i++)
        printf("%2d ",arr[i]);

    return 0;
    //wntjr

}
