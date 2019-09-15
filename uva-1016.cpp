#include<bits/stdc++.h>
int a[]={3,2,1};
void insertionSort(int arr[], int n)
{
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];

        j=i-1;

        while(j>=0 && arr[j]>key){

            arr[j+1]=arr[j];

            j--;

        }
        arr[j+1]=key;

    }

}

int main()
{
    insertionSort(a,4);
    for(int i=0;i<3;i++){
        printf("%d\t",a[i]);
    }
    //printf("\n%d\n",c);
    return 0;
}
