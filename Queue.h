#ifndef queue_h
#define queue_h
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
} Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
  if (new_node){ 
    new_node->data = x;
    new_node->nextPtr = NULL;
    
    if(q->headPtr == NULL){ // กรณีคิวว่าง
      q->headPtr = new_node;
    } else {                // กรณีคิวไม่ว่าง
      q->tailPtr->nextPtr = new_node;
    }
    
    q->tailPtr = new_node; // ขยับ tail ไปที่โหนดใหม่
    q->size++;
  }
}


int dequeue_struct(Queue *q){
   NodePtr t = q->headPtr;
   if(t){
       int value = t->data;
       q->headPtr = t->nextPtr; // ขยับ head ไปตัวถัดไป
       
       if(q->headPtr == NULL){ // ถ้าเอาออกแล้วคิวว่าง
         q->tailPtr = NULL;
       }
       
       free(t);
       q->size--;
       printf("dequeuing %d\n", value); // แสดงผลตอนเอาออกสำเร็จ
       return value;
   }
   
   // โจทย์ข้อ 2: ถ้า dequeue ตอน empty queue ให้ขึ้นแค่ empty queue เฉยๆ
   printf("empty queue\n"); 
   return 0;
}

#endif