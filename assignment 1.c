#include <stdio.h>
int main() {
    int*p; int k;
    int*q;
    int b[3][3] ;
    int a[3][3];
    int i ,j ;
    p=&a[0][0];
     q=&b[0][0];
    int  c[3][3] ;
   int mul[i][j] ;
    for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
 {
     scanf("%d",&a[i][j]) ;
 }
 
}
printf("enter another array") ;
 for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
 {
     scanf("%d",&b[i][j]) ;
 }
 
}
/* for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
     {
         printf("%d\t",*(p+((i*3)+j))) ;
     }
     printf("\n");
}


 for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
     {
         printf("%x\t",&a[i][j]) ;
     }
     printf("\n");
}
 for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
     {
         printf("%x\t",(p+((i*3)+j))) ;
     }
     printf("\n"); */

/*for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
     {
        c[i][j]=b[i][j]+a[i][j];
     }
     printf("\n");
}*/
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
printf("multiply of the matrix=\n");    
for(i=0;i<3;i++)    
{    
for(j=0;j<3;j++)    
{    
mul[0][0]=0;    
for(k=0;k<3;k++)    
{    
mul[i][j]=mul[0][]0+ (*(p+((i*3)+k))) * (*(q+((k*3)+j)) ); 
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

    return 0;
}
\*#include<stdio.h>
int main()
{
    int a[3][3] ,min,max,i,j,s[2][2] ,k ;
    printf("enter a number") ;
    for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
   
    {
        scanf("%d",&a[i][j]) ;
    }
}
 for(i=0;i<3;i++)
    {  min=a[i][0] ;
        for(j=0;j<3;j++)
   {
       if(min>=a[i][j])
       {
           min=a[i][j] ;
           s[0][0] =i ;
           s[0][1]= j;
           
        }
                 
   }
       j=s[0] [1] ;
       max=a[0] [j] ;
       
        for(k=0;k<3;k++)
   {
       if(max<=a[k][j])
       {
           max=a[k][j] ;
           s[1][0] =k ;
           s[1][1]= j;
           
        }
                 
   } 

  if(min==max&&s[0][0]==s[1][0]&&s[0][1]==s[1][1])
{
    printf("%d",a[s[0][0] ][s[0][1]]) ;
    
}
}
return 0 ;
}
*\
