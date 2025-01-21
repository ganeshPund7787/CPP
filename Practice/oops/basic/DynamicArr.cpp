#include<iostream>
using namespace std;

class Vectore {
    public:
        int size;
        int capacity;
        int* arr;
        Vectore(){
            size = 0;
            capacity = 1;
            arr= new int[1];
        }

    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size; i++){
                arr2[i] = arr[i];
            }
        arr = arr2;
        }
        arr[size++] = ele;
    }

    void printArr(){
        if(size == 0 ){
            cout << "Emty Array" << endl;
        }
        
        cout << endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void remove(){
        if(size == 0 ){
            cout << "Emty Array" << endl;
        }
        size--;
    }
};

int main(){
   Vectore v;
    
     for(int i=1; i<=5; i++){
        v.add(i * i);
        v.printArr();
    }

    return 0;
}


