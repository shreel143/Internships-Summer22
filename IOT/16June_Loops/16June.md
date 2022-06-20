# 16 JUNE
## INTRO TO LOOPS -
- Same code many times 
- Traversing- Searching sorting 
- Two types-
  1. Entry controlled(For , While) 
  2. Exit control(Do While)
- Escape sequences 
  1. \n -- new line 
  2. \v -- vertical tab 
  3. \t -- horizontal tab 
  4. endl not available in c lang

### A. FOR LOOP
- only for int datatypes 
- can't be used for char data type 


    ```
    for (initialisation(a) ; condition(b)(for termination) ; updation(c))
      { 
      block of code;
      }
    ```
      
 ### B. WHILE LOOP
 -  Advantage of WHILE LOOP OVER FOR == **we can allow updation/modification by user**
 -   to compare char use "==" and char value in single ' ' 
 -   REASON- WHEN WE DO CHAR INPUT , BUFFER PROBLEM  EK BUFFER INPUT AA RAHA HAI SO  FIRST TIME ME Y AND BUFFER INPUT LE RAHA THA 
 -    IN CHAR--> BUFFER INPUT--> TO RESOLVE WE ADD EXTRA SPACE BEFORE %C IN SCANF i.e.--> scanf(" %c",&ans)
 
      ```
      initialisation (a)
        while (condition(b))
        { 
         block of code;
          updation(c);
        }     
     ```
    
  ### C. DO-WHILE LOOP
  - execution --> updation --> condition check 
  
    ```
    initialisation(a) 
    do
    {
        block of code;
        updation(b);
    }while (condition(c));
    ```
### D. INFINITE LOOPS 
- used in making games and operating systems
- wont end until we want it to 

```
for( ; ; )
{
  printf("*");
}

while(1)
{
  printf("*");
}

int a;
while(a>0)
{
  printf("*");
}

int a;
while(a>0)
{
  printf("*");
  a++;
}

```

## NESTED LOOPS
- in case of 2D we use this 
- rows - i 
- columns - j - inner loop 
