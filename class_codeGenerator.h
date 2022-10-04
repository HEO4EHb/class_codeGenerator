

#ifndef CLASS_CODEGENERATOR_CLASS_CODEGENERATOR_H
#define CLASS_CODEGENERATOR_CLASS_CODEGENERATOR_H

#endif //CLASS_CODEGENERATOR_CLASS_CODEGENERATOR_H

#pragma once
#include <iostream>
#include <string>
using namespace std;
//Дан класс, который умеет генерировать код на разных языках.
// Предложите рефакторинг кода с учетом того, что количество языков будет расширяться.
class codeGenerator
{
public:
    codeGenerator(){
        std::cout <<"Base class:code Constructor" <<std::endl;
    };

    virtual ~codeGenerator(){
        std::cout <<"Base class:code Destructor" <<std::endl;
    };
    std::string getCode(){
        return generateCode();
    }
protected:
    enum Lang {JAVA = 0, Cpp = 1, PHP = 2,C=3};
    Lang m_language;
    virtual std::string generateCode() = 0;
};
class generateJava: public codeGenerator
{
    std::string generateCode() override{
        std::cout <<"Base class:JAVA Constructor" <<std::endl;
        return "code on Java";
    }
public:
    generateJava() { m_language = JAVA; }
    virtual ~generateJava(){
        std::cout <<"Base class:JAVA Destructor" <<std::endl;
    };
};

class generateCpp: public codeGenerator
{
    std::string generateCode() override{
        std::cout <<"Base class:Cpp Constructor" <<std::endl;
        return "code on Cpp";
    }
public:
    generateCpp() { m_language = Cpp; }
    virtual ~generateCpp(){
        std::cout <<"Base class:Cpp Destructor" <<std::endl;
    };
};

class generatePHP: public codeGenerator {
    std::string generateCode() override {
        std::cout << "Base class:PHP Constructor" << std::endl;
        return "code on PHP";
    }

public:
    generatePHP() { m_language = PHP; }

    virtual ~generatePHP() {
        std::cout << "Base class:PHP Destructor" << std::endl;
    };


};
class generateC : public codeGenerator {
    std::string generateCode() override {
        std::cout << "Base class:C Constructor" << std::endl;
        return "code on C";
    }

public:
    generateC() { m_language = C; }

    virtual ~generateC() {
        std::cout << "Base class:C Destructor" << std::endl;
    };
};


