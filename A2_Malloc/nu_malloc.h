// Included for the `size_t` type. 
#include <string.h>
#include <stdio.h> 

#define MEMORY_AVAILABLE 1 
#define MEMORY_USED 0 
#define HEAP_MEMORY 1024 

char raw_memory[HEAP_MEMORY]; 
typedef struct memory_chunk heap_memory; 
struct memory_chunk{ 
heap_memory *next; 
size_t size; 
size_t is_available; 
void * memory; 
} ; 

int heap_size=HEAP_MEMORY; 
heap_memory mlist; 

int init_memory_mgr(){ 
heap_size=HEAP_MEMORY; 
mlist.next=NULL; 
mlist.size=heap_size; 
mlist.is_available=MEMORY_AVAILABLE; 
mlist.memory=raw_memory; 
return 1; 
}

void* nu_malloc(size_t);
void* nu_calloc(size_t, size_t);
void* nu_realloc(void*, size_t);
void nu_free(void*);
void print_heap_allocations();