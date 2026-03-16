// sum of the given array using func
#include<stdio.h>
void sum(int arr[],int n){
    int sum = 0;
for (int i = 0; i < n; i++)
{
    sum = sum + arr[i];
    
}
printf("the sum of the array is %d",sum);


}
int main(){
int a[]={1,2,3,4,5,6,7,8,9,10};
int size = sizeof(a)/sizeof(a[0]);
sum(a,size);

}