#include <iostream>
#include <stack>

using namespace std;

int main()
{
    /* ��������� �� ���� */
    stack<int short> Stek;
    cout<<"Broi elementi:"<<Stek.size()<<endl;
    /* ��������� �� 3 ��������*/
    Stek.push(1);
    Stek.push(2);
    Stek.push(3);
    cout<<"Broi elementi:"<<Stek.size()<<endl;
    /* ���������� ���-������ ������� �� �����*/
    Stek.pop();
    cout<<"Broi elementi:"<<Stek.size()<<endl;
    return 0;
}

