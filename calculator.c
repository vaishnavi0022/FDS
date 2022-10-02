#include <stdio.h>
#include<math.h> 
int main()
{ double x , y, NUMBER;
    int num1 ,num2 ,ans ,choice ,i ,fact=1; 
    do{ printf( "available functions are\n" );
     printf( " 1: addition \n");
     printf( " 2 :subtraction\n "); 
     printf ( " 3 : multiplication\n ");
     printf ( " 4 : division\n ");
     printf ( " 5 : power \n");
     printf ( " 6 : factorial\n") ;
     printf(" 7:exit\n") ;
     printf(" Enter your choise\n");
     scanf ("%d",& choice );
     
     switch( choice)
{    case 1 :
      printf( " Enter two  numbers :\n") ;
       scanf( "%d %d" ,&num1,&num2);
       printf( " answer= %d\n",num1+num2);
       break ;
        case 2 :
      printf( " Enter two  numbers :\n") ;
       scanf( "%d %d" ,&num1,&num2);
       printf( " answer= %d\n",num1-num2);
       break ;
        case 3 :
      printf( " Enter two  numbers :\n") ;
       scanf( "%d %d" ,&num1,&num2);
       printf( " answer= %d\n",num1*num2);
       break ;
        case 4:
      printf( " Enter two  numbers :\n") ;
       scanf( "%d %d" ,&num1,&num2);
       printf( " answer= %d\n",num1/num2);
         break ;
          case 5:
      printf( " Enter two  numbers :\n") ;
       scanf( "%lf %lf" ,&x ,&y);
       printf( " answer= %lf\n", pow( x,y));
       break; 
       case 6 : 
       printf( " Enter a number\n") ;
          scanf( " %lf",&NUMBER) ;
          if( NUMBER<1)
            { printf( "factorial of negative number does not exist\n");
            }
            else{ for ( i=1;i<=NUMBER;i++) 
            {  
            fact=fact*i;
            }
            printf( "Answer: %d\n" ,fact) ;
            }
}
} while ( choice!=7) ;
    return 0;
}





