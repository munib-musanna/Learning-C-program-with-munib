//In this program we'll learn how to solve quadratic equations. 
//Q: Find solution of a quadratic equation.
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Enter coefficients (a,b,c): ");
    scanf("%f%f%f",&a,&b,&c);

    float discriminant= b*b-4*a*c;
    if(discriminant>0){
        float root1=(-b+sqrt(discriminant))/(2*a);
        float root2=(-b-sqrt(discriminant))/(2*a);

        printf("Roots are : %.2f and %.2f\n",root1,root2);
    
    }
    else if(discriminant==0){
        float root=-b/(2*a);

        printf("Root is %.2f\n",root);
    }
    else{
        printf("No real roots\n");
    
    }
    return 0;

}