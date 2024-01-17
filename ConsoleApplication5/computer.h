#pragma once

class CPU 
{
private:
    char* model;

public:
    CPU(const char* model);
    ~CPU();
    const char* getModel() const;
};

class SSD 
{
private:
    int capacity;

public:
    SSD(int capacity);
    ~SSD();
    int getCapacity() const;
};

class GPU 
{
private:
    char* model;

public:
    GPU(const char* model);
    ~GPU();
    const char* getModel() const;
};

class Memory 
{
private:
    int size;

public:
    Memory(int size);
    ~Memory();
    int getSize() const;
};

class Laptop 
{
private:
    static int laptopCount;
    char* name;
    float cost;
    char* color;
    CPU* cpu;
    SSD* ssd;
    GPU* gpu;
    Memory* memory;

public:
    Laptop(const char* name, float cost, const char* color, CPU* cpu, SSD* ssd, GPU* gpu, Memory* memory);
    ~Laptop();
    const char* getName() const;
    float getCost() const;
    const char* getColor() const;
    static int getLaptopCount();
};