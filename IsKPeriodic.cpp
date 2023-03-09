#include <string>

/* Проверка кратности строки
Реализована через линейный поиск вхождения k первых символов.
*/
bool IsKPeriodic(int k, const std::string &text) {

    // k должно быть больше 0 (по условию задания)
    if ( k < 1 ) {return false;};

    int lenText = text.size();

    // Строка не может быть кратна k, если она короче k
    if ( k > lenText ) {return false;};

    // Строка не может быть кратна k, если ее размер не кратен k
    if ( lenText % k ) {return false;};


    // Перебор симоволов проверяемой строки с шагом k
    for (int idxText = 0; idxText<lenText; idxText+=k) {

        /* Проверка совпадения символов проверямой строки в текущей позиции
           с символами начального участка заданной длины k (шаблона)
        */
        for (int idxPattern=0; idxPattern<k; ++idxPattern) {
            // Поиск ведется до первого несовпадения
            if ( text[idxText+idxPattern] != text[idxPattern] ) {return false;};
        };
    };

    return true;

};



