#include<stdio.h>
int main()
    {
        int n, rem, pro=1;
        printf("Enter number:");
        scanf("%d",&n);
        while(n>0)
        {
            rem=n%10;
            pro=pro*rem;
            n=n/10;
        }
        printf("\nProduct of degits=%d",pro);
        
     return 0;
     getch();
    }