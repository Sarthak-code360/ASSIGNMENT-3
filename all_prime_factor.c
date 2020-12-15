#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, num, isPrime;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Prime Factors of %d are: \n", num);
    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}
