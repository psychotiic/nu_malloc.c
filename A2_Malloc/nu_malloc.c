#include "nu_malloc.h"


void* nu_calloc(size_t count, size_t size) 
{
void *block = nu_malloc(count * size);
    if(block != NULL)
        memset(block, 0, count * size);
//printf("%d \n",block);
   // return block;  
return NULL;  
} 


void* nu_realloc(void* ptr, size_t size) 
{printf("we are in the realloc");
  heap_memory* Ptr;
   ptr = Ptr->next;
   printf("%d",ptr);
   ptr = NULL;
   printf("%d",ptr);
  return NULL; 
}

void nu_free(void* ptr)
{
  heap_memory *temp=&mlist; 
while(temp){ 
heap_size=HEAP_MEMORY; 
mlist.next=NULL; 
mlist.size=heap_size; 
mlist.is_available=MEMORY_AVAILABLE; 
mlist.memory=raw_memory; 
return 1; 
temp=temp->next; 
} 
}
void* nu_malloc(size_t size)
{ 
if ( size <= 0 ) { 
printf("ERROR\n"); 
return NULL; 
} 

heap_memory *temp=&mlist; 
int alloc_size=size+sizeof(heap_memory); 

while(temp) { 
if (temp->is_available == MEMORY_AVAILABLE) { 
if (temp->size >= alloc_size) { 
void * allocated_memory = (heap_memory*)(temp); 
printf("\ntemp=0x%x\n",temp); 
temp->size=size; 
temp->is_available=MEMORY_USED; 
temp->memory=(temp)+sizeof(temp->size)+sizeof(temp->is_available); 
temp->next = temp->memory+size; 
heap_size -= size; 

heap_memory * new_memory_ptr = temp->next; 
new_memory_ptr->is_available=MEMORY_AVAILABLE; 
new_memory_ptr->size=heap_size; 
return temp->memory; 
} 
} 
temp=temp->next; 
}//while 
printf("\nNo Memory Available\n"); 
return NULL; 
} 

void print_heap_allocations(){ 
heap_memory *temp=&mlist; 

printf("\n\tSize\tMemory-Ptr"); 
while(temp){ 
printf("\n\t%d\t%x ",temp->size,temp->memory); 
temp=temp->next; 
} 
printf("\n"); 
} 


int main() { 
init_memory_mgr(); 

print_heap_allocations(); 
void * m; 
m=nu_malloc(10); 
printf("\nallocated bytes:0x%x\n",m); 
print_heap_allocations(); 

m=nu_malloc(20); 
printf("\nallocated bytes:0x%x\n",m); 
print_heap_allocations(); 

m=nu_malloc(10); 
printf("\nallocated bytes:0x%x\n",m); 
print_heap_allocations(); 

m=nu_malloc(8); 
printf("\nallocated bytes:0x%x\n",m); 
print_heap_allocations(); 
//nu_free(10);
nu_calloc(10,10);
 heap_memory* Ptr;
nu_realloc(Ptr->next,15);
m=nu_malloc(100); 
printf("\nallocated bytes:0x%x\n",m); 
print_heap_allocations();
return 1; 
}
