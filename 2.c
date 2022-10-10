#include <stdio.h>
int main()
 {
    int*p; int k ,choice;
    int min,max,s[2][2]  ;
    int*q;
    int b[3][3] ;
    int a[3][3];
    int i ,j ;
    p=&a[0][0];
    q=&b[0][0];
    int  c[3][3] ;
    int mul[i][j] ; 
    do 
    {
   printf("Operations available on Matrices\n") ;
   printf("1:Addition\n") ;
   printf("2:Multiplication\n") ;
   printf("3:Saddle point \n") ;
   printf("4:Exit\n") ;
   printf("Enter your choice\n") ;
   scanf("%d",&choice) ;
  
   
   switch(choice) 
  { // for addition
    case 1 :
    printf("Enter an array \n") ;
    for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
   {
     scanf("%d",&a[i][j]) ;
   }
 
  }
  printf("enter another array\n") ;
 for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
 {
     scanf("%d",&b[i][j]) ;
 }
 
}

for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
     {
        c[i][j]=(*(p+((i*3)+j))) + (*(q+((i*3)+j)) );
     }
     printf("\n");
}
for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
     {
         printf("%d\t",c[i][j]) ;
     }
     printf("\n");
}
break ;
case 2:
// for multiplication
 printf("enter an array \n") ;
    for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
 {
     scanf("%d",&a[i][j]) ;
 }
 
}
printf("Enter another array\n") ;
 for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
 {
     scanf("%d",&b[i][j]) ;
 }
 }


  
for(i=0;i<3;i++)    
{    
for(j=0;j<3;j++)    
{    
mul[i][j]=0;    
for(k=0;k<3;k++)    
{    
mul[i][j]=mul[i][j]+ (*(p+((i*3)+k))) * (*(q+((k*3)+j)) ); 
}    
}    
}    
//for printing result    
for(i=0;i<3;i++)    
{    
for(j=0;j<3;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
break ;
case 3:
    printf("Enter array elements\n") ;
    for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
   
    {
        scanf("%d",(p+((i*3)+j))) ;
    }
}
 for(i=0;i<3;i++)
    {  min=*(p+((i*3)+0)) ;
        for(j=0;j<3;j++)
   {
       if(min>=*(p+((i*3)+j)))
       {
           min=*(p+((i*3)+j));
           s[0][0] =i ;
           s[0][1]= j;
           
        }
                 
   }
       j=s[0] [1] ;
       max=*(p+((0*3)+j)) ;
       
        for(k=0;k<3;k++)
   {
       if(max<=*(p+((k*3)+j)))
       {
           max=*(p+((k*3)+j)) ;
           s[1][0] =k ;
           s[1][1]= j;
           
        }
                 
   } 

  if(min==max&&s[0][0]==s[1][0]&&s[0][1]==s[1][1])
{   
    printf("Saddle point is %d\n",a[s[0][0] ][s[0][1]]) ;
    
}
} 
break ;
}
} while(choice!=4 ) ;
    return 0;
}




