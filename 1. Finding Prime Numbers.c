#include<stdio.h>
int main()
{
    int num;
    int is_prime=1; //assume the number is prime initially.

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    if(num<=1){
        is_prime=0; // Because zero and one are not prime numbers.
    }else{
    for(int i=2; i<=num / 2; i++){if(num%i==0)
        {
            is_prime=0;
            break;
        }
    }
}

    if(is_prime){
        printf("%d is a Prime number\n",num);
    } else{
        printf("%d is not a prime number\n",num);
        }
        return 0;
}
