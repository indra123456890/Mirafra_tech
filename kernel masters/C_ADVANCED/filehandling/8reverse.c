#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main(void) {
  char str[MAX_LENGTH];
  int length, i;
  FILE *fptr;

  // Get a string from the user
  printf("Enter a string: ");
  fgets(str, MAX_LENGTH, stdin);

  // Remove the newline character at the end of the string
  length = strlen(str);
  if (str[length - 1] == '\n') {
    str[length - 1] = '\0';
  }

  // Open the file for writing
  fptr = fopen("file.txt", "w");
  if (fptr == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  // Write the string to the file
  fprintf(fptr, "%s", str);

  // Close the file
  fclose(fptr);

  // Open the file for reading
  fptr = fopen("file.txt", "r");
  if (fptr == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  // Read the string from the file
  fgets(str, MAX_LENGTH, fptr);

  // Close the file
  fclose(fptr);

  // Print the string in reverse
  for (i = strlen(str) - 1; i >= 0; i--) {
    printf("%c", str[i]);
  }
  printf("\n");

  return 0;
}

