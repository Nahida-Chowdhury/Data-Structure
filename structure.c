#include<stdio.h>
struct student
{
    int id;
    char name[20];
    char address[50];
};
int main()
{
    int n;
    for(int i=1; i<n; i++)
    {
        scanf("%d",&n);
        struct student student1;
        scanf("%d",&student1.id);
        printf("Student1.id =%s\n",student1.id);
        gets(student1.name);
        printf("Student1.name =%s\n",student1.name);
        gets(student1.address);
        printf("Student1.address =%s\n",student1.address);
    }
}

