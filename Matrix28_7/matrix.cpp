#include <iostream>
using namespace std;
int main() {
    int A[2][2], B[2][2], sum[2][2], diff[2][2], mul[2][2];

    cout << "Enter 4 elements of Matrix A:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> A[i][j];

    cout << "Enter 4 elements of Matrix B:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> B[i][j];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
        }

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
         mul[i][j] = 0;
            for (int k = 0; k < 2; k++)
             mul[i][j] += A[i][k] * B[k][j];
        }

    cout << "\n Matrix Addition:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    cout << "\nMatrix Subtraction:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << diff[i][j] << " ";
        cout << endl;
    }

    cout << "\nMatrix Multiplication:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << mul[i][j] << " ";
        cout << endl;
    }

    return 0;
}
