#include <assert.h>
#include <stdlib.h>

struct element {
    int key;
    struct element *next;
};

struct node {
    int key;
    struct node *left;
    struct node *right;
};

void append(struct element **list, int n) {
    assert(list != NULL);
    while (*list != NULL) {
        list = &(*list)->next;
    }
    *list = malloc(sizeof **list);
    (*list)->key = n;
    (*list)->next = NULL;
}

void treeToListRec(struct node *t, struct element **list) {
    if (t == NULL) {
        return;
    }
    treeToListRec(t->left, list);
    if (t->key % 2 == 0) {
        append(list, t->key);
    }
    treeToListRec(t->right, list);
}

struct element *treeToList(struct node *t) {
    struct element *list = NULL;
    treeToListRec(t, &list);
    return list;
}

int count(struct node *, int);

struct node *baz(struct node *s, struct node *t) {
    if (s == NULL) {
        return s;
    }
    struct node *snew = malloc(sizeof *snew);
    snew->key = count(t, s->key);
    snew->left = baz(s->left, t);
    snew->right = baz(s->right, t);
    return s;
}

int count(struct node *t, int key) {
    if (t == NULL) {
        return 0;
    }
    return (t->key == key) + count(t->left, key) + count(t->right, key);
}

int main(void) {
    struct element *list = NULL;
    append(&list, 1);

    struct node *t = NULL;
    struct element *l2 = treeToList(t);
    return 0;
}
