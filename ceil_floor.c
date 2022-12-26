

#include<stdio.h>
int Bin_ceil(int arr[],int x,int n){
    int lower=0,higher=n-1,mid;
    int flag=0;
    while(lower<higher){
         mid=(lower+higher)/2;
        if(x>arr[mid])
            lower=mid+1;
        else if(x<arr[mid])
            higher=mid-1;
        else if (x==arr[mid]){
            printf("element found %d\n",arr[mid]);
            flag=1;
            break;
        }
    }
    if(flag==1){
       printf("elemnt is at %d\n ",mid);
    }
    else{
    printf("ceiling value is %d\n",arr[lower]);
    printf("floor value value is %d\n",arr[higher]);}
}
int main(){
    int arr[]={2,3,5,6,8,15,80,100};
    Bin_ceil(arr,4,9);
}
