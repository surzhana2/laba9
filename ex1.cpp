#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {

    cout << "C-СТРОКИ\n";
    
    char w1[20] = "Привет";
    char w2[20] = "Мир";
    char res[40] = "";
    
    cout << "Длина строки '" << w1 << "' = " << strlen(w1) << "\n";
    
    strcpy(res, w1);
    cout << "Копия: " << res << "\n";
    
    strcat(res, " ");
    strcat(res, w2);
    cout << "Объединение: " << res << "\n";
    
    cout << "\n";
    


    cout << "C++ string\n";
    
    string s1 = "Hello";
    string s2 = "World";
    string s3;
    
    cout << "Длина строки '" << s1 << "' = " << s1.length() << "\n";

    
    s3.append(s1);
    s3.append(" ");
    s3.append(s2);
    cout << "append: " << s3 << "\n";
    

    string t = "C++ programming";
    int pos = t.find("programming");
    if (pos != -1) {
        cout << "Слово найдено на позиции: " << pos << "\n";
    }
    
    return 0;
}