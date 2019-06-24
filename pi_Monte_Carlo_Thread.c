#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

int main(){
    int interacoes = 1000000000;
    int total = 0, dentro = 0;
    int N;
    float x, y, tamanho, aux, razao;
    double pi;

    srand( (unsigned)time(NULL) );

    for(N=1 ; N <= interacoes ; N++){
        x = ((rand()%101));
        x = x / 100;
        y = ((rand()%101));
        y = y / 100;
        aux = pow(x,2)+pow(y,2);
        tamanho = sqrt(aux);
        total = total + 1;
        if(tamanho <= 1)
            dentro = dentro + 1;
        //printf("dentro = %d e total = %d\n\n", dentro, total);
    }
    //printf("dentro = %d e total = %d\n\n", dentro, total);
    pi = 4*((float)dentro/total);
    printf("%.6f\n", pi);


}

