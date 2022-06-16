# 15 June
## control statements 
### SELECTION/BRANCHING (if ,if else , if else if , switch)
1. IF -if true then execute otherwise no ,  multiple conditions by logical operations 
            -here all if are checked if nested 
            (ex- email and password if we click forget pswd then it ask for further info )
3. IF ELSE - we get two block of codes here 
4. IF ELSE IF-
            -here all else -if are NOT checked 
            - atleast 2 statements checked (if always checked ) if if statement is false
6. SWITCH- 
          switch (expression){
          case value1: statement 
                       break;(optional)
          default : statement;
            - expression must be of int or char type (here agar koi expression hota to result may vary )
            - case value must be char or int constant 
            - case value only inside block of switch 
            - only first true execute and rest out of it due to break
            - if no break , then all cases executed after true stament are executed 
            - only one statement executed unlike if else-if 
            
 if else<<<if elseif <<<switch
            
### ITERATIVE STATEMENTS 
1. WHILE -
2. DO-WHILE -
3. FOR-
                               
### JUMP STATEMENTS 
1. BREAK - used to exit a for or while loop 
2. CONTINUE - used in loops to skip
3. GOTO -
                               x:
                               goto x; 
                               checkpoint 
                               this will check location of x in code and wont be terminated till we want i.e. is in infinite loop
                               void checkEvenOrNot(int num)
                                                {
                                                    if (num % 2 == 0)
                                                    // jump to even
                                                        goto even; 
                                                    else
                                                    // jump to odd
                                                        goto odd; 

                                                even:
                                                    cout << num << " is even";
                                                    // return if even
                                                    return; 
                                                odd:
                                                    cout << num << " is odd";
                                                }
