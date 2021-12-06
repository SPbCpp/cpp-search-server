//Map
//
//Урок 2. Как работают словари
//
//Задание
//Иногда нужно срочно найти что-нибудь в значениях, а быстрый
//поиск работает только среди ключей. Напишите функцию, которая
//переворачивает словарь: ключи становятся значениями, а значения — ключами.
//В словаре ниже по имени животного можно найти его латинское название.
// 
//Примеры
// 
//               ВХОДНОЙ СЛОВАРЬ	               ВЫХОДНОЙ СЛОВАРЬ
//         { {"cat", "felis catus"},           { {"felis catus", "cat"},
//          {"dog", "canis lupus"} }          { "canis lupus", "dog" }}



#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, string> BuildReversedMap(const map<string, string>& m) {
    map<string, string> result;
    for (const auto& [key, value] : m) {
        result[value] = key;
    }
    return result;
}

int main()
{
	map<string, string> m = { {"cat", "felis catus"}, {"dog", "canis lupus"} };
	map<string, string> new_m = BuildReversedMap(m);

	return 0;
}