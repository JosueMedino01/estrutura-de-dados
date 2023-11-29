#include <stdio.h>
#include <stdlib.h>


int main (){
    /*
        Como alocar memória quando não se sabe previamente quantia necessária?
        Usaremos a Alocação dinâmica de memória    
    */
    int numStudents;
    printf("Digite o numero de estudantes: ");
    scanf("%d", &numStudents);

    int *address;
    address = malloc(numStudents * sizeof(int));

    if(address == NULL){
        printf("Memória alocada com sucesso");
    }

    for (int i = 0; i < numStudents; i++)
    {
       address[i] = i;
    }
    for (int i = 0; i < numStudents; i++)
    {
       printf("Aluno de numero %d, de endereco: %p\n", address[i], &address[i]);
    }

    free(address);


    return 0;
}