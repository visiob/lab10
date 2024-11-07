#include "pch.h"
#include "Windows.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 

    int n, i;
    Random^ rand = gcnew Random();
    
    Console::Write(L"Введіть кількість елементів в масиві: ");
    n = Convert::ToInt32(Console::ReadLine());

    array<int>^ A(gcnew array<int>(n));
    array<int>^ B(gcnew array<int>(n));

    for (i = 0; i < n; i++) {
        A[i] = rand->Next(1, 100); 
        B[i] = rand->Next(1, 100); 
    }

    Console::Write("Масив A: ");
    for each (int item in A) {
        Console::Write(item + " ");
    }
    Console::WriteLine();
    Console::Write("Масив B: ");
    for each (int item in B) {
        Console::Write(item + " ");
    }
    Console::WriteLine();

    for (i = 0; i < n; i++) {
        int temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }

    Console::WriteLine();
    Console::WriteLine("Обмін значеннями проведено.");
    Console::WriteLine();

    Console::Write("Масив A: ");
    for each (int item in A) {
        Console::Write(item + " ");
    }
    Console::WriteLine();
    Console::Write("Масив B: ");
    for each (int item in B) {
        Console::Write(item + " ");
    }
    Console::WriteLine();

    return 0;
}
