#include "computer.h"

CPU::CPU(const char* model) 
{
    int len = 0;
    while (model[len] != '\0') 
    {
        len++;
    }

    this->model = new char[len + 1];

    for (int i = 0; i <= len; i++) 
    {
        this->model[i] = model[i];
    }
}

CPU::~CPU() 
{
    delete[] model;
}

const char* CPU::getModel() const 
{
    return model;
}

SSD::SSD(int capacity) : capacity(capacity) {}

SSD::~SSD() {}

int SSD::getCapacity() const 
{
    return capacity;
}

GPU::GPU(const char* model) 
{
    int len = 0;
    while (model[len] != '\0') 
    {
        len++;
    }

    this->model = new char[len + 1];

    for (int i = 0; i <= len; ++i) 
    {
        this->model[i] = model[i];
    }
}

GPU::~GPU() 
{
    delete[] model;
}

const char* GPU::getModel() const 
{
    return model;
}

Memory::Memory(int size) : size(size) {}

Memory::~Memory() {}

int Memory::getSize() const 
{
    return size;
}
