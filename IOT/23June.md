# POINTER ARITHMETIC
- int a= 25;
- int *p=&a;
- p=p+1;-> POINTER INCREMENT(address inc by 4 bytes)

# DYNAMIC MEMORY ALLOCATION
- allocate memory at runtime 
- memory can be inc or dec at time of execution(vs static memory allocation)
- static= array , Dynamic-> linked list , trees 
- 4 function in ---------***<stdlib.h>***---------------
  1. malloc() -> allocates single block allocate
        - ptr =(data_type*)malloc(size); -> size by sizeof operator 
  3. calloc() -> allote many memory block allocate
        - ptr =(data_type*)malloc(size); -> size and number 
  5. realloc() -> reallocate memory to calloc and malloc
        -  realloc(ptr,new_size);
  7. free() -> free dynamically allocated memory , and saves space complexity 
        - free(ptr);
