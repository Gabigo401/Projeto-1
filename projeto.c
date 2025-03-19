#include "projeto.h"
#include <stdio.h>
int criarTarefa(ListaDeTarefas *lt){
    if(lt->qtd>= TOTAL_TAREFAS)
    return 1;

        Tarefa *t= &lt -> tarefas[lt->qtd];

    printf("Entre com a prioridade da tarefa: ");
    scanf("%d",& t->prioridade);

    printf("Entre com a categoria da tarefa: ");
    scanf("%d",& t->categoria);

     printf("Entre com a descrição da tarefa: ");
    scanf("%d",& t->descricao);

lt ->qtd++;
return 0;
}

int deletarTarefa(ListaDeTarefas *lt){
    if(lt->qtd == 0)
    return 1;

    int pos;
    printf("Entre com a posição que deseja deletar: ");
    scanf("%d", &pos);

    if(pos< 0 || pos > lt -> qtd -1)
    return 2;

    for(; pos<lt->qtd-1;pos++){
        lt ->tarefas[pos].prioridade=lt->tarefas[pos+1].prioridade;
        strcpy(lt->tarefas[pos].descricao, lt->tarefas[pos+1].descricao);
        strcpy(lt->tarefas[pos].categoria, lt->tarefas[pos+1].categoria);
    }
    lt ->qtd--;
return 0;
}

int listarTarefas(ListaDeTarefas *lt){
    printf("Listar Tarefa\n");
return 0;
}

int carregarTarefas(ListaDeTarefas *lt, char *nome){
return 0;

}

int salvarTarefas(ListaDeTarefas *lt, char *nome){
return 0;

}

void exibeMenu(){
    printf("Menu\n");
}