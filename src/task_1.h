/*
 * Author: Jamol
 * Date: 17.10.2023
 * Name:
 */
#include <string>

class FamilyMembers {
protected:
    std::string name;
    int age;

public:
    FamilyMembers(std::string name, int a) : name(name), age(a) {}
    virtual void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Brothers : public FamilyMembers {
private:
    std::string Occupation;

public:
    Brothers(std::string name, int a, std::string o) : FamilyMembers(name, a), Occupation(o){};
    void display() override{
        std::cout << "Nephew's name: " << name << ", Age: " << age << ", Kindergarten: " << Occupation << std::endl;

    }
};

class Nephews : public FamilyMembers {
private:
    std::string kinderGartenName;

public:
    Nephews(std::string name, int a, std::string k) : FamilyMembers(name, a), kinderGartenName(k){};
    void display() override{
        std::cout << "Nephew's name: " << name << ", Age: " << age << ", Kindergarten: " << kinderGartenName << std::endl;

    }
};

class Parents : public FamilyMembers{
private:
    std::string occupation;

public:
    Parents(std::string name, int a, std::string o) : FamilyMembers(name, a), occupation(o) {}
    void display() override {
        std::cout << "Parents' name: " << name << ", Age: " << age << ", Occupation: " << occupation << std::endl;
    }
};
