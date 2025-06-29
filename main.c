#include <stdio.h>
#include "tarefa.h"
#include "persistencia.h"

extern Tarefa tarefas[];
extern int qtdTarefas;

int main() {
    int opcao;
    carregarTarefas();

    do {
        printf("\n--- MENU ---\n");
        printf("1. Adicionar tarefa\n");
        printf("2. Listar tarefas\n");
        printf("3. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 1: adicionarTarefa(); break;
            case 2: listarTarefas(); break;
            case 3: salvarTarefas(); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    return 0;
}
