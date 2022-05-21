/*�� �� ������� ��������,����� ��������� ��������� ���� �� ���� ����� ��� short
���������� �� ��������� ��������� �������� ��� ����������� ��������� � ���������� �� �������. */
#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
	short data;  /*���������� �� ����������� �� ��� short */
	node *next;
};

class stack
{
      node *top;
public :
      stack()   /*�����������*/
      { top=NULL;}
       void push();   /*����������� �� ��������� �� ��������� �� �������*/
       void pop();   /*����������� �� ��������� �� ���������� �� �������*/
       void display();  /*����������� �� ��������� �� ��������� �� ������ ��������*/
      ~stack();        /*����������� �� ����������*/
};

void stack::push()  /*���������� �� ��������� �� ��������� �� �������*/
{
      node *temp;
      temp=new node;
      cout<<"Dobavqne na element:";
      cin>>temp->data;
      temp->next=top;
      top=temp;
}

void stack::pop()  /*���������� �� ��������� �� ���������� �� �������*/
{
      if(top!=NULL)
      {
            node *temp=top;
            top=top->next;
            cout<<"Element "<<temp->data<<" e iztrit \n";
            delete temp;
      }
      else
            cout<<"Stekut e prazen.";
}

void stack::display() /*���������� �� ��������� �� ��������� �� ������ ��������*/
{
      node *temp=top;
      while(temp!=NULL)
      {
        cout<<temp->data<<endl;
        temp=temp->next;
      }
}

stack::~stack() /*���������� �� ����������*/
{
      while(top!=NULL)
      {
            node *temp=top;
            top=top->next;
            delete temp;
      }
}


int main ()
{
/*��������� �� ����� �� ���� stack*/
	stack obj;    
/*��������� �� ������ (character) � ��� ch,����� �� �� �������� � ��������� switch */
	char ch;      
	do
	{
	  cout<<"1.Vkluchvane \n 2.Izkluchvane \n ";
	  cout<<"3.Pokazvane na elementi \n 4.Izlizane \n";
	  cin>>ch;
	  switch (ch)
	  {
	  	/*��� ��������� �� 1 �� �� ������� ��������� �� ��������� �� �������*/
	    case '1':cout<<endl;obj.push();cout<<endl;break;  
		/*��� ��������� �� 2 �� �� ������� ��������� �� ���������� �� �������*/
		case '2':cout<<endl;obj.pop();cout<<endl;break;  
		/*��� ��������� �� 3 �� �� ������� ��������� �� ��������� �� ��������*/
		case '3':cout<<endl;obj.display();cout<<endl;break; 
		/*��� ������ ����� ������ ����� 1,2,3,4 �� ������� ������*/
		default:    
			{
				if (ch!='4')
				cout<<"Error"<<endl;
			};
	  }
	}
	while (ch!='4'); /*������ ch �� � ����� �� 4 �� ������� ������ �� do */
}
	


