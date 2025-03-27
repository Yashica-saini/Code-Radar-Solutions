void bubblesort(int n;char arr){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    printf("%s",arr[i]);
}