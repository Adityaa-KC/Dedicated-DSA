// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

vector<int>fibonacci(int n){
    
    if (n<=0){
        return {};
    }
    
    if (n==1){
        return {};
    }
    
    int a=0,b=1;
    vector<int>series = {0,1};
    for (int i=2;i<n;i++){
        int x = 0;
        x = b;
        b = a+b;
        a = x;
        series.push_back(b);
    }
    return series;
}
int main() {
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    vector<int>series = fibonacci(n);
    int y = series.size();
    for (int i=0;i<y;i++)
    cout<<series[i]<<" ";
}