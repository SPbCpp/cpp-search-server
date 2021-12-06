//Урок 4. Зачем нужны функции

//Задание 2
// 
//Напишите функцию, которая
//называется PalindromeFilter,
//возвращает vector<string>,
//принимает vector<string> words и int min_length,
//возвращает из вектора words все строки - палиндромы длиной
//не меньше min_length.
//Функция PalindromeFilter должна использовать вспомогательную
//функцию IsPalindrome, которая определяет, будет ли переданная ей строка палиндромом.
//Примеры входных и выходных данных
// 
//      WORDS	              MINLENGTH	          РЕЗУЛЬТАТ
// 
//    rotor, anna, kayak	      5               rotor, kayak
//    rotor, anna	              2	              rotor, anna
//    racecar, bro, code	      4	              racecar
// 
//Как будет тестироваться ваш код
//Тренажёр проверит работу функций IsPalindrome и PalindromeFilter, вызывая
//их с различными входными данными и сравнивая результат этих
//функции с ожидаемыми значениями.Функция main будет заменена на версию из тренажёра.

#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*  объявляем функции для определения палиндрома
 * принимает строку s
 * возвращает true если строка s палиндром или false если строка s не палиндром */
bool IsPalindrome(string s) {
    /* начинаем цикл от 0 до половины размера строки с округлением вниз */
    for (int i = 0; i < s.size() / 2; ++i) {
        /* условие на выполнение блока:
         * i-ый элемент слева не равен  i-ыму элементу справа. */
        if (s[i] != s[s.size() - i - 1]) {
            /* это не палиндром.
             * возвращаем false */
            return false;
        }
    }
    /* если внутри цикла мы не вернули false значит это палиндром.
     * возвращаем true */
    return true;
}

/*  объявляем функцию
 * принимает вектор слов words и минимальную длину слова
 * возвращает вектор палиндромов длиной не меньше min_length */
vector<string> PalindromeFilter(vector<string> words, int min_length) {
    /*  объявляем вектор строк для хранения палиндромов длиной не меньше min_length  */
    vector<string> result;
    /*  проходим по всем словам из вектора words */
    for (string s : words) {
        /* условие на выполнение блока:
        * длина слова не меньше min_length и слово является палиндромом */
        if (s.size() >= min_length && IsPalindrome(s)) {
            /* FOR SUPPORT: добавляем слово в конец вектора палиндромов */
            result.push_back(s);
        }
    }
    /* возвращаем вектор палиндромов */
    return result;
}

int main()
{

}