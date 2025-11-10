#include <iostream>
#include <vector>
using namespace std;
 
bool isAttractive(vector<vector<int>>& table) {
    for (int i = 0; i < table.size() - 1; i++) {
        for (int j = 0; j < table[0].size() - 1; j++) {
            if (table[i][j] == table[i + 1][j] && table[i][j] == table[i][j + 1] && table[i][j] == table[i + 1][j + 1]) {
                return false;
            }
        }
    }
    return true;
}
 
int main() {
    int t;
    cin >> t;
 
    for (int k = 0; k < t; k++) {
        int n, m;
        cin >> n >> m;
 
        vector<vector<int>> table(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> table[i][j];
            }
        }
 
        if (isAttractive(table)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}