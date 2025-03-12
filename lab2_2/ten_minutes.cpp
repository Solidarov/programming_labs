#include <iostream>
#include <vector>
using namespace std;

bool ten_min_walk(const vector<char>& arr){
    if (arr.size() != 10){
        return false;
    }
    int x = 0, y = 0, i = 0;

    while (i < 10){
        switch (arr[i])
        {
        case 'n':
            y++;
            break;
        case 's':
            y--;
            break;
        case 'e':
            x++;
            break;
        case 'w':
            x--;
            break;
        default:
            break;
        }
        i++;
    }
    return x==0 && y==0;
}

int main(){
    bool result;
    vector<char> arr = {'n','s','e','w','n','s','e','w','n','s'};
    result = ten_min_walk(arr); // True
    cout << result << endl;

    vector<char> arr1 = {'n','s','n','s','n','s','n','s','n','s','n','s', 'w'};
    result = ten_min_walk(arr1); // False
    cout << result << endl;

    vector<char> arr2 = {'n', 's'};   
    result = ten_min_walk(arr2); // False
    cout << result << endl;

    return 0;
}
