// problem : Bubble_Sort

void bubbleSort(int arr[], int n) 
{
    for(int i=0; i<=n-2; i++){
        for(int j=0; j<=n-i-2; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
