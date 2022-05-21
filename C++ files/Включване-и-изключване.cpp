#include <iostream>
#include <stack>

using namespace std;

int main()
{
    /* Създаване на стек */
    stack<int short> Stek;
    cout<<"Broi elementi:"<<Stek.size()<<endl;
    /* Включване на 3 елемента*/
    Stek.push(1);
    Stek.push(2);
    Stek.push(3);
    cout<<"Broi elementi:"<<Stek.size()<<endl;
    /* Изключваме най-горния елемент от стека*/
    Stek.pop();
    cout<<"Broi elementi:"<<Stek.size()<<endl;
    return 0;
}

