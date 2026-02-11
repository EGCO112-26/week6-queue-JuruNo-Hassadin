

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if (new_node){ \
  \
  if(q->headPtr==NULL){//Empty Queue
    new_node->data=x;
    new_node->nextPtr=NULL;
    q->headPtr=new_node;
    q->tailPtr=new_node;
    q->size++;
  }else{//Not Empty Queue
    new_node->data=x;
    new_node->nextPtr=NULL;
    q->tailPtr->nextPtr=new_node;
    q->tailPtr=new_node;
    q->size++;
  
 }
  }}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->data;
       q->headPtr=t->nextPtr;
       if(q->headPtr==NULL){
         q->tailPtr=NULL;
       }
       q->headPtr=t->nextPtr;
       free(t);
       q->size--;
   return value;
   }
   printf("Empty queue");
   return 0;
}

