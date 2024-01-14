#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct studentinfo
{
    char name[20];
    int roll;
    struct studentinfo *next;
};

void displayLL(struct studentinfo *h)
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

int findroll(struct studentinfo *h,char name[])
{
    struct studentinfo *temp;
    temp=h;

    while(temp!=NULL)
    {
        if(strcmp(temp->name,name)==0)
            return temp->roll;
        else
            temp=temp->next;
    }
    return -1;
}

void insertfirst(struct studentinfo **hptr,char name[],int roll)
{
    struct studentinfo *temp;
    temp=(struct studentinfo*)malloc(sizeof(struct studentinfo));
    strcpy(temp->name,name);
    temp->roll=roll;
    temp->next=*hptr;
    *hptr=temp;
}

void deletefirst(struct studentinfo **h)
{
    struct studentinfo *temp;
    temp=*h;
    if(temp!=NULL)
    {
        *h=temp->next;
        free(temp);
    }
    else
    {
        printf("LL is empty");
    }
}

void insertlast (struct studentinfo **hptr,char name[],int roll)
{
    struct studentinfo *temp1;
    temp1=(struct studentinfo*)malloc(sizeof(struct studentinfo));
    strcpy(temp1->name,name);
    temp1->roll=roll;
    temp1->next=NULL;

    struct studentinfo *temp2=*hptr;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

void deletelast(struct studentinfo **h)
{
    struct studentinfo *temp;
    temp=*h;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}

void insertNthLL(struct studentinfo **h,int roll,char name[25],int N)
{
    int i;
    struct studentinfo *newN,*temp;
    newN=(struct studentinfo*)malloc(sizeof(struct studentinfo));
    temp=*h;
    newN->roll=roll;
    strcpy(newN->name,name);
    if(h==NULL)
    {
        newN->next=NULL;
        newN=*h;
    }
    else if(N==1)
    {
        newN->next=*h;
        *h=newN;
    }
    else
    {
        for(i=1; i<=N-2; i++)
            temp=temp->next;
        newN->next=temp->next;
        temp->next=newN;
    }
}

void deleteNthLL(struct studentinfo **h,int N)
{
    int i;
    struct studentinfo *newN,*temp=*h,*temp2;

    if(h==NULL)
    {
        printf("There is no node in LL");
        return;

    }
    else if(N==1)
    {
        *h=temp->next;
        free(temp);
    }
    else
    {
        for(i=1;i<=N-2;i++)
            temp=temp->next;
        temp2=temp->next;
        temp->next=temp2->next;
        free(temp2);
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
    b.roll=102;
    b.next=&c;

    strcpy(c.name,"GHI");
    c.roll=103;
    c.next=NULL;

    insertfirst(&head,"NAHIDA",14);
    deletefirst(&head);
    insertlast(&head,"NAHIDA",14);
    deletelast(&head);
    insertNthLL(&head,14,"NAHIDA",2);
    //deleteNthLL(&head,3);
    int t=findroll(head,"ABC");
    if(t==-1)
        printf("NOT FOUND\n");
    else
        printf("%d\n",t);
    displayLL(head);
}
