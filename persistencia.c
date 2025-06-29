#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tarefa.h"

#define MAX_TAREFAS 100

Tarefa tarefas[MAX_TAREFAS];
int qtdTarefas = 0;

void salvarTarefas() {
    FILE *fp = fopen("tarefas.txt", "w");
    for (int i = 0; i < qtdTarefas; i++) {
        fprintf(fp, "%d;%s;%s;%s;%s\n",
            tarefas[i].id,
            tarefas[i].descricao,
            tarefas[i].data,
            tarefas[i].prioridade,
            tarefas[i].status);
    }
    fclose(fp);
}

void carregarTarefas() {
    FILE *fp = fopen("tarefas.txt", "r");
    if (!fp) return;

    while (fscanf(fp, "%d;%99[^;];%10[^;];%9[^;];%9[^\n]\n",
                  &tarefas[qtdTarefas].id,
                  tarefas[qtdTarefas].descricao,
                  tarefas[qtdTarefas].data,
                  tarefas[qtdTarefas].prioridade,
                  tarefas[qtdTarefas].status) == 5) {
        qtdTarefas++;
    }

    fclose(fp);
}
