#include <iostream>
using namespace std;

void findMinAndMax(const int[], int, int*, int*);

int main(){
    int numbers[] = {23, 5, 67, -2, 45, 87, 1, 99, 34, -10};
    int min = numbers[0];
    int max = numbers[0];
    findMinAndMax(numbers, 10, &min, &max);
    cout << "The min is: " << min << endl;
    cout << "The max is: " << max << endl;
}

void findMinAndMax(const int arr[], int size, int* min, int* max){
    for(int i = 1 ; i < size ; i++){
        if(arr[i] < *min){
            *min = arr[i];
        } 
        if(arr[i] > *max){
            *max = arr[i];
        }
    }
}