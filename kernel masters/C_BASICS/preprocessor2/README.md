DATE : 05-NOV-2022 TOPIC : PREPROCESSOR

1)"1. Need to display different welcome messages depending on the operating system.
 Define the macro inside the code and compile the following into 3 different executables.
for WINDOWS : Microsoft Windows Welcomes you
for Linux : Linux Welcomes you
for Mac : Mac Welcomes you"


2)"1. Need to display different welcome messages depending on the operating system.
 Define the macro from gcc command. Implement a warning incase the macro is not defined.
for WINDOWS : Microsoft Windows Welcomes you
for Linux : Linux Welcomes you
for Mac : Mac Welcomes you"


3)define a macro to generate swapping function for int, float ,
 double and character datatypes, as a generic function using macros.


4)define a macro to generate a generic function that takes prints an array in reverse order.
 Generate the functions for int, float, double data types.


5)define a macro that generates a function that returns the sum of array elements,
 for different data typed arrays.


6)in super market program, convert your header file into a header file
 that can be copy pasted only once, using conditional compiler directives.


7)" Implement a macro to find the size of a variable in bytes ( implement your own sizeof operator).


Size in bytes can be derived by converting the address of a variable
into character address ,and then subtracting it from the next address (address + 1).


int x;
sizeof x will be : (char *)(&x + 1) - (char *)&x;
If we implement this as a function, we will have to implement
different functions for different data types of the variables.
Implement this using macro, so that it can work for any data type of the variable. "




8) Implement  a macro to find the size of a datatype
 when the datatype keyword is provided as macro parameter.

9) Read Pre-processor directives chapter from textbook

10) Complete textbook excercises.
