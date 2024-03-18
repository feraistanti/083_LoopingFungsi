#include <iostream>
using namespace std;

int main(){
    int i;
    int arr[5];

    for(i = 0;i<5;i++)
    {

       cout << i <<  " : " << "fera" << endl;
    }

    for (i = 0; i < 5; i ++ ){
        cout << "Masukan Nama = ";
        cin >> arr[i];
    }

    for (i = 0; i<5;i++) {
        cout << "Name ke - " << i << " : " << arr[i] << endl;
    }
}