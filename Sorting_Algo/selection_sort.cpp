//problem : Selection sort
void selectionSort(vector<int>&arr) {
   for(int i=0; i<arr.size(); i++){
       int minValue = i; // Index of the min element int the array
       for(int j = i+1; j<arr.size(); j++){
           if(arr[j]<arr[minValue]){
               swap(arr[j],arr[minValue]);
           }
       }
   }                            
}
