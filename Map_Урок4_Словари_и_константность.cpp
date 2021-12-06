//Map
//
//Урок 4. Словари и константность
//
//Задание
//
//Вы провели выходные за своим любимым хобби — бёрдвотчингом.
//Вооружившись биноклем, блокнотом и фотоаппаратом с огромным
//объективом, вы два дня просидели в кустах у большого водоёма.
//Чтобы не спугнуть птиц, вы боялись пошевелиться, и записи
//получились не очень хорошо структурированными. Все статистические
//данные вы решили посчитать, когда фотографии будут готовы.
//Теперь они готовы, и каждая фотография подписана именем птицы,
//изображённой на ней. Каждая птица сфотографирована только один
//раз, но птицы могли быть одного вида. Используйте эти данные и
//выведите на экран количество птиц каждого вида в алфавитном порядке.
// 
//Пример использования
// 
//int main() 
// {
//     vector<string> bird_types = { "zyablik"s, "vorobey"s, "zyablik"s, "sinica"s, "sinica"s };
//     PrintBirdNumByType(bird_types);
// }
// 
//     Пример вывода
// 
//       sinica 2
//      vorobey 1
//      zyablik 2

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;


void PrintBirdNumByType(const vector<string>& types)
{
    map<string, size_t> map;
    for (const auto& type : types)
    {
        ++map[type];
    }
    for (const auto& pair : map)
    {
        cout << pair.first << ' ' << pair.second << '\n';// напишите здесь ваше решение
    }
}

int main() {
    vector<string> bird_types = { "zyablik"s, "vorobey"s, "zyablik"s, "sinica"s, "sinica"s };
    PrintBirdNumByType(bird_types);
}