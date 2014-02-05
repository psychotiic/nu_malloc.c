#include "nu_malloc.h"

void* nu_calloc(size_t count, size_t size) 
{
void *block = nu_malloc(count * size);
    if(block != NULL)
        memset(block, 0, count * size);
printf("%d \n",block);
printf("test");
   // return block;  
return NULL;  
}
