#include <stdio.h>
#include <stdlib.h>

int main (){
    //O computador separa um espaço de 4 bytes para 'value'
    int value;

   /*
        A memória é preenchida com valoes binários 
        'value = 2'  equivale a :
        
        00000000  
        00000000 
        00000000 
        00000010

        onde cada quebra de linha representa um byte com 8 bits 
   */
    value = 2; 

    //O computador reserva 8 bytes para o ponteiro
    int *andress;

    //'andress' recebe 0x7ffd27e93e7c como posição base
    andress = &value;

    printf("%d\n", *andress); // Saida: 2 (conteudo)_
    printf("%p\n", andress); // Saida: 0x7ffd27e93e7c (endereco)

    return 0;
}