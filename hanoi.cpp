#include "hanoi.h"

int InputFromUser()
{
    int n{};

    std::cout << "<하노이의 탑>" << std::endl;
    std::cout << "1. 한번에 하나의 원반만 옮길 수 있다" << std::endl;
    std::cout << "2. 큰 원판이 작은 원반 위에 있으면 안된다" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "원반의 갯수를 입력하세요 : ";
    std::cin >> n;

    return n;
}


int Move(char from, char to,int n, int count)
{
    std::cout << ++count << " : " << from << "에서 " << to << "로 원반" << n << "을 옮깁니다" << std::endl;
    return count;
}

int Hanoi(int n, char from, char temp, char to, int count)
{
    if (n == 1)
    {
        count = Move(from, to, n, count);
    }
    else
    {
        count = Hanoi(n - 1, from, to, temp, count);
        count = Move(from, to, n, count);
        count = Hanoi(n - 1, temp, from, to, count);
    }
    return count;
}