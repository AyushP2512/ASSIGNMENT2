#include<stdio.h>
//NAME :Ayush Sharma
//Scholar Id:2012105
int main()
{
    while(1)
    {
        int select;
        printf("Select a choice: \n 1.Addition \n 2.Multiplication \n 3.Exit \n");
        printf("Enter a choice: ");
        scanf("%d",&select);
        if(select==1)
        {
            long long int n1,n2;
            printf("Enter two decimal no.s: ");
            scanf("%lld %lld", &n1,&n2);
            long long int sum=n1+n2;
            printf("Sum is: %lld \n",sum);
        }
        else if(select==2)
        {
            long long int n1,n2;
            printf("Enter two decimal no.s: ");
            scanf("%lld %lld",&n1,&n2);
            printf("Product is: %lld \n",n1*n2);
        }
        else
        {
            printf("Exited.");
            break;
        }
    }
    return 0;
}
