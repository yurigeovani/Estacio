#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* n1 = malloc(sizeof(struct Node));
    struct Node* n2 = malloc(sizeof(struct Node));
    struct Node* n3 = malloc(sizeof(struct Node));
    struct Node* n4 = malloc(sizeof(struct Node));

    n1->data = 1;
    n2->data = 2;
    n3->data = 3;
    n4->data = 4;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    struct Node* n = n1;

    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }

    return 0;
}