#include <iostream>
#include <conio.h>
using namespace std;

static int pointsNumber(int radius)
{
    int count = 0;
    for (int x = -radius; x <= radius; x++){
        for (int y = -radius; y <= radius; y++){
            if ( x*x + y*y <= radius*radius){
                count++;
            }
        }
    }
    return count;
}

int main() {

    int times;
    cout << "Enter to how many times iterate: ";
    cin >> times;
    
    for (int i = 1; i <= times; i++){
        cout<< "Points in circle with radius "<< i << ": "<< pointsNumber(i) << endl;
    }

    system("pause");
}