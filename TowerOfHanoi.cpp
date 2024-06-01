#include <iostream>

void Hanoi(int n, char from, char temp, char to)
{
    if (n == 1)
    {
        std::cout << "Move " << from << " -> " << to << "로" << " 원반 " << n << "을 옮깁니다" << std::endl;
    }
    else
    {
        Hanoi(n - 1, from, to, temp);
        std::cout << "Move " << from << " -> " << to << "로" << " 원반 " << n << "을 옮깁니다" << std::endl;
        Hanoi(n - 1, temp, from, to);
    }
}

int main()
{
    /* 하노이의 탑
    원판의 갯수를 입력 받는다
    입력받은 갯수의 원판을 만들고 이름을 붙인다(A~)
    원반은 임시적으로 3개로 한다
    A B C의 원판이 있고 A 원판에 3개의 원반이 매달려있다
    원반은 아래에서부터 위로갈수록 작아진다
    원반은 자신보다 작은 원반 위에 놓을 수 없다
    A에 쌓여있는 원반을 C로 옮기면 성공이다
    재귀를 써본 뒤 제한없이 만들어보자
    */

    int wonPan;
    std::cout << " 원판의 갯수를 입력하세요" << std::endl;
    std::cin >> wonPan;
    Hanoi(wonPan, 'A', 'B', 'C');

}