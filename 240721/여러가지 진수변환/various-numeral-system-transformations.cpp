#include <iostream>
using namespace std;
#define MAX 20
int main() {
    // 여기에 코드를 작성해주세요.
    int n,b;
    int cnt;
    int arr[MAX];
    cin>>n>>b;
    while(true){
        if(n<b){
            arr[cnt++]=n;
            break;
        }
        arr[cnt++]=n%b;
        n/=b;
    }
    for(int i=cnt-1;i>=0;i--)
        cout<<arr[i];
   return 0;
    
}