#include "hanoi.h"

int InputFromUser()
{
    int n{};

    std::cout << "<�ϳ����� ž>" << std::endl;
    std::cout << "1. �ѹ��� �ϳ��� ���ݸ� �ű� �� �ִ�" << std::endl;
    std::cout << "2. ū ������ ���� ���� ���� ������ �ȵȴ�" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "������ ������ �Է��ϼ��� : ";
    std::cin >> n;

    return n;
}


int Move(char from, char to,int n, int count)
{
    std::cout << ++count << " : " << from << "���� " << to << "�� ����" << n << "�� �ű�ϴ�" << std::endl;
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