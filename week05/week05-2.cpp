/// week05-2.cpp
/// �d�� stringstream
#include <iostream> ///���F cin cout
#include <string> ///���F�r��string
#include <sstream> ///�s�� string ��stream ���~��
using namespace std; ///���F���g std::cin
int main()
{
    string line; ///�ǳƩ� �@��� ���r��
    getline( cin, line ); ///�@��Ū�J�@���
    cout << line << endl; ///�L�X�� �[����

    stringstream ss(line); ///(�s��) ��string�ܦ�stream
    string word;
    while( ss >> word ){
        cout << "ssŪ��1�Ӧr: " << word << endl;
    }
}
