//write file on disk
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    FILE *fptr = fopen("file1.txt","w");
    if(fptr == NULL)
    {
        printf("\nERROR");
        exit(1);    
    }
    printf("\nEnter any number: ");
    scanf("%d", &num);

    fprintf(fptr,"%d", num);
    fclose(fptr);

    return 0;
}