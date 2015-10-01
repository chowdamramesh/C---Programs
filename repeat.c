# include <stdio.h>
# include <string.h>
int main()
{
	char str1[20],str2[20];
	int count=0,i,j,flag,temp=0;

	//printf("enter the string 1");
	scanf("%s",str1);
	//printf("enter the string 2");
	scanf("%s",str2);


	for(i=0;i<strlen(str1);i++){
		for(j=0;j<strlen(str2);j++){
				if(str1[i]==str2[j]){
					count++;
					j=strlen(str2);
					break;
				}
						
			}
					
			
	}
		
	
	printf("%d",count);

}
