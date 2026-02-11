#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) {
  // สร้างและกำหนดค่าเริ่มต้นให้ Queue
  Queue q;
  q.headPtr = NULL;
  q.tailPtr = NULL;
  q.size = 0;

  int i;
  for(i = 1; i < argc; i++){
    if(strcmp(argv[i], "x") == 0){
      // เมื่อเจอ x ให้สั่ง dequeue (ฟังก์ชันจะ print ผลลัพธ์ให้เอง)
      dequeue_struct(&q);
    }
    else {
      // ถ้าไม่ใช่ x ให้แปลงเป็นตัวเลขแล้ว enqueue
      enqueue_struct(&q, atoi(argv[i]));
    }
  }

  return 0;
}

//rtftgfgf
