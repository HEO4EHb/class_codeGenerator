#include <iostream>
#include <string>
#include "class_codeGenerator.h"

//Дан класс, который умеет генерировать код на разных языках.
// Предложите рефакторинг кода с учетом того, что количество языков будет расширяться.
int main() {
    codeGenerator** test4 = new codeGenerator*[3];
    test4[0] = new generateCpp;
    test4[1] = new generateJava;
    test4[2] = new generatePHP;
    test4[3] = new generateC;
    for(int i=0;i<4;i++)
    {
        std::cout<<test4[i]->getCode()<<std::endl;
    }
    return 0;
}