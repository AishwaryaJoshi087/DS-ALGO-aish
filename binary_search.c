#include<stdio.h>
int main(){
 int a[]={1,2,3,4,5};
 int q,i,j,n=5,left=0,right,mid;
 right=n-1;
 for(i =0;i<n;i++){
    printf("%d\t",a[i]);
 }
 printf("\n");
 printf("Enter number to find: ");
 scanf("%d",&q);
 while(left<=right){
   int mid = (left+right)/2;
   if(a[mid]==q){
    printf("found at %d\n",mid);
    break;
   }
   else if(a[mid]>q){
        right = mid-1;
    }
   else if(a[mid]<q){
        left = mid+1;
    }
    else{
        printf("its not here");
    }
   
 }
 return 0;
}