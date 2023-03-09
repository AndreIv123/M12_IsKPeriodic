#include <string>
#include <iostream>

bool IsKPeriodic(int k, const std::string &str);

void test(const char *c_str) {

    std::string str = std::string(c_str);
    int len = str.size();

    std::cout << std::endl << "# Test " << len << " char string : " << str << std::endl;

    for (int k = -1; k<len+2; ++k) {
        std::cout << IsKPeriodic(k, str )
        << " # " << str << " / " << k << std::endl;
    };
};



int main() {

    test("a");
    test("aa");
    test("abc");
    test("AbAb");
    test("AbcAbc");

};


/*
@TASK:

В итоговом домашнем задании вашей задачей будет написать функцию IsKPeriodic,
которая проверяет, является ли строка кратной числу K.

Кратность — повторяемость строки каждые K символов (K должно быть больше 0).
Например, abcabcabcabc имеет кратность  3, так как она состоит из подстрок abc, имеющих длину 3.

Задание следует загрузить в свой репозиторий на GitHub.

Ваш код будет оцениваться ментором курса, а значит, вы сможете
получить вместе с баллом развёрнутый комментарий эксперта.

Оцениваться задание будет максимум в 6 баллов по двум критериям:
- эффективность алгоритма;
- оформление кода.
*/
