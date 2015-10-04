# include <stdio.h>
# include <stdlib.h>
# include <string.h>
struct 
{
int date,month,year;
int choice;
}given;

void main()
{
int i;
char string[4];
struct given ;

printf("enter choice");
scanf("%d",&given.choice);

if(given.choice==1)
{
printf("Enter the day");
scanf("%d",&given.date);
}

if(given.choice==2)
{
printf("Enter the month");
scanf("%d",&given.month);
switch(given.month)
{
case 1:
strcpy(string,"JAN");
break;
case 2:
strcpy(string,"FEB");
break;
case 3:
strcpy(string,"MAR");
break;
case 4:
strcpy(string,"APR");
break;
case 5:
strcpy(string,"MAY");
break;

case 6:
strcpy(string,"JUN");
break;

case 7:
strcpy(string,"JUL");
break;

case 8:
strcpy(string,"AUG");
break;

case 9:
strcpy(string,"SEP");
break;

case 10:
strcpy(string,"OCT");
break;

case 11:
strcpy(string,"NOV");
break;

case 12:
strcpy(string,"DEC");
break;
}

}

if(given.choice==3)
{
printf("Enter the year");
scanf("%d",&given.year);
}struct given ;

printf("enter choice");
scanf("%d",&given.choice);

if(given.choice==1)
{
printf("Enter the day");
scanf("%d",&given.date);
}

if(given.choice==2)
{
printf("Enter the month");
scanf("%d",&given.month);
switch(given.month)
{
case 1:
strcpy(string,"JAN");
break;
case 2:
strcpy(string,"FEB");
break;
case 3:
strcpy(string,"MAR");
break;
case 4:
strcpy(string,"APR");
break;
case 5:
strcpy(string,"MAY");
break;

case 6:
strcpy(string,"JUN");
break;

case 7:
strcpy(string,"JUL");
break;

case 8:
strcpy(string,"AUG");
break;

case 9:
strcpy(string,"SEP");
break;

case 10:
strcpy(string,"OCT");
break;

case 11:
strcpy(string,"NOV");
break;

case 12:
strcpy(string,"DEC");
break;
}



}

if(given.choice==3)
{
printf("Enter the year");
scanf("%d",&given.year);
}
struct given ;
printf("enter choice");
scanf("%d",&given.choice);

if(given.choice==1)
{
printf("Enter the day");
scanf("%d",&given.date);
}

if(given.choice==2)
{
printf("Enter the month");
scanf("%d",&given.month);
switch(given.month)
{
case 1:
strcpy(string,"JAN");
break;
case 2:
strcpy(string,"FEB");
break;
case 3:
strcpy(string,"MAR");
break;
case 4:
strcpy(string,"APR");
break;
case 5:
strcpy(string,"MAY");
break;

case 6:
strcpy(string,"JUN");
break;

case 7:
strcpy(string,"JUL");
break;

case 8:
strcpy(string,"AUG");
break;

case 9:
strcpy(string,"SEP");
break;

case 10:
strcpy(string,"OCT");
break;

case 11:
strcpy(string,"NOV");
break;

case 12:
strcpy(string,"DEC");
break;
}
}
if(given.choice==3)
{
printf("Enter the year");
scanf("%d",&given.year);

}if((given.year%4)==0&&given.date<=29&&given.month==2)
{
printf("%d/%s/%d",given.date,string,given.year);
}
else if(given.month==4||given.month==6||given.month==9||given.month==11&&given.date<=30)
{
printf("%d/%s/%d",given.date,string,given.year);
}
else if(given.date>0&&given.date<31&&given.month>0&&given.month<12&&(given.year%4)!=0)
{
printf("%d/%s/%d",given.date,string,given.year);
}
else
{
printf("invalid input");
}
}

