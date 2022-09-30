# include<stdio.h>

void prime(int first,int last);
int main()
{
    int first ,last;
    scanf("%d%d",&first,&last) ;
    prime(first,last) ;
}
void prime(int first,int last)
{   int i ,j ; 
int flag=0 ;
    for(int i=first;i<=last;i++) 
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            flag++ ;
        
        }
        if(flag==0)
        printf("%d",i) ;
        else 
        flag=0 ;
        
    }
    
    
    
    
}
