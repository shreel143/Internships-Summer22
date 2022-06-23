# POINTER ARITHMETIC
- int a= 25;
- int *p=&a;
- p=p+1;-> POINTER INCREMENT(address inc by 4 bytes)

# SIZEOF OPERATOR
- cout<<sizeof(a);

# DYNAMIC MEMORY ALLOCATION
- allocate memory at runtime 
- memory can be inc or dec at time of execution(vs static memory allocation)
- static= array , Dynamic-> linked list , trees 
- 4 function in ---------***<stdlib.h>***---------------
  1. malloc() -> allocates single block allocate
        - ptr =(data_type*)malloc(size); -> size by sizeof operator 
        - ex- ptr=(int*)malloc(n*sizeof(int));
        - ptr=(int*)malloc(sizeof(int));
  3. calloc() -> allote many memory block allocate
        - ptr =(data_type*)malloc(size); -> size and number 
        - ex- ptr=(int*)calloc(n,sizeof(int));
  5. realloc() -> reallocate memory to calloc and malloc
        -  realloc(ptr,new_size); //new size= new no. of block 
  7. free() -> free dynamically allocated memory , and saves space complexity 
        - free(ptr);
