#include <iostream>

//LAB 3 BÀI 7

int main ()
{
    int n, dao_bit = 0;
    std::cin >> n;
    int i = 0;

    //n = 25 = 11001
    //d = 00000;
    //bit cuoi = 1
    //d = 00001
    //n >> 1 = 01100

    //d << 1 = 00010
    //bit cuoi = 0
    //d = 00010
    //n >> 1 = 00110

    //d << 1 = 00100
    //bit cuoi = 0
    //d = 00100
    //n >> 1 = 00011

    //d << 1 = 01000
    //bit cuoi = 1
    //d = 01001
    //n >> 1 = 00001

    //d << 1 = 10010
    //bit cuoi = 1
    //d = 10011
    //n >> 1 = 00000 = 0


    while (n > 0)
    {
        dao_bit = (dao_bit << 1) | (n & 1);
        n = n >> 1;
        i++;
    }
    //dao_bit = 10011
    //n ban dau = 11001

    while (i > 0)
    {
        std::cout << (dao_bit & 1);
        dao_bit = dao_bit >> 1;
        i--;
    }

    std::cout << "\n";
    return 0;
}