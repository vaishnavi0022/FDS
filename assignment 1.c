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
mul[i][j]=0;    
for(k=0;k<3;k++)    
{    
mul[i][j]+=  (*(p+((i*3)+k))) * (*(q+((k*3)+j)) ); 
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