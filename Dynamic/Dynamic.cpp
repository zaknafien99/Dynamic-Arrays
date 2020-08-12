#include "pch.h"

using namespace System;

const size_t SIZE = 10;

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Dynamic Arrays");

    // Create an array dynamically
    int* pa = new int[SIZE];

    // Fill the array
    for (size_t i = 0; i < SIZE; i++)
    {
        pa[i] = i * 2;
    }

    //Print the array content
    for (size_t j = 0; j < SIZE; j++)
    {
        Console::WriteLine(pa[j]);
    }

    // Get rid of the array once we're finished with it
    delete[] pa;

    return 0;
}
