 #include <iostream>
#include <string>

using namespace std;

int main() {
    int x=4;
    int y=2;
    cout<<x<<endl;
    cout<<y<<endl;

 // Operators
    // Arithmetic Operators
    cout << "\nArithmetic Operators:" << endl;

    int additionResult = x + y;
    cout << "Addition: " << additionResult << endl;

    int subtractionResult = x - y;
    cout << "Subtraction: " << subtractionResult << endl;

    int multiplicationResult = x * y;
    cout << "Multiplication: " << multiplicationResult << endl;

    float divisionResult = static_cast<float>(x) / y;
    cout << "Division: " << divisionResult << endl;

    int modulusResult = x % y;
    cout << "Modulus: " << modulusResult << endl;

    int exponentiationResult = 1;
    for (int i = 0; i < y; ++i) {
        exponentiationResult *= x;
    }
    cout << "Exponentiation: " << exponentiationResult << endl;


    // Comparison Operators
    cout << "\nComparison Operators:" << endl;

    bool equalResult = x == y;
    cout << "Equal: " << equalResult << endl;

    bool notEqualResult = x != y;
    cout << "Not Equal: " << notEqualResult << endl;

    bool greaterThanResult = x > y;
    cout << "Greater Than: " << greaterThanResult << endl;

    bool lessThanResult = x < y;
    cout << "Less Than: " << lessThanResult << endl;

    bool greaterThanEqualResult = x >= y;
    cout << "Greater Than or Equal: " << greaterThanEqualResult << endl;

    bool lessThanEqualResult = x <= y;
    cout << "Less Than or Equal: " << lessThanEqualResult << endl;
    

    // Logical Operators
    cout << "\nLogical Operators:" << endl;

    bool andResult = (x > 0) && (y > 0);
    cout << "AND: " << andResult << endl;

    bool orResult = (x > 0) || (y < 0);
    cout << "OR: " << orResult << endl;

    bool notResult = !(x > 0);
    cout << "NOT: " << notResult << endl;
    
    return 0;
}
