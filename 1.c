#include <stdio.h>
int main(){
    int num , num2 ;
    FILE *fptr ;
    
    fptr = fopen("D:\\data.txt","w");
    printf("%p\n", fptr);
    if (fptr == NULL){
        printf("error to open the file\n");
        return 1 ;
    }
    printf("Enter The Number : ");
    scanf("%d",&num);
    fprintf(fptr,"%d\n",num);
    printf("Enter The Number : ");
    scanf("%d",&num2);
    fprintf(fptr,"%d\n",num2);

    fclose(fptr);
}
