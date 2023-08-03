/*2)"1. Need to display different welcome messages depending on the operating system. Define the macro from gcc command. Implement a warning incase the macro is not defined.
for WINDOWS : Microsoft Windows Welcomes you
for Linux : Linux Welcomes you
for Mac : Mac Welcomes you"*/

 #include<stdio.h>
  
#ifndef V
#error define a macro
#endif

  int main()
  {
  #if V == 1
 
  printf("Microsoft windows welcomes you");
  
  #elif V == 2
  
  printf("linux welcomes you");
  
  #elif V == 3
  
  printf("Mac welcomes you");
  
  #endif
  }

