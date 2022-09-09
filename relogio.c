#include <stdio.h>

int main(){
    //ENTRADA DE DADOS
    int horas, minutos, segundos;
    printf("Insira o valor das horas: \n");
    scanf("%d", &horas);
    printf("Insira o valor dos minutos: \n");
    scanf("%d", &minutos);
    printf("Insira o valor dos segundos: \n");
    scanf("%d", &segundos);

    //PROCESSAMENTO DE DADOS
    int total = segundos; //somatório do total em segundos
    total += (minutos*60); //1 minuto = 60 segundos
    total += (horas*3600); //1 horas = 3600 segundos (60 minutos * 60 segundos)

    //SAÍDA DE DADOS
    printf("O total em segundos é de: %d segundos.", total);

    return 0;
}
