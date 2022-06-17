# FUNCTIONS-
- large program into basic building blocks small 
- enclosed by {}
- program = collection of function
- main advantage= reusability 

## ASPECTS OF FUNCTIONS 
### FUNCTION DECLARATION
- To name the function 
  
  `return_type functionName( arguments);`

### FUNCTION DEFINITION

    `return_type functionName( arguments){
      block of code
      }`
 
### FUNCTION CALL
- in main function

     `functionName(arguments)`
     
## Types -
- library 
  - (built in (comes with compiler / predefined)
  -  declartaion in header 
  -  body in .dll(dynamic link libraries at runtime theses are linked ) 
  -  ex- printf(),scanf() stdio.h .ddl
- User defined 
  - created by user
  - declared and defined outside main called in main 1.

## differnt type of function calling
1.  without arg + without return == void main()
2.  without arg + with return type == int main()
3.  with arg + without return type == void main(int a)
4.  with arg + with return type == int main(int a)

## POINTS TO REMEMBER-
- declare(with ;) --> call --> define (end no semicolon)
- as at compile time both declaration and definition is checked so it is preferred to do both at same time 
- concept of global and local variable 
