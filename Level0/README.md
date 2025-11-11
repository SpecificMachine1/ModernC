#Takeaways:
- C is imperative, compiled, and portable
- Identifiers have to be declared (typed)
- Identifiers may have several (consistent) declarations
- Declarations are scoped
- Declarations specify identifiers, definitions specify objects
- An object is defined when it is initialized
- Missing elements in initializers default to 0
- C is 0-indexed
- Each object/function must have just one definition
- Domain iteration should use for
- The loop variable should be defined in the intial part of for:
    ```c
    for (int i = 0; i < 10; ++i) {...}
    ```
    not
    ```c
       int i;
       for (i = 0; i < 5; i++) {...}
     ```
    if it isn't going to be used elsewhere
