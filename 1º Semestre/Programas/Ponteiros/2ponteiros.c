/*2) �char * strchar (char *s, char ch)� que retorna o endere�o da �ltima ocorr�ncia
de �ch� em �s�; caso n�o exista, retorna NULL (NULL � uma constante simb�lica que
indica que o ponteiro n�o aponta para nenhuma vari�vel). Implemente a fun��o
principal (�main�) para testar a fun��o strchar.
*/



#include<stdio.h>

char *strchar(char *s, char ch){

char *aux;
int verificador=0;


for(int i=0; s[i]!='\0'; i++){
if(s[i]==ch){
aux=&s[i];
verificador=1;
}
}
if(verificador==1)
return aux;
else
return NULL;
}


int main(){
char string[100], ch, *ponteiro=string;
printf("digite a string\n");
fgets(ponteiro,100,stdin);
printf("digite a letra que deseja analisar\n");
scanf("%c", &ch);
printf("o endere�o da ultima ocorrencia da letra digitada e: %p\n",strchar(ponteiro, ch));
}


