# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(){

	//char *str=(char*)malloc(sizeof(char)*20);
	char string[100];
	//printf("enter the string");
	scanf("%[^\n]",string);

	int length,i,j,count=0;
	length=strlen(string);

	
	for(i=0;i<length;i++){
		
			if(string[i]==string[i+1])
			string[i+1]=string[i+2];		
	}

	string[i]=='\0';
	
		//printf("%s",string);
	for(i=0;i<length;i++){
		
			if(string[i]==string[i+1])
			string[i+1]=string[i+2];		
	}
		string[i]=='\0';
	
	//	printf("%s",string);
    for(i=0;i<length;i++){
		
			if(string[i]==string[i+1])
			string[i+1]=string[i+2];		
	}
		string[i]=='\0';
	
	//	printf("%s",string);

	for(i=0;i<length;i++){
		
			if(string[i]==string[i+1])
			string[i+1]=string[i+2];		
	}
		string[i]=='\0';
	
		printf("%s",string);	
	
}	
