#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int arrSize;
    cout << "size of arr: ";
    cin >> arrSize;
    int* arrRan = new int[arrSize];
    int sort;
    bool swapped;
    cout << "Введите сортировку [от минимального до максимального | от максемального до минимального : ";
    cin >> sort;

    for (int i = 0; i < arrSize; i++) {
        arrRan[i] = 1 + rand() % 40;
    }


    cout << "arr:";
    for (int i = 0; i < arrSize; i++) {
        cout << arrRan[i] << " ";
    }
    cout << endl;





    if (sort == 1) {
        for (int i = 0; i < arrSize - 1; i++) {
            swapped = false;


            for (int j = 0; j < arrSize - i - 1; j++) {
                if (arrRan[j] > arrRan[j + 1]) {

                    swap(arrRan[j], arrRan[j + 1]);
                    swapped = true;
                }
            }
        }

    }
    cout << "sort arr: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arrRan[i] << " ";
    }
    cout << endl;

    delete[] arrRan;
}
    else if (sort == 2) {

        for (int i = 0; i < arrSize - 1; i++) {
            swapped = false;
            for (int j = 0; j < arrSize - i - 1; j++) {
                if (arrRan[j] < arrRan[j + 1]) {

                    swap(arrRan[j], arrRan[j + 1]);
                    swapped = true;
                }
            }
        }


