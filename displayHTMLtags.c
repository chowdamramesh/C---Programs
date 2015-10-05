/* a C program to display all HTML tags in the given file, this program is to identify all HTML tags using C strings. */
#include<stdio.h>       /* header files*/
#include<stdlib.h>      
#include<string.h>     
void main()             // start of program
{
char c[100000],ch;      // delaration of variables
int length;
FILE *fptr;
int flag=0;
fptr=fopen("sample.html","r");
if(fptr == NULL)       
{
printf("error to open the file");
}
else 
ch=fgetc(fptr);
int i=0;
while(ch!=EOF)
{                               //start of while loop
//printf("%c",ch);
c[i]=ch;
i++;
ch=fgetc(fptr);
}                               //end of while loop
c[i]='\0';
//printf("%s", c);
length=strlen( c);
//printf("%d",length);
for(i=0;i<=length;i++)
{                               //start of for loop
if (c[i]=='<')
{                               //start of if condition
flag=1;
}                               //end of if condition
else if(c[i]!='>')
{                               //start of else if condition
printf("%c",c[i]);
}                               //end of else if condition
else 
printf("\n");
}                               //end of for loop
}                               //end of main
