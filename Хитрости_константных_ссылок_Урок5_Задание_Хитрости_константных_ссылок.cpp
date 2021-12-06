//Хитрости константных ссылок
//
//Урок 5. Хитрости константных
//
//Задание
//
//Поэкспериментируйте с вызовом функции SplitIntoWords, которая принимает
//строку по константной ссылке.Передайте в неё текст test search query и выведите
//полученные слова в квадратных скобках.


#include <iostream>
#include <string>
#include <vector>

using namespace std;


vector<string> SplitIntoWords(const string& text) {
    vector<string> words;
    string word;
    for (const char c : text) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        }
        else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}

int main()
{
    string query = "test search query";// ваш код

    for (string word: SplitIntoWords(query))
    {
        cout <<'['<< word << ']'<<' ';
    }

    return 0;
}