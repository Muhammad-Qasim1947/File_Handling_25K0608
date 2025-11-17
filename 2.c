#include <stdio.h>
int main(){
	char filename[100];
	
	printf("Enter File Name : ");
	scanf("%s",filename);
	
    FILE *fptr ;
    
    fptr = fopen(filename,"w");
    
    fclose(fptr);
    
    return 0;
}
