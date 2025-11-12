# Takeaways
Control
- main (and other function calls) and return transfer control unconditionally
- 


  **if for do while switch**
  all transfer control conditionally and will be covered in this level
- there are also: 
  ```c
  cond ? A : B                                                      \\ternary operator
  #if, #ifdef, #ifndef, #elif, #elifdef, elifndef, #else, #endif    \\preprocessor conditionals
  _Generic                                                          \\type generic expression
  ```
 that transfer control conditionally but come later
- 0 represents logical False
- any value different from 0 represents logical true
- don't compare to 0, false or true
- all scalars have a truth value

```c
  if (condition) {
    secondary block;
  }
  \\or
  if (condition) {
    secondary-block0;
  } else {
    secondary-block1;
  }
```

```c
  \\multiple identifiers may be initialized, expression can be increment or decrement 
  for (initialization-clause;termination-condition;expression) {
      loop-body;
  }
 for(;;){
  block  \\runs until a break is hit
 }
```

```c
  while (condition) {
    secondary-block;
  }

  while(true) {
    block     \\runs until a break is hit
  }
```

```c
  do {
    secondary-block;    \\always runs at least once
  } while (condition);
```
**break** stops the loop immediately

**continue** skip the rest of the loop body, and re-evaluate the condition, and continue from the start if true

**argc** first parameter to main, argument count, is a count of the arguments on the command line, integer

**argv** second parameter to main, argument vector, an array of character pointers (or an array ofstrings)

I have seen one or two places "the last element of argv is NULL" which may explain why these programs have argv[argc+1], I am still confused about that 

If main doesn't need the command line it can be like:

```c
int main(void) {
    main-block;
    }
```
