#include <format>
#include <iostream>


constexpr int arrayOneSize{7};
int arrayTwoSize{10};

void outputArray(int items[], size_t size);

void inputVector(int items[], size_t size);

void copyArray(const int items[], int items2[], size_t size);

bool compareArrays(const int items[], const int items2[], size_t size);

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
int main() {
    int integers1[arrayOneSize];
    int integers2[arrayTwoSize];

    // print integers1 size and contents
    std::cout << "Size of array integers1 is " << arrayOneSize
            << "\nArray after initialization:";
    outputArray(integers1, arrayOneSize);

    // print integers2 size and contents
    std::cout << "\nSize of array integers2 is " << arrayTwoSize
            << "\nArray after initialization:";
    outputArray(integers2, arrayTwoSize);

    // input and print integers1 and integers2
    std::cout << "\nEnter 17 integers:\n";
    inputVector(integers1, arrayOneSize);
    inputVector(integers2, arrayTwoSize);

    std::cout << "\nAfter input, the arrays contain:\n"
            << "integers1:";
    outputArray(integers1, arrayOneSize);
    std::cout << "integers2:";
    outputArray(integers2, arrayTwoSize);

    // use inequality (!=) operator with vector objects
    std::cout << "\nEvaluating: integers1 != integers2\n";

    if (arrayOneSize != arrayTwoSize || !compareArrays(integers1, integers2, arrayOneSize)) {
        std::cout << "integers1 and integers2 are not equal\n";
    }

    // create a copy of integers1
    int arrayThreeSize{arrayOneSize};
    int integers3[arrayThreeSize];
    copyArray(integers1, integers3, arrayOneSize);

    std::cout << "\nSize of array integers3 is " << arrayThreeSize
            << "\nArray after initialization: ";
    outputArray(integers3, arrayThreeSize);

    //
    std::cout << "\nAssigning integers2 to integers1:\n";
    arrayTwoSize = arrayOneSize;
    int integers2Redone[arrayTwoSize];
    copyArray(integers1, integers2Redone, arrayOneSize);

    std::cout << "integers1: ";
    outputArray(integers1, arrayOneSize);
    std::cout << "integers2: ";
    outputArray(integers2Redone, arrayTwoSize);

    // use equality (==) operator with vector objects
    std::cout << "\nEvaluating: integers1 == integers2\n";

    if (compareArrays(integers1, integers2Redone, arrayOneSize)) {
        std::cout << "integers1 and integers2 are equal\n";
    }

    // use the value at location 5 as an rvalue
    std::cout << "\nintegers1[5] is " << integers1[5];

    // use integers1.at(5) as an lvalue
    std::cout << "\n\nAssigning 1000 to integers1[5]\n";
    integers1[5] = 1000;
    std::cout << "integers1: ";
    outputArray(integers1, arrayOneSize);

    // attempt to use out-of-range index
    // WILL NOT THROW AN ERROR
    try {
        std::cout << "\nAttempt to display integers1[15]\n";
        std::cout << integers1[15] << '\n'; // ERROR: out of range
    } catch (const std::out_of_range &ex) {
        std::cerr << "An exception occurred: " << ex.what() << '\n';
    }

    // changing the size of a vector
    std::cout << "\nCurrent integers3 size is: " << arrayThreeSize;
    ++arrayThreeSize;
    int integers3Expanded[arrayThreeSize];
    copyArray(integers1, integers3Expanded, arrayOneSize);
    integers3Expanded[arrayThreeSize - 1] = 1000; // add 1000 to the end of the array
    std::cout << "\nNew integers3 size is: " << arrayThreeSize
            << "\nintegers3 now contains: ";
    outputArray(integers3Expanded, arrayThreeSize);
}

void outputArray(int items[], const size_t size) {
    for (int i{0}; i < size; ++i) {
        std::cout << items[i] << ' ';
    }
    std::cout << '\n';
}


// input vector contents
void inputVector(int items[], const size_t size) {
    for (int i{0}; i < size; ++i) {
        std::cin >> items[i];
    }
}

void copyArray(const int items[], int items2[], const size_t size) {
    for (int i{0}; i < size; ++i) {
        items2[i] = items[i];
    }
}


bool compareArrays(const int items[], const int items2[], const size_t size) {
    for (int i{0}; i < size; ++i) {
        if (items[i] != items2[i]) {
            return false;
        }
    }
    return true;
}
