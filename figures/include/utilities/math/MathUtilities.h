#ifndef TOOLS_INTRO_MATHUTILITIES_H
#define TOOLS_INTRO_MATHUTILITIES_H

// class FigurePrinter
class FigurePrinter {
public:
    explicit FigurePrinter(int n);
    virtual void printFigure(int n);
};

// subclass for triangles
class TrianglePrinter : public FigurePrinter {
public:
    explicit TrianglePrinter(int n);

protected:
    static void printDownwardTriangle(int n);

    void printFigure(int n);
};

// subclass for diamonds
class DiamondPrinter : public TrianglePrinter {
public:
    explicit DiamondPrinter(int n);
protected:
    static void printUpwardTriangle(int n);

    void printFigure(int n);
};

// subclass for trapezoids
class TrapezoidPrinter : public FigurePrinter {
public:
    explicit TrapezoidPrinter(int n);
protected:
    static void printDownwardTrapezoid(int n);

    void printFigure(int n);
};

#endif //TOOLS_INTRO_MATHUTILITIES_H
