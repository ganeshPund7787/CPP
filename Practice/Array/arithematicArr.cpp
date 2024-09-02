#include<iostream>
using namespace std;

int Show(int arr[3][3],int brr[3][3],char ch){

     for(int i=0; i<3; i++){
        cout << "[ ";
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << "] ";
        
        if(i == 1) cout << ch;
        else cout << " ";

        cout << " [ ";
        for(int j=0; j<3; j++){
            cout << brr[i][j] << " ";
        }

        cout << "] ";
        if(i == 1) cout << "=";
        else cout << " ";

        cout << " [ ";
        
        for(int j=0; j<3; j++){
            if(ch == '+'){
                cout << arr[i][j] + brr[i][j] << " ";
            } else if(ch == '-'){
                cout << arr[i][j] - brr[i][j] << " ";
            } else if(ch == '/'){
                cout << arr[i][j] / brr[i][j] << " ";
            } else if(ch == '%'){
                cout << arr[i][j] % brr[i][j] << " ";
            }
        }
        cout << "]";
        cout << endl;
    }
    cout << endl;
    return 0;
}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int brr[3][3] = {9,8,7,6,5,4,3,2,1};
    
    // Show(arr,brr,'+');
    // Show(arr,brr,'-');
    // Show(arr,brr,'/');
    int crr[3][3];

    for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
        // cout << arr[i][j] << " ";
       int temp = 0;
            for(int k=0; k<3; k++){
                // cout << "| " << arr[i][k] << " " <<  brr[k][j];
                temp += arr[i][k] * brr[k][j];
            }
            cout << " " << temp;
            crr[i][j] = temp;
        }   
        cout << endl;
    }
    

    return 0;
}


