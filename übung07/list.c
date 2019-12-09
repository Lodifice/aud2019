#include <stdlib.h>
#include <stdio.h>

typedef struct element *list;
struct element {
    int value;
    struct element *next;
};

int sum(struct element *list) {
    int summe = 0;
    for (struct element *current = list;
            current != NULL;
            current = current->next) {
        summe += current->value;
    }
    return summe;
}

void rmEvens(struct element **list) {
    if (list == NULL) {
        return;
    }
    while (*list != NULL) {
        if ((*list)->value % 2 == 0) {
            struct element *temp = *list;   // Speicherbefreiung (1)
            *list = (*list)->next;
            free(temp);                     // Speicherbefreiung (2)
        } else {
            list = &(*list)->next;
        }
    }
}

int main(void) {
    // Beispielaufrufe
    struct element *list = malloc(sizeof *list);
    list->value = 1;
    list->next = malloc(sizeof *list);
    list->next->value = 2;
    list->next->next = malloc(sizeof *list);
    list->next->next->value = 3;
    list->next->next->next = NULL;
    printf("sum([1,2,3]) = %d\n", sum(list));
    rmEvens(&list);
    printf("After rmEvens:\nsum([1,3]) = %d\n", sum(list));
    list->value = 2;
    list->next->next = malloc(sizeof *list);
    list->next->next->value = 4;
    list->next->next->next = NULL;
    printf("Test corner cases:\nsum([2,3,4]) = %d\n", sum(list));
    rmEvens(&list);
    printf("After rmEvens:\nsum([3]) = %d\n", sum(list));
    return 0;
}
