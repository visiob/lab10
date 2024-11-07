#include "pch.h"
#include "Windows.h"
using namespace System;

int main(array<System::String^>^ args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N, M, i, j, min;
    Random^ rand = gcnew Random();

    Console::Write("¬вед≥ть к≥льк≥сть р€дк≥в матриц≥: ");
    N = Convert::ToInt32(Console::ReadLine());
    Console::Write("¬вед≥ть к≥льк≥сть стовпц≥в матриц≥: ");
    M = Convert::ToInt32(Console::ReadLine());

    array<int, 2>^ A(gcnew array<int, 2>(N, M));
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            A[i, j] = rand->Next(1, 10);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            Console::Write(A[i, j] + "\t");
        }
        Console::WriteLine();
    }
    
    min = A[0, 0];
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (A[i, j] < min) {
                min = A[i, j];
            }
        }
    }

    Console::WriteLine();
    Console::WriteLine("ћ≥н≥мальний елемент матриц≥: {0}", min);
    Console::WriteLine();

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            A[i, j] = A[i, j] * min;
        }
    }
    Console::WriteLine("”творена матриц€:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            Console::Write(A[i, j] + "\t");
        }
        Console::WriteLine();
    }

    return 0;
}
