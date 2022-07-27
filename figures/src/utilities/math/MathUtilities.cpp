#include "../../../include/utilities/math/MathUtilities.h"
#include <iostream>

// Constructor for each class
FigurePrinter::FigurePrinter(int n) {}

TrianglePrinter::TrianglePrinter(int n) : FigurePrinter(n) {}

DiamondPrinter::DiamondPrinter(int n) : TrianglePrinter(n) {}

TrapezoidPrinter::TrapezoidPrinter(int n) : FigurePrinter(n) {}

// printFigure function and its overrides
void FigurePrinter::printFigure(int n) {}

void TrianglePrinter::printFigure(int n) {
    printDownwardTriangle(n);
}

void DiamondPrinter::printFigure(int n) {
    printUpwardTriangle(n);
    printDownwardTriangle(n);
}

void TrapezoidPrinter::printFigure(int n) {
    printDownwardTrapezoid(n);
}

// actually printing the triangle
void TrianglePrinter::printDownwardTriangle(int n) {
    int count = n;

    //while loop goes line by line until reaching 0
    while (count > 0) {
        //first for loop handles all empty spaces before the stars
        //these spaces ensure that the stars are all centered correctly
        for (int i = n - count; i > 0; i = i-2) {
            std::cout << " ";
        }
        //second for loop handles the actual stars
        for (int i = count; i > 0; i--) {
            std::cout << "*";
        }
        std::cout << std::endl;
        count = count-2;
    }
}

// printing an upward triangle to be paired with the downward triangle (making a diamond)
void DiamondPrinter::printUpwardTriangle(int n) {
    int count;

    //instead of starting at n and moving to 0, this goes the opposite direction
    if (n % 2 == 0) {
        count = 2;
    } else {
        count = 1;
    }

    //same method as the downward triangle
    while (count < n) {
        for (int i = n - count; i > 0; i = i-2) {
            std::cout << " ";
        }
        for (int i = count; i > 0; i--) {
            std::cout << "*";
        }
        std::cout << std::endl;
        count = count+2;
    }
}

// printing the trapezoid
void TrapezoidPrinter::printDownwardTrapezoid(int n) {

    //same as downward triangle but goes until the bottom is half the length of the top
    int half = n / 2;
    int count = n;

    while (count >= half) {
        for (int i = n - count; i > 0; i = i-2) {
            std::cout << " ";
        }
        for (int i = count; i > 0; i--) {
            std::cout << "*";
        }
        std::cout << std::endl;
        count = count-2;
    }
}