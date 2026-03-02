#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    const int max_words = 20;
    const int word_len = 10;
    char words[max_words][word_len + 1];
    int n;

    // ПЕРВЫЙ ВАРИАНТ (C-строки)
    cout << "Введите количество слов (не более 20): ";
    cin >> n;
    cout << endl;

    if (n > max_words) {
        cout << "Ошибка, количество слов не более 20" << endl;
    } else {
        cout << "Введите слова (максимум 10 символов):" << endl;
        for (int i = 0; i < n; i++) {
            cin >> words[i];
            // Простая проверка: если длина больше 10, сообщаем
            if (strlen(words[i]) > word_len) {
                cout << "Предупреждение: слово длиннее 10 символов" << endl;
            }
        }
        
        cout << "Вывод слов с четными номерами:" << endl;
        for (int i = 1; i < n; i += 2) {
            cout << words[i] << endl;
        }
    }

    // ВТОРОЙ ВАРИАНТ (C++ строки)
    cout << "\n2 вариант:" << endl;
    cout << "Введите количество слов (не более 20): ";
    cin >> n;

    if (n > max_words) {
        cout << "Ошибка, количество слов не более 20" << endl;
    } else {
        vector<string> word(n);
        cout << "Введите слова (максимум 10 символов):" << endl;
        for (int i = 0; i < n; i++) {
            cin >> word[i];
            // Проверка длины для C++ строки
            if (word[i].length() > word_len) {
                cout << "Предупреждение: слово длиннее 10 символов" << endl;
            }
        }
        
        cout << "Вывод слов с четными номерами:" << endl;
        for (int i = 1; i < n; i += 2) {
            cout << word[i] << endl;
        }
    }

    return 0;
}