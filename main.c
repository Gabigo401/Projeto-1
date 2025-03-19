#include "projeto.h"
#include <stdio.h>

int main(){
ListaDeTarefas lt;
char arquivo[]="Tarefas";
int opcao, codigo;
codigo = carregarTarefas(&lt, arquivo);
if(codigo != 0){
    printf("Lista de tarefas não carregadas");
    lt.qtd=0;
}

do{
    exibeMenu();
    scanf("%d", &opcao);

    if(opcao == 0){}
    else if(opcao == 1){
        codigo=criarTarefa(&lt);
        if(codigo == 1)
        printf("Erro ao criar tarefa: Sem espaço disponivel.\n");
    }
    else if(opcao == 2){
        codigo=deletarTarefa(&lt);
        if(codigo ==1)
        printf("Erro ao deletar tarefa : não existem tarefas para deletar.\n");
        if(codigo == 2)
        printf("Erro ao deletar tarefa: posição invalida.\n");
    }
    else if(opcao == 3){
        codigo=listarTarefas(&lt);
        if(codigo == 1)
        printf("Erroa ao lsitar tarefas: não existem tarefas para serem listadas.\n");
    }
    else {printf("opcao invalida\n");}
    
    }while(opcao != 0);

}