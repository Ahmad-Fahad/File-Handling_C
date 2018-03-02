#include<stdio.h>
int main()
{
    int n;
    FILE *fpi,*fpO;
    fpi = fopen("File_1.txt","r");
    fscanf(fpi,"%d",&n);
    fclose(fpi);
    fpO = fopen("File_2.txt","w");
    fprintf(fpO,"%d",n);
    fclose(fpO);
}
