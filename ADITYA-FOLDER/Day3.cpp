#include<iostream>
using namespace std;

// Pattern Printing 

void numInSqr(int n){
    for (int i=1; i <= n; i++){
        for(int j=0; j<n; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

void reverseNum(int n){
    for (int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            cout<<n-j;
        }
        cout<<endl;
    }
}

void countInTriangle(int n){
    int x = 1;
    for (int i=1; i <= n; i++){
        for(int j=0; j<i; j++){
            cout<<x++;
        }
        cout<<endl;
    }
}

void triangleOfRowNum(int n){
    for (int i=1; i <= n; i++){
        for(int j=0; j<i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void numInDecreasingTri(int n){
    for (int i=1; i <= n; i++){
        for(int j=0; j<n; j++){
            cout<<i+j;
        }
        cout<<endl;
    }
}

void numInRevDecreasingTri(int n){
    for (int i=0; i < n; i++){
        for(int j=0; j<(n-i); j++){
            cout<<(n-i)-j;
        }
        cout<<endl;
    }
}

void alphaInSqr(int n){
    for (int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            cout<<char(65+i);
        }
        cout<<endl;
    }
}

void alphaInSqrCol(int n){
    for (int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
}

void alphaInSqrCount(int n){
    int x = 0;
    for (int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            cout<<char(65+(x++));
        }
        cout<<endl;
    }
}

void alphaInDecTri(int n){
    for (int i=0; i < n; i++){
        for(int j=0; j<=i; j++){
            cout<<char(65+i);
        }
        cout<<endl;
    }
}

void alphaInIncTri(int n){
    for (int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            cout<<char(65+i+j);
        }
        cout<<endl;
    }
}

void revAlphaInTri(int n){
    for (int i=1; i <= n; i++){
        for(int j=0; j<=(n-i); j++){
            cout<<char(65+(n-i));
        }
        cout<<endl;
    }
}

void alphaInRevTri(int n){
    for (int i=0; i < n; i++){
        for(int j=0; j<(n-i); j++){
            cout<<char(65+i+j);
        }
        cout<<endl;
    }
}

void triWithSpaces(int n){
    for (int i=1; i <= n; i++){
        for (int j=0; j < n-i; j++){
            cout<<" ";
        }
        for(int j=0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void revTriWithSpaces(int n){
    for (int i=0; i < n; i++){
        for (int j=0; j < i; j++){
            cout<<" ";
        }
        for(int j=0; j < n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void diamondPattern(int n){
    for (int i=1; i <= n; i++){
        for (int j=1; j <= n-i; j++){
            cout<<" ";
        }
        for(int j=1; j <= i; j++){
                cout<<j;
        }
        for(int j=i-1; j >= 1; j--){
                cout<<j;
        }
        cout<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    // numInSqr(n);
    // reverseNum(n);
    // countInTriangle(n);
    // triangleOfRowNum(n);
    // numInDecreasingTri(n);
    // numInRevDecreasingTri(n);
    // alphaInSqr(n);
    // alphaInSqrCol(n);
    // alphaInSqrCount(n);
    // alphaInDecTri(n);
    // alphaInIncTri(n);
    // revAlphaInTri(n);
    // alphaInRevTri(n);
    // triWithSpaces(n);
    // revTriWithSpaces(n);
    diamondPattern(n);
}