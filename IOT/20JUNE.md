# 19JUNE
- char in while loop--> add space before %c --> buffer 
- pyramid pattern code 

## RECURSIONS 
- Function calls itself in a function multiple times-->recursive calls 
- needs termination condition otherwise ends up in infinite loop

    ```
    return_type func_name(arguments)
    {
         return func_name(arguments)
    }
    ```
 ex- 
 1. factorial function --> here if (x>1)--> call again else if (x==1|| x==0) return 1;
    - we have added this extra else if condition because if we get 1 or 0 then nothing would be returned so for 1 we would return 1
 2. fibonacci series --> 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
 
## STORAGE CLASSES 
  1. AUTOMATIC 
     - memory allocation at runtime
     - visible in block they are in 
     - every variable is automatic by default in C
     - initialised by **"GARBAGE VALUE "** by default 
     - as soon as we exit --> this memory **FREE** after code terminates 
     - keyword is auto (ex- **auto int a;**)
   2. STATIC 
      - Hold value between multiple function calls 
      - visible only to the block in which they are defined 
      - Intialised once used many times EX- count 
      - initialsed by **0** by default 
  3. EXTERNAL 
      - have link with external file 
      - no memory given 
      - File 1-> declare and call
      - File 2 -> define and memory allocate 
        - Example (COMMAND PROMPT)
        - to go to file --> properties--> copy path 
        - cd path 
        - to open it gcc untitled1.c Untitiled2.c -o combined 
        - COMBINED(file having both 1 2 and use external storage)
        - run combined in command prompt (write combined in cmd)
        - enter integer or input
        - cmd will give output  
  4. REGISTER
      - memory blocks in cpu (processor)
      - directly data is stored in memory of cpu (like in hardrive)
      - file open request-> saved in hard drive -> when access then come in RAM(interact with cpu)-> cpu takes data from RAM and save in register 
        ->
      - memory allocation directly in cpu but not 100% compulsion ki declare hogi hi depends o availability 
     
