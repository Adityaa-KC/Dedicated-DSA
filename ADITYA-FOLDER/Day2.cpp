#include<iostream>
#include<cmath>
using namespace std;

double sumton(int n){
    double sum = 0;
    for(int i = 0; i <= n; i+=2){
        sum += i;
    }
    return sum;
}

int check_Prime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n%i == 0){
            cout<<"The number "<<n<<" is not prime.";
            return 0;
        }
    }
    cout<<"The number "<<n<<" is prime.";
    return 0;
}

void pattern_rect(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern_rectnum(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    // cout<<"The sum of all even numbers till n is : "<<sumton(n);
    // check_Prime(n);
    // pattern_rect(n);
    // pattern_rectnum(n);
}