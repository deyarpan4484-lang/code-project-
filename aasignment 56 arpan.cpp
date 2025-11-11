#include<stdio.h>

struct book
{
    int id;
    char name[50];
    float price;
};

int main()
{
    struct book b[10];
    int i;

    for(i=0;i<10;i++)
    {
        printf("Enter book id name and price of book %d:\n",i+1);
        scanf("%d",&b[i].id);
        scanf("%s",b[i].name);
        scanf("%f",&b[i].price);
    }

    printf("\nBook Details:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t%s\t%.2f\n",b[i].id,b[i].name,b[i].price);
    }

    return 0;
}
