#include "computer.h"
#include <iostream>
using namespace std;

int Laptop::laptopCount = 0;

Laptop::Laptop(const char* name, float cost, const char* color, CPU* cpu, SSD* ssd, GPU* gpu, Memory* memory) : name(nullptr), cost(cost), color(nullptr), cpu(cpu), ssd(ssd), gpu(gpu), memory(memory) 
{
    int len = 0;
    while (name[len] != '\0') 
    {
        len++;
    }

    this->name = new char[len + 1];

    for (int i = 0; i <= len; i++) 
    {
        this->name[i] = name[i];
    }

    len = 0;
    while (color[len] != '\0') 
    {
        len++;
    }

    this->color = new char[len + 1];

    for (int i = 0; i <= len; i++) 
    {
        this->color[i] = color[i];
    }

    laptopCount++;
}

Laptop::~Laptop() 
{
    delete[] name;
    delete[] color;
    delete cpu;
    delete ssd;
    delete gpu;
    delete memory;
    laptopCount--;
}

const char* Laptop::getName() const 
{
    return name;
}

float Laptop::getCost() const 
{
    return cost;
}

const char* Laptop::getColor() const 
{
    return color;
}

int Laptop::getLaptopCount() 
{
    return laptopCount;
}

int main() 
{

    system("chcp 1251");

    CPU* cpu = new CPU("Intel Core i5");
    SSD* ssd = new SSD(512);
    GPU* gpu = new GPU("NVIDIA GeForce GTX 1660");
    Memory* memory = new Memory(16);

    Laptop* laptop = new Laptop("Мой ноутбук", 1200.0f, "Серебристый", cpu, ssd, gpu, memory);

    cout << "Информация о ноутбуке:" << endl;
    cout << "Название: " << laptop->getName() << endl;
    cout << "Цена: $" << laptop->getCost() << endl;
    cout << "Цвет: " << laptop->getColor() << endl;
    cout << "Модель CPU: " << cpu->getModel() << endl;
    cout << "Емкость SSD: " << ssd->getCapacity() << "ГБ" << endl;
    cout << "Модель GPU: " << gpu->getModel() << endl;
    cout << "Объем памяти: " << memory->getSize() << "ГБ" << endl;

    delete laptop;
    delete cpu;
    delete ssd;
    delete gpu;
    delete memory;

    return 0; 
}
