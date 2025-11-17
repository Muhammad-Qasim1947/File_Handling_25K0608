#include <stdio.h>
int main(){
	char filename[100];
	char input[50];
	
	printf("Enter File Name : ");
	scanf("%s",filename);
	
    FILE *fptr ;
    fptr = fopen(filename,"w");
    
    printf("\nEnter Your Input : ");
    scanf(" %[^\n]",input);
    fprintf(fptr,"%s",input);

    fclose(fptr);
    
    return 0;
}
