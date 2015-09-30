# include <stdio.h>

int main(){
	int i,number=0,count=0,rem;


	while(number<100){

		if(number<10){
		 	if(number==7);
			count++;
		}

		else if(number>10&&number<69){
				for(i=number;i<10;i++){

					rem=i%10;
					if(rem==7){
						count++;
					}
					i=i/10;	
				}
		}
		else if(number>69&&number<100){
			for(i=69;i<100;i++){
				int t;
				t=number/10;
				if(t==7){
				count++;
				}
				number++;
			}	
		}


		number++;

	}
	printf("%d",count);	

}
