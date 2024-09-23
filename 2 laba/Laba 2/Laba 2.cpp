#include <iostream>
using namespace std;

int main() {
    const int a = 10;
    int arr[a];

    // Ввод элементов массива
    cout << "Введите 10 целых чисел: " << endl;
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    // Вывод элементов массива
    cout << "Элементы массива: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Подсчет суммы всех элементов массива
    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += arr[i];
    }
    cout << "Сумма всех элементов массива: " << sum << endl;

    // Поиск минимального элемента массива
    int min = arr[0];
    for (int i = 1; i < a; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Минимальный элемент массива: " << min << endl;

    // Сортировка пузырьком
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Обмен элементов
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Вывод отсортированных элементов массива
    cout << "Отсортированные элементы массива: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
