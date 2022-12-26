#include<stdio.h>
#include<stdio.h>
int swap(int *x,int *y){
    int temp;
    
    temp = *x;
    *x=*y;
    *y=temp;
    printf(" a=%d,b=%d\n",*x,*y);
   
     }

int main(){
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a ,&b);
    printf(" a=%d,b=%d\n",a,b);
    
    swap(&a,&b);
    
    return 0;
}
 