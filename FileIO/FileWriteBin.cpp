//Write Binary file to disk
#include<stdio.h>
#include<stdlib.h>

struct StThreeNumber
{
    int num1, num2, num3;
};

int main()
{
    struct StThreeNumber number;
    int num;
    FILE *fptr = fopen("Program.bin", "wb");

    if(fptr == NULL)
    {
        printf("\nERROR");
        exit(1);
    }

    for(int i=0; i<5; i++)
    {
        number.num1 = i;
        number.num2 = 2*i;
        number.num3 = 2*i + 3;

        fwrite(&i, sizeof(struct StThreeNumber),1, fptr);
    }
    return 0;
}