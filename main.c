#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) {
    Queue q;
    q.headPtr = NULL;
    q.tailPtr = NULL;
    q.size = 0;

    int i;
    for(i = 1; i < argc; i++) {
        if(strcmp(argv[i], "x") == 0) {
            dequeue_struct(&q);
        }
        else {
            enqueue_struct(&q, atoi(argv[i]));
        }
    } // ปิด for

    // เคลียร์คิวที่เหลือ (ถ้าโจทย์ต้องการให้ dequeue จนหมดตอนจบ)
    while(q.size > 0) {
        dequeue_struct(&q);
    }

    return 0;
} // ปิด main ให้ครบ