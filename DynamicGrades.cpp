#include <iostream>
#include <iomanip>

using namespace std;

void getScores(double* , int );
void sortScores(double* , int );
double calculateAverage(const double* , int );

int main(){
    int size;
    cout << "How many test scores do you want to process?: ";
    cin >> size;
    double* arr = new double[size];
    while(size < 0){
        delete arr;
        cout << "Invalid value! Try again!" << endl;
        cout << "How many test scores do you want to process?: ";
        cin >> size;
        double* arr = new double[size];
    }
    getScores(arr, size);
    sortScores(arr, size);
    cout << fixed << setprecision(2) <<"The average value of your score is: " << calculateAverage(arr, size) << endl;
    cout << "Your sorted array is: [ ";
    for(int i = 0 ; i < size ; i++){
        if(i == size -1){
            cout << arr[i] << " ]"<<endl;
            return 0;
        }
        cout << arr[i] << " ";
        
    }
    delete arr;
}

void getScores(double* arr, int size){
    int scores;
    for(int i = 0 ; i < size ; i++){
        cout << "Insert score " << i + 1 << ": ";
        cin >> scores;
        while(scores < 0){
            cout << "Invalid value! Try again!" << endl;
            cout << "Insert score " << i + 1 << ": ";
            cin >> scores;
        }
        arr[i] = scores;
    }
}
void sortScores(double* arr, int size){
    for(int i = 0 ; i < size -1 ; i++){
        for(int j = 0 ; j < size - 1 -i ; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
double calculateAverage(const double* arr, int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total += arr[i];
    }
    return static_cast<double>(total) / size;
}