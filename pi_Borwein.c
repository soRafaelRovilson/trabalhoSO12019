#include <stdio.h>
#include <math.h>

double calculo_pi(double aN){
    double pi;

    pi = 1 / aN;

    return pi;
}

double calculo_yN(double yN){
    float expoente = 0.25;
    double soma, subtrai;

    subtrai = (1 - pow(yN, 4));
    soma = (1 + pow(yN, 4));
    yN = (1 - pow(subtrai, expoente))/(1 + pow(soma, expoente));

    return yN;
}

double calculo_aN(double yN, int N){
    int expoente, base = 2;
    double parte_1, parte_2, aN;

    parte_1 = 1 + yN;
    parte_2 = 1 + yN + pow(yN,2);
    expoente = 2*N + 1;
    aN = aN*pow(parte_1,4) - pow(base,expoente)*yN*parte_2;

    return aN;
}

int main(){

    int interacoes = 1000000000;
    int N;
    double pi;

    // Declarando as variáveis iniciais

    double aN = 6.0 - 4.0*sqrt(2),
           yN = sqrt(2) - 1.0;

    // Calculo de pi

    for(N=1 ; N <= interacoes ; N++){

        pi = calculo_pi(aN);
        printf("%f\n\n", pi);
        yN = calculo_yN(yN);
        aN = calculo_aN(yN, N);
    }

    printf("%.6f\n", pi);

    return pi;

}

