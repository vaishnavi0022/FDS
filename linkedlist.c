#include<stdio.h>
#include<stdlib.h>
void create() ;
void display() ;
struct abc
{
int data ;
struct abc*next ;
} ;
struct abc*head ;

int main()
{
   int d ;
head=(struct abc*)malloc(sizeof(struct abc)) ;
printf("enter data for head \n") ;
scanf("%d\n",&head->next) ;
head->next="null" ;
create() ;
display() ;
int ch ,pos ,y ;
//do{



printf("\n 1:insertion at beginning") ;
printf("\n 2:insertion at middle") ;
printf("\n 3:insertion at end ") ;
printf("\n 4:deletion at beginning") ;
printf("\n 5:deletion at middle") ;
printf("\n 6:deletion at end ") ;
printf("\n 7:display") ;
//printf("enter your choice\n") ;
//scanf("%d",&ch) ;





return 0 ;
} 
 
void create() 
{
struct abc*new ,*temp ;
int n ;
printf("enter no of elements of list \n") ;
scanf("%d",&n) ;
for(int i=0 ;i<n ;i++)
{
   new=(struct abc*)malloc(sizeof(struct abc)) ;
   printf("enter data \n") ;
  scanf("%d",&new->data) ;
  temp->next=new ;
  temp=temp->next ;

}
}

 
/*void insert(int d)
{ 
  struct abc*new ;
 new=(struct abc*)malloc(sizeof(struct abc)) ;
 new->data=d ;
 new->next=nul;
 new->next=head  ;
 head=new ;
}


void insert(int d)
{ 
 
struct abc*new ,*p ,*q;
  new=(struct abc*)malloc(sizeof(struct abc)) ;
int pos;
int i=0;
printf("enter element to i \n") ;
scanf("%d",&n) ;
for(int i=0 ;i<n ;i++)
{
   new=(struct abc*)malloc(sizeof(struct abc)) ;
   printf("enter data \n") ;
  scanf("%d",&new->data) ;
  temp->next=new ;
  temp=temp->next ;

}
}
*/
















void display() 
{
struct abc*temp ;
if(head==null)
printf("linked list is empty \n") ;
else
{while(temp!=null)
{
   printf(" %d",temp->data) ;
 
  temp=temp->next ;

}
}

}



