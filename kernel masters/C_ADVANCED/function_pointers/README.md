1)Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.

2)Rewrite the calculator program using array of function pointers.

3)"Write the calculator program using a function that accepts a function pointer and the operand values as arguments and invokes it. In main function, simply invoke this function by sending appropriate function address, based on operator chosen.
eg.,
in main
case '+' :invokeptr(add , x,y);


invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf(""%d\n"",fptr(x,y));
}"

4)
"Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character as arguments and invokes appropriate function based on the character. In main function, simply invoke this function by sending the array and operator character and operands as input.
eg.,
in main
case '+' :invokeptr( fparr, x,y, ch);


invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
//based on ch value, choose which index to apply on fptr and invoke the function
}

5) Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);

6) sorting a list of names received on command line argument, with options like -r and -i using function pointers.

7) Find out the application of double pointer in above assignments (In which assignments have we used a double pointer above?).

8) Repeat command line argument string sorting using swapping function using call by reference of pointers.

9) Create a two dimentional array (array of strings) using a double pointer and sort the strings alphabetically. Here number of strings, and each string size, both are decided during runtime.


10) Create a two dementional integer array to store the marks of n students in a class (Each student takes different number of subjects) so the number rows and columns are dynamic here. Read the marks of every student and calculate average marks, and print who is the topper (with highest average marks).




