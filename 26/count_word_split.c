int count_words(char*str)
{
    int count = 0;
    int in_word = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && !in_word)
        {
            count ++;
            in_word = 1;
        }
        else if(str[i] == ' ' && str[i] == 't')
        {
            in_word = 0;
        }
    i ++;}
return count;
}

// int main() {
//     // Тест 1: обычная строка с несколькими словами
//      char* test1 = "Hello, world! This is a test.";
//     printf("Test 1: \"%s\" - %d words\n", test1, count_words(test1)); // Ожидается 6 слов

//     // Тест 2: строка с множеством пробелов и табуляций
//      char* test2 = "    Hello\t\tworld! \t   ";
//     printf("Test 2: \"%s\" - %d words\n", test2, count_words(test2)); // Ожидается 2 слова

//     // Тест 3: строка без слов (только пробелы и табы)
//      char* test3 = "   \t   ";
//     printf("Test 3: \"%s\" - %d words\n", test3, count_words(test3)); // Ожидается 0 слов

//     // Тест 4: пустая строка
//      char* test4 = "";
//     printf("Test 4: \"%s\" - %d words\n", test4, count_words(test4)); // Ожидается 0 слов

//     // Тест 5: строка с одним словом
//      char* test5 = "Word";
//     printf("Test 5: \"%s\" - %d words\n", test5, count_words(test5)); // Ожидается 1 слово

//     return 0;
// }
