#include <stdio.h>
#include <stdlib.h>

//Pointer ile Linear Searching Algoritmasi

#define SIZE 10

int main()
{
    int *array[SIZE] = {12,45,56,37,44,90,78,32,19,67};
    int value, i;

    printf("Aranan deger:"); scanf("%d", &value);

    for(i=0; i<SIZE; i++){

        if((*(array+i))==value){
            printf("Aranan degerin bulundugu index: %d", i);
            return;
        }
    }
    printf("Aranan deger dizin icinde bulunmamaktadir!");

    return 0;
}

