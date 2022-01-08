#include <stdio.h>
#include <omp.h>

int a,b;
void sum(a,b){
    int sum = a+b;
    printf("1.Sum is: %d\n",sum);
}
void substraction(a,b){
    int sub;
    if(a>b){
        sub = a-b;
    }
    else{
        sub = b-a;
    }
    printf("2.Positive Substraction is: %d\n",sub);
}
void mul(a,b){
    int mul = a*b;
    printf("3.Multiplication is: %d\n",mul);
}
void divde(a,b){
    float dvd = (float) a/b;
    printf("4.Dividation is: %.2f\n",dvd);
}
void rem(a,b){
    int c = a%b;
    printf("5.Remainder when %d divided by %d : %d \n",a,b,c);
}
void main(){
    printf("Enter 1st number: \n");
    int n1,n2;
    scanf("%d",&n1);
    printf("Enter 2nd number: \n");
    scanf("%d",&n2);
    
    //OpenMP parallel section
    #pragma omp parallel sections
    {
        #pragma omp section
        sum(n1,n2);
        #pragma omp section
        substraction(n1,n2);
        #pragma omp section
        mul(n1,n2);
        #pragma omp section
        divde(n1,n2);
        #pragma omp section
        rem(n1,n2);
    }
}
