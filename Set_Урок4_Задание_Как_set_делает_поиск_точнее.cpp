//Урок 4. Как set делает поиск точнее
// 
//Задание
// 
//Научите свою поисковую систему отбрасывать стоп - слова.
//На вход примите сначала строку стоп - слов, а затем с нового
//абзаца — строку - запрос.Выводите только те слова, которых
//нет в списке запрещённых. Формат вывода слов оставьте как в заготовке кода.
//Функция разбиения строки на слова у вас уже реализована,
//осталось сделать фильтрацию.
// 
//Ввод:
// 
//with many very
//very kind dog with brown fur
// 
//Вывод :
// 
//[kind]
//[dog]
//[brown]
//[fur]

#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

vector<string> SplitIntoWords(string text) {
    vector<string> words;
    string word;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            words.push_back(word);
            word = ""s;
        }
        else {
            word += text[i];
        }
    }
    words.push_back(word);

    return words;
}

set<string> ParseStopWords(string text) {
    set<string> stop_words;
    for (string word : SplitIntoWords(text)) {
        stop_words.insert(word);
    }
    return stop_words;
}

vector<string> ParseQuery(string text, set<string> stop_words) {
    vector<string> words;
    for (string word : SplitIntoWords(text)) {
        if (stop_words.count(word) == 0) {
            words.push_back(word);
        }
    }
    return words;
}


int main() {
    // Read stop words
    string stop_words_joined;
    getline(cin, stop_words_joined);
    set<string> stop_words = ParseStopWords(stop_words_joined);

    // Read query
    string query;
    getline(cin, query);
    vector<string> query_words = ParseQuery(query, stop_words);

    for (string word : query_words) {
        cout << '[' << word << ']' << endl;
    }
}