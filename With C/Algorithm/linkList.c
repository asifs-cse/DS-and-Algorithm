#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


int main(){
    
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;
    struct Node *d = NULL;

    a = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));
    d = (struct Node*)malloc(sizeof(struct Node));

    a->data = 10;
    b->data = 20;
    c->data = 30;
    d->data = 40;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    while (a!=NULL)
    {
        printf("%d ->", a->data);
        a = a->next;
    }
    

    return 0;
}