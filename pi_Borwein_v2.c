#include <stdio.h>
#include <math.h>


double calcula_aN_yN(double aN, double yN, int N){

    double pi,
           subtrai,
           soma,
           parte_1,
           parte_2;
    int expoente_2;
    int base = 2;
    float expoente = 0.25;

    printf("aN = %.6f  yN=%.6f\n", aN, yN);


    subtrai = (1 - pow(yN, 4));
    soma = (1 + pow(yN, 4));
    yN = (1 - pow(subtrai, expoente))/(1 + pow(soma, expoente));
    // calculo de aN seguinte
    parte_1 = 1 + yN;
    parte_2 = 1 + yN + pow(yN,2);
    expoente_2 = 2*N + 3;
    aN = aN*pow(parte_1,4) - pow(base,expoente_2)*yN*parte_2;

    return aN;
}

int main(){

    int interacoes = 10;
    int N;

    // Declarando as variáveis iniciais

    double aN = 6.0 - 4.0*sqrt(2),
           yN = sqrt(2) - 1.0;
    double pi;

    // Variaveis para o calculo de pi



    // Calculo de pi

    for(N=0 ; N <= interacoes ; N++){
        pi = 1 / aN;
        printf("%f\n\n", pi);
        // calculo yN seguinte
        aN = calcula_aN_yN(aN, yN, N);
    }

    printf("%.6f\n", pi);


}
