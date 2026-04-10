#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int hash(const char *key, int table_size) {
    unsigned int h = 0;
    while (*key) {
        h += *key;
        key++;
    }
    return h % table_size;
}

typedef struct Node {
    char key[50];
    int value;
    struct Node *next;
} Node;

typedef struct {
    Node **table;
    int table_size;
} Hashtable;


void init_ht(Hashtable *ht, int table_size) {
    ht->table_size = table_size;

    ht->table = malloc(sizeof(Node *) * table_size);
    if (ht->table == NULL) {printf("malloc failed lol"); return;} 

    for (int i = 0; i<table_size; i++) {
        ht->table[i] = NULL;
    }
}

void insert(Hashtable *ht, const char *key, int value) {
    unsigned int index = hash(key, ht->table_size);

    Node *new = malloc(sizeof(Node));
    if (new == NULL) {printf("malloc failed lol"); return;} 

    strcpy(new->key, key);
    new->value = value;

    new->next = ht->table[index];
    ht->table[index] = new;
}