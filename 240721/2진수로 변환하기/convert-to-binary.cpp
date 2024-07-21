#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 20
using namespace std;

int n;
int arr[MAX];
int number;

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin>>n;
    while(true){
        if(n<2){
            arr[number++]=n;
            break;
        }
        arr[number++]=n%2;
        n/=2;
    }
    for(int i=number-1;i>=0;i--)
        cout<<arr[i];


    return 0;
}