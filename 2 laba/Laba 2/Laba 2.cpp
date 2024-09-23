#include <iostream>
using namespace std;

int main() {
    const int a = 10;
    int arr[a];

    // ���� ����⮢ ���ᨢ�
    cout << "������ 10 楫�� �ᥫ: " << endl;
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    // �뢮� ����⮢ ���ᨢ�
    cout << "�������� ���ᨢ�: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ������ �㬬� ��� ����⮢ ���ᨢ�
    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += arr[i];
    }
    cout << "�㬬� ��� ����⮢ ���ᨢ�: " << sum << endl;

    // ���� �������쭮�� ����� ���ᨢ�
    int min = arr[0];
    for (int i = 1; i < a; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "��������� ����� ���ᨢ�: " << min << endl;

    // ����஢�� ����쪮�
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // ����� ����⮢
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // �뢮� �����஢����� ����⮢ ���ᨢ�
    cout << "�����஢���� ������ ���ᨢ�: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
