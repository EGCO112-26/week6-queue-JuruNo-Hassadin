#ifndef node_h
#define node_h

struct node {
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;

#endif