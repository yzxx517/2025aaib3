///week05-3b.cpp �T�X�@��Part1/Part2 Input/Output
///Part3: stringstream �_�r
///CPE �o������2�D UVA 483 Word Scramble ��r�ˤ�
#include <iostream>
#include <sstream> ///Part3: ��r��Ψ��_�r
#include <string>
#include <algorithm> ///Part4:�ϹL��,�n�Ψ� algorithm �t��k
using namespace std;
int main()
{
    string line; /// Part 1: Input
    while (getline( cin, line ) ) {
    ///Ū�J1�� �@��Ū,Ū��Ctrl-z�~����
        stringstream ss(line); ///Part3: ��r��Ψ��_�r
        string word; ///�Ψ��_�r�o
        while ( ss >> word ){ ///Part3: ��r��Ψ��_�r
            reverse(word.begin(), word.end() ); ///Part4:�ϹL��
            cout << " " << word;
        }
        cout << endl; ///����
        ///Part 2: Output
        cout << line << endl; ///���H�K�L�X��
    }
}
