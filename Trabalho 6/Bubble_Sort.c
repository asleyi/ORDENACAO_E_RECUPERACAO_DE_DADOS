#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[10] = {9,8,7,6,5,4,3,2,1,0};

    int i = 0;
    int n = 10;
    int houveTroca=1;
    int troca;

    printf("Numeros desordenados: ");
    for(i=0; i<n; i++){
        printf("|%d|",arr[i]);
    }
    printf("%\n");

    while(houveTroca==1){
        houveTroca=0;

        for(i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){

                troca = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=troca;
                houveTroca=1;
            }
        }
    }

    printf("Numeros ordenados: ");
    for(i=0; i<n; i++){
        printf("|%d|",arr[i]);
    }

    printf("\n");
    return 0;
}
