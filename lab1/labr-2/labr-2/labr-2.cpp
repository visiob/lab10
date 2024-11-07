#include "pch.h"
#include "Windows.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    String^ line(L"À ÐÎÇÀ ÓÏÀËÀ ÍÀ ËÀÏÓ ÀÇÎÐÀ");
    Console::WriteLine(line);
    String^ test(line->Replace(L" ", L""));
    int count(0);
    int i;
    int size(test->Length);
    for (i = 0; i < size; i++) {
        if (test[i] == test[size - 1 - i]) {
            count += 1;
        }
    }
    if (count == size)
        Console::WriteLine(L"Ðÿäîê º ïàë³íäðîìîì");
    else
        Console::WriteLine(L"Ðÿäîê íå º ïàë³íäðîìîì");
    return 0;
}
