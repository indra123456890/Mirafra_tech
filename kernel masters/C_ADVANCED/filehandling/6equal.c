#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp1,*fp2;
int ch1,ch2,ch;
char fname1[50],fname2[50];

printf("enter the first file name\n");
//gets(fname1);
scanf("%s",fname1);

printf("Enter the second file name\n");
//fgets(fname2);
scanf("%s",fname2);

fp1=fopen(fname1,"r");
fp2=fopen(fname2,"r");


if(!fp1)
{
printf("open fails\n");
}
else if(!fp2)
{
printf("open fails\n");
}
else
{
ch1=fgetc(fp1);
ch2=fgetc(fp2);

while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
ch1 = fgetc(fp1);
ch2 = fgetc(fp2);
}

if (ch1 == ch2)
ch1= 0;
//printf("both files are equal\n");
else if (ch1 != ch2)
ch1 =1;
// printf("both files are not equal\n");
}
switch(ch1)
{
case 0:printf("both files are equal\n");
      break;
case 1:printf("both files are not equal\n");
      break;
}

}


