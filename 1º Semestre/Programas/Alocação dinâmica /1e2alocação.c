
/*1) Fa�a um programa que: i) solicite ao usu�rio um valor n; ii) crie, dinamicamente, um vetor de n
elementos; e iii) passe esse vetor para uma fun��o que preencher� o vetor. Depois, no
programa principal, o vetor preenchido dever� ser impresso. Antes de finalizar o programa,
libere a �rea de mem�ria alocada.

2) No programa anterior, exiba os n elementos do vetor dentro da fun��o que preenche o vetor.
Ap�s exibir o vetor, pergunte ao usu�rio quantos elementos a mais ele deseja adicionar ao vetor. Em
seguida, use a fun��o realloc para aumentar o tamanho do vetor. Preencha as novas posi��es do
vetor com n�meros aleat�rios. Exiba o vetor novamente. No programa principal, exiba todos os
elementos do vetor.
*/

#include<stdio.h>
#include<stdlib.h>

void preencher(int *v, int n, int start){
printf("o vetor e: \n");
for(int i=start;i<n;i++){
v[i]=rand()%21;
printf("%d ", v[i]);
}
}

int main(){
int n, n2, *v;
printf("digite o tamanho do vetor\n");
scanf("%d", &n);
v=(int*) malloc (n*sizeof(int));
preencher(v, n, 0);
printf("\nquantos elementos a mais deseja inserir no vetor?\n");
scanf("%d", &n2);
v=(int*) realloc (v, (n+n2)*sizeof(int));
preencher(v, n+n2, n);
printf("\no vetor todo e: \n");
for(int i=0;i<n+n2;i++){
printf("%d ", v[i]);
}
free(v);
}
