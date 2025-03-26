/*3) Implemente as seguintes fun��es:
� Fun��o criar_vetor que solicita ao usu�rio um valor n (tamanho do vetor) e cria
dinamicamente um vetor de n elementos.
� Fun��o exibir_vetor que recebe um ponteiro para um vetor e imprime os n elementos
desse vetor.
� Fun��o liberar_vetor que recebe um ponteiro para um vetor e libera esta �rea de mem�ria.
As fun��es dever�o ser chamadas pelo programa principal na seguinte ordem: criar_vetor,
exibir_vetor e liberar_vetor.
*/

#include<Stdio.h>
#include<stdlib.h>

const int n;

int *criar_vetor(int *v){
printf("digite o tamanho do vetor\n");
scanf("%d", &n);

v =(int*) malloc (n*sizeof(int));
for(int i=0;i<n;i++){
v[i]=rand()%21;
}
return v;
}

void exibir_vetor(int *v){

for(int i=0; i<n; i++){
printf("%d ", v[i]);
}
}

void liberar_vetor(int *v){
free(v);
}

int main(){
int *vetor;
vetor=criar_vetor(vetor);
exibir_vetor(vetor);
liberar_vetor(vetor);
}
