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
void deleteNthLL(struct studentinfo **h,int N)
{
    int i;
    struct studentinfo *newN,*temp=*h,*temp2;
    if(*h == NULL)
    {
        printf("There is no node in LL\n");
        return;
    }
    else if(N == 1)
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
    struct studentinfo a,b,c, *temp, *head;
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

    deleteNthLL(&head,2);
    displayLL(head);
    return 0;
}

