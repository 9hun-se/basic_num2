#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;



void createRandomAnimal() {

}

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound." << endl;
    }


};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};


class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() {
        cout << "Cow moos: Moo~ Moo~" << endl;
    }
};

class Zoo {
private:
    Animal* animals[10]; // ���� ��ü�� �����ϴ� ������ �迭
public:
    // ������ �������� �߰��ϴ� �Լ�
    // - Animal ��ü�� �����͸� �޾� ������ �迭�� �����մϴ�.
    // - ���� �����̶� ���� �� �߰��� �� �ֽ��ϴ�.
    // - �Է� �Ű�����: Animal* (�߰��� ���� ��ü)
    // - ��ȯ��: ����
    void addAnimal(Animal* animal);

    // �������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
    // - ��� ���� ��ü�� ���� ���������� �Ҹ��� ���� �����̴� ������ �����մϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: ����
    void performActions();

    // Zoo �Ҹ���
    // - Zoo ��ü�� �Ҹ�� ��, ���� ���Ϳ� ����� ��� ���� ��ü�� �޸𸮸� �����մϴ�.
    // - �޸� ������ �����ϱ� ���� ���� �Ҵ�� Animal ��ü�� `delete` �մϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: ����
    ~Zoo();
};



int main() {
  

   
    Animal* myAnimal[3];
    myAnimal[0] = new Dog();  
    myAnimal[1] = new Cat();   
    myAnimal[2] = new Cow();

    for (int i = 0; i < 3; i++) {
        myAnimal[i]->makeSound();  
    }
    for (int i = 0; i < 3; i++) {
        delete myAnimal[i];
    }

    return 0;
}