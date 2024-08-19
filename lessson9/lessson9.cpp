#include <iostream>
using namespace std;

int main() {
    cout << "task1" << endl;
    int num = 1;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            cout << num << " ";
            num += i;
        }
        cout << endl;
        num = i + 1;
    }

    cout << "\ntask3" << endl;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (i == n || j == 1 || j == 2 * i - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "\ntask4" << endl;
    int num4, ulduz4 = 1, bosluq4;
    cin >> num4;
    bosluq4 = num4 - 1;
    for (int i = 0; i < num4; i++) {
        for (int j = 0; j < bosluq4; j++) {
            cout << " ";
        }
        for (int k = 0; k < ulduz4; k++) {
            cout << "*";
        }
        cout << endl;
        bosluq4--;
        ulduz4 += 2;
    }


    cout << "\ntask5" << endl;
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = m - 1; i >= 1; i--) {
        for (int j = 1; j <= m - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "task6\n";
    int num6, u6 = 1, b6;
    cin >> num6;
    b6 = num6 - 1;
    for (int i = 0; i < num6; i++) {
        for (int j = 0; j < b6; j++) {
            cout << " ";
        }
        for (int k = 0; k < u6; k++) {
            cout << "*";
        }
        cout << endl;
        b6--;
        u6 += 2;
    }
    b6 = 1;
    u6 -= 4;
    for (int i = 0; i < num6; i++) {
        for (int j = 0; j < b6; j++) {
            cout << " ";
        }
        for (int k = 0; k < u6; k++) {
            cout << "*";
        }
        cout << endl;
        b6++;
        u6 -= 2;
    }


    int k;
    cin >> k;
    for (int i = 0; i < k + 2; i++) {
        cout << "*";
    }
    cout << endl;
    for (int i = 0; i < k; i++) {
        cout << "*";
        for (int j = 0; j < k; j++) {
            if ((i < k / 3 && j < k / 3) || (i < k / 3 && j >= 2 * k / 3) || (i >= 2 * k / 3 && j < k / 3) || (i >= 2 * k / 3 && j >= 2 * k / 3)) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "*";
        cout << endl;
    }
    for (int i = 0; i < k + 2; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "task8\n";
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            if ((row + col) % 2 == 0) {
                cout << "1";
            }
            else {
                cout << "0";
            }
        }
        cout << endl;
    }
}