/*14) Escreva um programa que grave um vetor de 20 n�meros inteiros em um arquivo bin�rio.
Implemente uma fun��o para mostrar todo o conte�do do arquivo. Implemente um
procedimento que elimina todos os n�meros repetidos existentes no arquivo, sem utilizar
vetores. Insira um novo n�mero no lugar do n�mero repetido.*/
#include<stdio.h>
#include<stdlib.h>

void mostrar(FILE *file){
int vetor[20];
   fread(vetor,sizeof(int),20,file);
   for(int i=0;i<20;i++){
    printf("%d ", vetor[i]);
   }
}

void eliminar(FILE *file){
int x, y, verificador=1;

for(int i=0;i<20;i++){
    fseek(file, i*sizeof(int),SEEK_SET);
    fread(&x,sizeof(int),1,file);
    rewind(file);

    for(int a=0;a<i;a++){
    fread(&y,sizeof(int),1,file);
    if(x==y){
    fseek(file, i*sizeof(int),SEEK_SET);
    x=rand()%21;
    fwrite(&x,sizeof(int),1,file);
    i--;
    }
    }
}
}


int main(){
FILE *file;
file=fopen("arquivo.txt","w+b");
if(file==NULL){
    printf("nao foi poss�vel criar o arquivo");
    return 1;
}
int vetor[20];
for(int i=0;i<20;i++)
    vetor[i]=rand()%21;
fwrite(vetor,sizeof(int),20,file);

rewind(file);
mostrar(file);
rewind(file);
printf("\n");
eliminar(file);
rewind(file);
printf("\n");
mostrar(file);
}
