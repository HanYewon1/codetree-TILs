#include <iostream>
#define MAX 20
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num=0;
    string arr;
    cin>>arr;
    for(int i=0;i<(int)arr.size();i++)
        num=num*2+(arr[i]-'0');
        cout<<num;
    return 0;
}