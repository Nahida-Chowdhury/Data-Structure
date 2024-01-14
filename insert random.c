#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct studentinfo
{
    int roll;
    char name[20];
    struct studentinfo* next;
};
void displayLL(struct studentinfo* h)
{
    int count=0;
    if(h==NULL)
        printf("LL is empty");
    else
    {
        struct studentinfo *temp=h;
        while(temp!=NULL)
        {
            count++;
            printf("%s %d\n",temp->name,temp->roll);
            temp=temp->next;
        }
    }
    printf("%d\n",count);
}
void insertNthLL(struct studentinfo **h,int roll,char name[25],int N)
{
    int i;
    struct studentinfo *newN,*temp;
    newN=(struct student*)malloc(sizeof(struct studentinfo));

    temp=*h;
    newN->roll=roll;
    strcpy(newN->name,name);

    if(*h == NULL)
    {
        newN->next=NULL;
        *h = newN;
    }
    else if(N == 1)
    {
        newN->next=*h;
        *h=newN;
    }
    else
    {
        for(i=1;i<=N-2;i++)
            temp=temp->next;

        newN->next=temp->next;
        temp->next=newN;
    }

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

    insertNthLL(&head,14,"NAHIDA",3);
    displayLL(head);

}

