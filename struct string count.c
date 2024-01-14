#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct studentinfo
{
    int roll;
    char name[20];
    struct studentinfo *next;
};
void displayLL(struct studentinfo*h)
{
    int count=0;
    if(h==NULL)
        printf("LL is empty");
    else
    {
        struct studentinfo*temp=h;
        while(temp!=NULL)
        {
            count++;
            printf("%s %d\n",temp->name,temp->roll);
            temp=temp->next;
        }
    }
    printf("%d",count);
}
int main()
{
    struct studentinfo a,b,c,*temp,*head;
    head=&a;
    strcpy(a.name,"ABC");
    a.roll=101;
    a.next=&b;

    strcpy(b.name,"DEF");
    b.roll=201;
    b.next=&c;

    strcpy(c.name,"GHI");
    c.roll=301;
    c.next=NULL;

    displayLL(head);
    return 0;
}

