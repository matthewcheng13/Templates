//including other code
#include <iostream>
#include "../include/utilities/math/MathUtilities.h"

//including a namespace
using namespace std;

//int main() {

//the entry point of the program
int main(int argc, char** argv) {

    //parses the length of the side given in the command line
    char* temp = argv[1];

    //converts the character to an integer
    int n = atoi(temp);

    //declare and initialize printer to test triangle
    std::cout << "The triangle:\n";
    FigurePrinter* printer = new TrianglePrinter(n);
    printer->printFigure(n);

    //delete pointer printer to save memory
    delete printer;

    //initialize printer to test diamond
    std::cout << "The diamond:\n";
    printer = new DiamondPrinter(n);
    printer->printFigure(n);

    //delete again
    delete printer;

    //initialize printer to test trapezoid
    std::cout << "The trapezoid:\n";
    printer = new TrapezoidPrinter(n);
    printer->printFigure(n);

    //delete one more time
    delete printer;

    return 0;
}
