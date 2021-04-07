//Write Binary file to disk
#include<stdio.h>
#include<stdlib.h>

struct StThreeNumber
{
    int num1, num2, num3;
};

void WriteTofile()
{
    struct StThreeNumber number;
    int num;
    FILE *fptr = fopen("Program.bin", "wb");

    if(fptr == NULL)
    {
        printf("\nERROR");
        exit(1);
    }

    for(int i=1; i<5; i++)
    {
        number.num1 = i;
        number.num2 = 2*i;
        number.num3 = 2*i + 3;

        fwrite(&i, sizeof(struct StThreeNumber),1, fptr);
    }
}
void ReadFromFile()
{
    struct StThreeNumber number;
    int num;
    FILE *fptr = fopen("Program.bin", "rb");

    if(fptr == NULL)
    {
        printf("\nERROR");
        exit(1);
    }

    for(int i=1; i<5; i++)
    {
        fread  (&i, sizeof(struct StThreeNumber),1, fptr);
        printf("num1: %d, num2: %d, num3: %d", number.num1, number.num2, number.num3);
    }
}

int main()
{
    WriteTofile();
    ReadFromFile();

    return 0;
}
