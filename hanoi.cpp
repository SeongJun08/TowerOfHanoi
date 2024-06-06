#include "hanoi.h"

int InputFromUser()
{
    int n{};

    std::cout << "<하노이의 탑>" << std::endl;
    std::cout << "1. 한번에 하나의 원판만 옮길 수 있다" << std::endl;
    std::cout << "2. 큰 원판이 작은 원판 위에 있으면 안된다" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "원판의 갯수를 입력하세요 : ";
    std::cin >> n;

    return n;
}

void Move(char from, char to)
{
    std::cout << from << "에서 " << to << "로 원판을 옮깁니다" << std::endl;
}

void Hanoi(int n, char from, char temp, char to)
{
    if (n == 1)
    {
        Move(from, to);
    }
    else
    {
        Hanoi(n - 1, from, to, temp);
        Move(from, to);
        Hanoi(n - 1, temp, from, to);
    }
}