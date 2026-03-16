// sum of two array in the third array using function

#include<stdio.h>
void sum(int arr[],int brr[],int sum[],int n){

    for (int i = 0; i < n; i++)
    {
        sum[i]=arr[i] + brr[i];
    }
    printf("the sum of two array is : \n");
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",sum[i]);
    }
    

}
int main(){
    int a []={1,2,3};
    int b[]={4,5,6};
    int size = sizeof(a)/sizeof(a[0]);
    int c[size];
    sum(a,b,c,size);
}