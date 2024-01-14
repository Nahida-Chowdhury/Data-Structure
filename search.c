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
int findroll(struct studentinfo*h,char name[])
{
    struct studentinfo *temp;
    temp=h;
    while(temp!= NULL)
    {
        if(strcmp(temp->name,name)==0)
            return temp->roll;
        else temp=temp->next;
    }
    return -1;
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

    int t = findroll(head,"ABC");
    if(t==-1)
    {
        printf("Not found");
    }
    else
        printf("%d\n",t);

    displayLL(head);
    return 0;
}
