#include<stdio.h>
int main()
    {
        int n, rem, sum=0;
        printf("Enter a number:");
        scanf("%d",&n);
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
          printf("\nThe sum of degit=%d",sum);  
          
     return 0;
     getch();
    }