/*5) Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);*/




int printf(char *,...);
int scanf(char *,...);
int main()
{
int a;
int(*ptr)(char *,...);
ptr=printf;
ptr("enter a number\n");
ptr=scanf;
ptr("%d",&a);
ptr=printf;
ptr("%d",a);
}


