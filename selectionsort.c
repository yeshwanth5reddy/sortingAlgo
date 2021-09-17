#include<stdio.h>
int selection_sort(int a[],int n);
int main (void){
	int size,a[100],i;
	printf("enter the number of elements u like to enter:");
	scanf("%d",&size);
	for(i=0;i<size-1;i++)
		scanf("%d",&a[i]);
	 for(i=0;i<size-1;i++)
                printf("%d ",a[i]);
	 selection_sort( a,size);
	printf("the sorted array is ");
	for(i=0;i<size-1;i++)
                printf("%d \t",a[i]);
}
int selection_sort(int a[],int n){
	int i,j,imin,temp;
	for(i=0;i<n-1;i++){
		imin=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[imin])
				imin=j;}
		temp=a[imin];
		a[imin]=a[i];
		a[i]=temp;
	}}

