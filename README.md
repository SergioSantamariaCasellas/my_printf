# Project Execution Guide

Follow the steps below to execute the project with the `main.c` file.

---

## Steps for Execution with `main.c`

### 1. Update the `Makefile`
   - **a.** Delete the `tests` folder path inside the `SRC`.
   - **b.** Change the executable name to whatever name you want.
   - **c.** Modify the `$(NAME): $(OBJ)` section to look like this:

     ```
     $(NAME): $(OBJ)
         gcc -o $(NAME) $(OBJ)
     ```

   - **d.** Add `src/main.c` to the `SRC` section:
     ```
     SRC = src/main.c \
     ```

---

### 2. Delete the Tests Folder
Remove the entire `tests` folder from your project.

---

### 3. Create a `main.c` File in the `src` Folder
   - Add the header file path at the beginning of your file:
     ```
     #include "../include/my.h"
     ```
   - Use this example code to test your setup:
     ```
     int main(void)
     {
         int num = 1;

         my_printf("my_printf : %d\n", num);

         return 0;
     }
     ```

---

### 4. Enjoy!
Compile and run your program, and enjoy testing your implementation!

---

## Notes
- Ensure all paths are correct and consistent with your project structure.
- The example provided assumes you have a function named `my_printf()` defined in your project.

Happy coding!

Written by Sergio Santamaria.
