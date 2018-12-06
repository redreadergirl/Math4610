#ifndef MYLIB_H
#define MYLIB_H
#include <vector>

using namespace std;

double dmaceps();
float maceps();
double relerr(double x, double xbar);
double abserr(double x, double xbar);
double approxderiv(double h, double x, double(*fOfX)(double));
double bisection(double a, double b, double(*function)(double));
double newton(double x, double(*fOfX) (double), double(*fPrime)(double));
double biNewtHybrid(double a, double b, double(*fOfX)(double), double(*fPrime)(double));
double biSecHybrid(double a, double b, double(*fOfX)(double));
double secant(double x0, double x1, double(*fOfX)(double));
double onorm(vector<double> e, int length);
double tnorm(vector<double> e, int length);
double inorm(vector<double> e, int length);
double relinorm(vector<double> x, vector<double> y, int xLength, int yLength);
double relonorm(vector<double> x, vector<double> y, int xLength, int yLength);
double reltnorm(vector<double> x, vector<double> y, int xLength, int yLength);
double absinorm(vector<double> x, vector<double> y, int xLength, int yLength);
double absonorm(vector<double> x, vector<double> y, int xLength, int yLength);
double abstnorm(vector<double> x, vector<double> y, int xLength, int yLength);
vector<double> vectorAddition(vector<double> x, vector<double> y);
vector<double> vectorSubtraction(vector<double> x, vector<double> y);
vector<double> crossProduct(vector<double> x, vector<double> y);
vector<double> scalarVector(vector<double> x, double scalar);
double dotProduct(vector<double> x, vector<double> y);
vector<vector<double>> matrixSubtraction(vector<vector<double>> x, vector<vector<double>> y);
vector<vector<double>> matrixAddition(vector<vector<double>> x, vector<vector<double>> y);
vector<vector<double>> matrixMultiplication(vector<vector<double>> x, vector<vector<double>> y);
vector<vector<double>> matrixTranspose(vector<vector<double>> x);
double matrixTrace(vector<vector<double>> x);
vector<vector<double>> scalarMatrix(vector<vector<double>> matrix, double scalar);
vector<double> matrixMultVec(vector<vector<double>> A, vector<double> x);
double frobenius(vector<vector<double>> matrix);
double determinant(vector<vector<double>> matrix);
vector<vector<double>> kronecker(vector<vector<double>> a, vector<vector<double>> b);
pair<vector<double>, vector<double>> orthonormal(vector<double> v1, vector<double> v2);
vector<vector<double>> mmomp(vector<vector<double>> x, vector<vector<double>> y);
vector<double> mvomp(vector<vector<double>> matrix, vector<double> vec);
vector<vector<double>> rectGauss(vector<vector<double>> matrix);
vector<double> backSub(vector<vector<double>> A, vector<double> b);
vector<double> forwardSub(vector<vector<double>> A, vector<double> b);
vector<double> gaussianSolution(vector<vector<double>> A, vector<double> b);
vector<vector<double>> gaussianElim(vector<vector<double>> matrix);
vector<vector<vector<double>>> luFactorization(vector<vector<double>> matrix);
vector<vector<double>> cholesky(vector<vector<double>> matrix);
vector<double> choleskySolution(vector<vector<double>> A, vector<double> b);
vector<double> luSolution(vector<vector<double>> A, vector<double> b);
vector<vector<double>> testMatrix(double n);
vector<double> testVector(vector<vector<double>> matrix);
vector<double> jacobi(vector<vector<double>> A, vector<double> b);
vector<double> gaussSeidel(vector<vector<double>> A, vector<double> b);
vector<double> steepestDescent(vector<vector<double>> A, vector<double> b);
double vecTransposeVec(vector<double> a, vector<double> b);
vector<double> conjugateGradient(vector<vector<double>> A, vector<double> b);
vector<double> jacobiOMP(vector<vector<double>> A, vector<double> b);
vector<double> gaussSeidelOMP(vector<vector<double>> A, vector<double> b);
vector<double> conjugateGradientOMP(vector<vector<double>> A, vector<double> b);
double power(vector<vector<double>> matrix);
double inversePower(vector<vector<double>> matrix);
double conditionNumber(vector<vector<double>> matrix);
double vecTransposeVecOMP(vector<double> a, vector<double> b);
double powerOMP(vector<vector<double>> matrix);
double inversePowerOMP(vector<vector<double>> matrix);
double conditionNumberOMP(vector<vector<double>> matrix);

#endif
