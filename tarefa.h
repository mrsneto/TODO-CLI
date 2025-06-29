#ifndef TAREFA_H
#define TAREFA_H

typedef struct{
    int id;
    char descricao[100];
    char data[11]; //formato dd/mm/aaaa
    char prioridade[10]; //alta, media, baixa
    char status[10]; //pendente, concluida
} Tarefa;

void adicionarTarefa();
void listarTarefas();
void removerTarefa();
void editarTarefa();
void filtrarPorPrioridade();




#endif