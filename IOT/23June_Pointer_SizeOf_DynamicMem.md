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
-  function in ---------***<stdlib.h>***---------------
  1. malloc() -> MEMORY ALLOCATION--> allocates single block allocate
        - ptr =(data_type*)malloc(size); -> size by sizeof operator 
        - resrves meory of given amount of bytes
        - return value is void pointer hence we typecast it to int 
        - if space insufficient (in heap) then returns null pointer 
        - by default initialised by ***garbage value***
        - int *ptr;
        - ex- ptr=(int*)malloc(n*sizeof(int)); //(int*) for typecast 
        - ptr=(int*)malloc(sizeof(int));
  2. calloc() -> CONTIGUOUS ALLOCATION -->allote "N" memory block allocate
        - ptr =(data_type*)malloc(n,size_in_bytes); -> size and number 
        - by default initialised by ***0 value***
        - ex- ptr=(int*)calloc(n,sizeof(int));
        - ptr=(ptr-type*)realloc(ptr,new_size_in_bytes);
  3. realloc() ->REALLOCATION ->  reallocate memory to calloc and malloc
  4. change size of prev llocated memory 
        -  realloc(ptr,new_size); //new size= new no. of block 
  4. free() -> free dynamically allocated memory , and saves space complexity 
        - free(ptr);
   
