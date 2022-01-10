#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node*link;
 };
 struct node *temp,*head=NULL,* current;
 void main()
 {
 int x=1,item;
 do
 {
  temp=(struct node *)malloc(sizeof(struct node));
  printf("enter the data");
  scanf("%d",&item);
  temp->data=item;
  temp->link=NULL;
  if(head==NULL)
  {
  head=temp;
  current=temp;
  }
  else
  {
  current->link=temp;
  current=temp;
  }
  printf("do you want to continue");
  scanf("%d",&x);
  }
  while(x==1);
  temp=head;
  while(temp->link!=NULL)
  {
  printf("%d",temp->data);
  temp=temp->link;
  }
  printf("%d",temp->data);
  getch();
  }

