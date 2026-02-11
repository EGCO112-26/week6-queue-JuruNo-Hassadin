#include "Queue.h"
#include <string.h>

int main(int argc, char *argv[]) {
    Queue q;
    initQueue(&q);

    for (int i = 1; i < argc; i++) {

        if (strcmp(argv[i], "x") == 0) {
            int value = dequeue(&q);
            if (value == -1) {
                printf("empty queue\n");
            } else {
                printf("%d\n", value);
            }
        } 
        else {
            int num = atoi(argv[i]);
            enqueue(&q, num);
        }
    }

    return 0;
}
