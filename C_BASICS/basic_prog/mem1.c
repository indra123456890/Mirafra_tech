#include <stdio.h>
#include <string.h>
  
int main()
{
    char str1[5] = "kumar"; // Array of size 100
    char str2[6] = "indr"; // Array of size 5
  
    puts("str1 before memmove ");
    puts(str1);
  puts(str2);
    /* Copies contents of str2 to sr1 */
    memmove(str1, str2, sizeof(str2));
//memcpy(str1,str2,sizeof(str2));
  
    puts("\nstr1 after memmove ");
//puts("\nstr1 after memcpy");
    printf("dest:%s\n",str1);
    printf("source:%s\n",str2);
    return 0;
}
