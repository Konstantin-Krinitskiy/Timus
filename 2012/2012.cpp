#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int all_tasks = 12;
    int f;
    cin >> f;
    int remaining_tasks = all_tasks - f; 
    
    int remaining_min = 45 * remaining_tasks % 60;
    int remaining_hours = 1 + (45 * remaining_tasks / 60);
    float execute_time = remaining_hours + remaining_min/100.0;
    float hours = 5;
    
    if (hours > execute_time) {
        cout << "YES";
    }
    
    else
    {
        cout << "NO";
    }
    
    
    

    return 0;

}