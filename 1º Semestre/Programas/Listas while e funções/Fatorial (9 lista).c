/*Implemente uma fun��o que recebe um n�mero inteiro como par�metro e retorna o fatorial desse
n�mero. Se o n�mero for menor do que zero, ent�o a fun��o deve retornar o valor -1. Implemente o
programa principal para testar a fun��o. Se o valor de retorno da fun��o for �-1�, o programa
principal deve informar que o n�mero digitado est� incorreto.*/
#include<stdio.h>
int fatorial(int numero);

int main(){
int numero;
char cod;
cod='P';
while (cod!='F'){
    if(cod=='C' || cod=='P'){
        printf("\ndigite o numero do qual deseja obter o fatorial\n");
        scanf("%d", &numero);
        printf("o fatorial desse numero e: %d", fatorial(numero));
        printf("\nSe quiser sair, digite F, se nao, tecle C\n");
        cod=getche('F');
    }
    else{
        printf("\nComando nao reconhecido.\nSe quiser sair, digite F, se nao, tecle C\n ");
        cod=getche('F');
    }
}
}

int fatorial(int numero){
int contador=1, somatorio=0, multiplicador=1;
for( ; contador<=numero ;contador++){
somatorio=contador*multiplicador;
multiplicador=somatorio;
}
return somatorio;
}
