#include "proto.h"
void addition()
{
    int n,t;
    printf("Enter the elememts:\n");
   scanf("%d %d",&n,&t);
   int sum=n+t;
    printf("The output for addition operation is %d\n",sum);
}
void subtraction()
{
   int n,o;
    printf("Enter the elements:\n");
    scanf("%d %d",&n,&o);
    int diff;
    diff=n-o;
    printf("The output for subtraction operation is %d\n",diff); 
}
void division()
{
    int a,b;
    printf("Enter the elements:\n");
    scanf("%d %d",&a,&b);
    if(b==0){
        printf("Invalid division\n");
    }
    else{
    int div=a/b;
    printf("The output for division operation is %d\n",div);
}
}
void modulus()
{
    int a,b;
    printf("Enter the elements:\n");
    scanf("%d %d",&a,&b);
    int mod=a%b;
    printf("The output for modulus operation is %d\n",mod);
}
void multiplication()
{
   int n,o;
    printf("Enter the elements:\n");
   scanf("%d %d",&n,&o);
   int mul=n*o;
    printf("The output for multiplication operation is %d\n",mul);
}
void power()
{
    long long int a,b;
    printf("Enter the elements:\n");
    scanf("%ld %ld",&a,&b);
    int p=pow(a,b);
    printf("The output of power operation is %d\n",p);
}
void factorial()
{
    int a;
    printf("Enter the element to find factorial:\n");
    scanf("%d",&a);
    int f=1,i;
    if(a==0){
        f=1;
    }
    else if(a<0){
        printf("The factorial is failed\n");
    }
    else{
    for(i=1;i<a;i++){
        f*=i;
    }
    printf("The output of factorial operation is %d\n",f);
    }
}