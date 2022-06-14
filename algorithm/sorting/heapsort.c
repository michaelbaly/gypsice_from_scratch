/**
 * @file heapsort.c
 * @author Xin Bai (xbai@asiatelcom.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "util_basic.h"

#define PARENT(i) floor(i/2) 
#define LEFT(i)   (2*(i))
#define RIGHT(i)   (2*(i) + 1)

typedef struct heap_s {
    uint32 * head;
    uint32 size;
}heap_t;

/*
 * Time complex: O(logn)
*/
void max_heapify(heap_t *heap, uint32 i)
{
    uint32 l, r, largest;
    l = LEFT(i);
    r = RIGHT(i);

    if (l < heap->size && heap->head[l] > heap->head[i]) {
        largest = l;
    } else largest = i;

    if (r < heap->size && heap->head[r] > heap->head[largest]) {
        largest = r;
    }
    // current largest node
    if (largest != i) {
        swap(heap->head[i], heap->head[largest]);
        max_heapify(heap, largest);
    }
}

/**
 * @brief build max heap
 * 
 */

void build_max_heap(heap_t *heap)
{
    heap->size = sizeof(heap->head);
    for (int i = floor(heap->size); i >= 1; i--) {
        max_heapify(heap, i);
    }
}

void max_heap_print(heap_t *heap)
{
    // TODO:
    
}