#include <iostream>
#include <string>
using namespace std;

char getMaxOccurence(string s)
{
    int arr[26] = {0};

    // create an array
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // lower case

        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            // upper case
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1;
    for (int i = 0; i < s.length(); i++){
        if (maxi<arr[i]){
            
        }

    }
}

int main()
{

    return 0;
}
