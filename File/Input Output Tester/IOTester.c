#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fac,*fck;
    int a,b;
    fac = fopen("accepted.txt","r");
    fck = fopen("output.txt","r");

    while(fscanf(fac,"%d",&a) != EOF){
    fscanf(fck,"%d",&b);

    if(a != b){
        printf("Wrong answer %d will be %d\n",b,a);
    }
    else{
        printf("Accepted\n");
    }

}
    fclose(fac);
    fclose(fck);
    return 0;
}
