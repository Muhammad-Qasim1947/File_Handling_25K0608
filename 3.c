#include <stdio.h>
int main(){
	FILE *fptr = NULL ; 
	char userdata[500];
	
	fptr = fopen("abc.txt","r");
	if(fptr == NULL){
		printf("ERROR");
		return 1 ;
	}
	
	while(fgets(userdata,500,fptr) != NULL){
		printf("%s",userdata);
	} 
	
	fclose(fptr);
}
