#include <iostream>
#include <fstream>
using namespace std;
int main()
{
        ifstream wejscie;
        ofstream wyjscie;
        wejscie.open("wej.txt");
        wyjscie.open("wyj.txt");
        int c = 0;
        int a[1000];
        if (wejscie.good()) {
            while (!wejscie.eof()) {
                wejscie >> a[c++];


            }
        }
        else { cout << "dupa"; }

        if (wyjscie.good()) {
            for (int i = c - 2; i >= 0; i--) {
                cout << a[i];
                wyjscie << a[i] << " ";
            }
        }
        else { cout << "dupa2"; }
        wejscie.close();
        wyjscie.close();

        return 0;

}