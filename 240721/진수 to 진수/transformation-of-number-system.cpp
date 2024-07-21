#include <iostream>
#define MAX 20
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int num=0;
    int cnt=0;
    int arr[MAX]={};
    string s;
    cin>>a>>b>>s;
    for(int i=0;i<(int)s.size();i++){
        num=num*a+(s[i]-'0');
    }
    while(true){
        if(num<b){
            arr[cnt++]=num;
            break;
        }
        arr[cnt++]=num%b;
        num/=b;
    }
    for(int i=cnt-1;i>=0;i--)
        cout<<arr[i];
    return 0;
}