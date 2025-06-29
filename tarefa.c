#include <stdio.h>
#include <string.h>
#include "tarefa.h"

extern Tarefa tarefas[]; // definindo em outro arquivo
extern int qtdTarefas;

void adicionarTarefa() {
    Tarefa nova;
    nova.id = qtdTarefas + 1;

    printf("Descricao: ");
    fgets(nova.descricao, sizeof(nova.descricao), stdin);
     nova.descricao[strcspn(nova.descricao, "\n")] = 0;

    printf("Data (DD/MM/AAAA): ");
    scanf("%10s", nova.data);
    getchar();

    printf("Prioridade (Alta, Media, Baixa): ");
    scanf("%9s", nova.prioridade);
    getchar();

    strcpy(nova.status, "Pendente");

    tarefas[qtdTarefas++] = nova;

    printf("Tarefa adicionada com sucesso!\n");
}

void listarTarefas() {
    printf("\n--- TAREFAS ---\n");
    for (int i = 0; i < qtdTarefas; i++) {
        printf("[%d] %s | %s | %s | %s\n",
            tarefas[i].id,
            tarefas[i].descricao,
            tarefas[i].data,
            tarefas[i].prioridade,
            tarefas[i].status);
    }
}
