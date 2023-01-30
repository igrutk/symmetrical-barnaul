
#include <iostream>
#include <ctime>
using namespace std;

void array1(int** arr, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 70 + 10;
        }
    }

    cout << endl;

}

void matrix(int** arr, int n) {
    cout << "Matricza: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
}

void summa(int** arr, int n) {
    int summa = 0;
    int i = (n - 1);
    for (int j = 0; j < n; j++)
    {
        summa += arr[i][j];
        i--;
    }
    std::cout << "The sum of the elements of the side diagonal: " << summa;

    cout << endl;
}


int main()
{
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "The number of rows is the same as the number of columns ";
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    array1(arr, n);

    matrix(arr, n);

    summa(arr, n);

    delete[]arr;
    return 0;
}