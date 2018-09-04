#include <iostream>
#include <string>
using namespace std;




int main(int argc, char const *argv[])
{

    string s;
    char bukva;
    int result = 0;
    int temp_result = 0;    

    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        
        for(int j = 0; j < s.size(); j++)
        {
            if (s[i] == s[j]) {
                temp_result++;
            
            }
            
        }
        
        if (temp_result >= result) {
            result = temp_result;
            bukva = s[i];
        }
        temp_result = 0;
    }
    
    cout << bukva << endl;

    return 0;
}

