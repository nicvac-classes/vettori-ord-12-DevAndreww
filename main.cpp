#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));   
    
    int n, i;

    cout << "Numero di cifre da inserire?" << endl;
    cin >> n;
    i = 0;
    float r[n];

    while (i < n) {
        r[i] = 0 + rand() % (10 * n);
        i = i + 1;
    }
    int j, t;

    i = 0;
    t = 0;
    while (i < n) {
        j = 0;
        while (j < n - 1) {
            if (r[j] > r[j + 1]) {
                t = (int) r[j];
                r[j] = r[j + 1];
                r[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << r[i] << endl;
        i = i + 1;
    }
    
}



