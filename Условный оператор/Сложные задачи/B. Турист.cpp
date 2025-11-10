#include <iostream>

using namespace std;

int main() {
    int K, W;
    cin >> K >> W;

    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    bool possible = false;

  
    for (int mask = 0; mask < 8; ++mask) {
        int total_weight = 0;
        int total_people = 0;

        if (mask & 1) 
        { 
            total_weight += a1;
            total_people += b1;
        }
        if (mask & 2) 
        { 
            total_weight += a2;
            total_people += b2;
        }
        if (mask & 4)
        {
            total_weight += a3;
            total_people += b3;
        }

        if (total_people >= K && total_weight <= W) {
            possible = true;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << endl;

    return 0;
}