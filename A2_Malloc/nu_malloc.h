// Author: David White
// Date:  2/5/14
// About:  This program contains my own malloc, calloc, realloc, and free funct.
// Program:  nu_malloc.c
//   
// Overall everything works and there is a main with test calls to the functions
// and test print statements for the heap memory that is allocated.
// This program basically is my own memory map.


// Included for the `size_t` type. 
#include <string.h>
#include <stdio.h> 

#define MEMORY_AVAILABLE 1 
#define MEMORY_USED 0 


#define HEAP_MEMORY 1024 // This allocates a MB for use.

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
void printHeap();
