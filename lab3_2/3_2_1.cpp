#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20], f[20], sr[20], a[20];
    int l, ll;

    cout << "\nInput stroky s: " ;
    cin >> s;

    cout << "Input stroky f: ";
    cin >> f;

    l = strlen(s);
    cout << "\n\nDovzhina stroky s = " << l;

    ll = strlen(f);
    cout << "\nDovzhina stroki f = " << ll << endl;

    strcat(s,f);
    strcpy(sr,s);
    cout << "\nNova stroka = " << sr << endl;

    strncpy(sr,"biba",4);
    cout << "Nova stroka = " << sr;

    return 0;
}