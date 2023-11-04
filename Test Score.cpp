#include <iostream>
#include <string>

// Define/Clarify Variables
#define GRADE_A_THRESHOLD 90
#define GRADE_B_THRESHOLD 75
#define GRADE_C_THRESHOLD 50

int main()
{
    int value = 0;
    std::cout << "Please enter your test score (0 - 100): ";
    std::cin >> value;
    if (value < GRADE_C_THRESHOLD)
    {
        std::cout << "Fail";
    }
    else if (value < GRADE_B_THRESHOLD)
    {
        std::cout << "Pass: Grade C";
    }
    else if (value < GRADE_A_THRESHOLD)
    {
        std::cout << "Pass: Grade B";
    }
    else
    {
        std::cout << "Pass: Grade A";
    }
}
