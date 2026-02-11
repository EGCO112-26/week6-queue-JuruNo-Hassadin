//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;

Queue q;
int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;

   int i,x;
for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q);
            printf("dequeing %d\n",x);
        }
        else {
       enqueue_struct(&q,atoi(argv[i]));
}
  return 0;
}
void enqueue(NodePtr * head, NodePtr* tail, int x){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
  /*Fill in data information*/
    new_node->data=x;
    new_node->nextPtr=NULL;
  /*finish queue*/
  if ((*head)==NULL){//หัวแถว
    *head=new_node;
    *tail=new_node;
  }else{//ต่อแถว
    (*tail)->nextPtr=new_node;
    *tail=new_node;
  }
 }
}

int dequeue(NodePtr *head,NodePtr *tail){
  NodePtr t=*head;
  if(t){
    int value =t->data;
    *head=t->nextPtr;
    free(t);
    return value;
  }
  printf("Empty queue");
  return 0;
}


#endif
