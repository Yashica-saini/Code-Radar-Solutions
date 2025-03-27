void selectionSort(int arr[100],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j]=temp;
            }
        }
    }
}
int printArray(int arr[100],int n){
    for(int i=n;i>=0;i++){
        printf("%d ",arr[i]);
    }
}