#include "pch.h"
#include "Windows.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    String^ line(L"� ���� ����� �� ���� �����");
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
        Console::WriteLine(L"����� � ����������");
    else
        Console::WriteLine(L"����� �� � ����������");
    return 0;
}
