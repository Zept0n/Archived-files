/*Да се състави програма,която реализира динамичен стек от цели числа тип short
Програмага да представя основните операции със структурата включване и изключване на елемент. */
#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
	short data;  /*Елементите на структурата от тип short */
	node *next;
};

class stack
{
      node *top;
public :
      stack()   /*конструктор*/
      { top=NULL;}
       void push();   /*Деклариране на функцията за включване на елемент*/
       void pop();   /*Деклариране на функцията за изключване на елемент*/
       void display();  /*Деклариране на функцията за показване на всички елементи*/
      ~stack();        /*Деклариране на деструктор*/
};

void stack::push()  /*Дефиниране на функцията за включване на елемент*/
{
      node *temp;
      temp=new node;
      cout<<"Dobavqne na element:";
      cin>>temp->data;
      temp->next=top;
      top=temp;
}

void stack::pop()  /*Дефиниране на функцията за изключване на елемент*/
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

void stack::display() /*Дефиниране на функцията за показване на всички елементи*/
{
      node *temp=top;
      while(temp!=NULL)
      {
        cout<<temp->data<<endl;
        temp=temp->next;
      }
}

stack::~stack() /*Дефиниране на деструктор*/
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
/*Създаване на обект от клас stack*/
	stack obj;    
/*Създаване на символ (character) с име ch,който ще се използва в оператора switch */
	char ch;      
	do
	{
	  cout<<"1.Vkluchvane \n 2.Izkluchvane \n ";
	  cout<<"3.Pokazvane na elementi \n 4.Izlizane \n";
	  cin>>ch;
	  switch (ch)
	  {
	  	/*При натискане на 1 ще се изпълни функцията за включване на елемент*/
	    case '1':cout<<endl;obj.push();cout<<endl;break;  
		/*При натискане на 2 ще се изпълни функцията за изключване на елемент*/
		case '2':cout<<endl;obj.pop();cout<<endl;break;  
		/*При натискане на 3 ще се изпълни функцията за показване на елементи*/
		case '3':cout<<endl;obj.display();cout<<endl;break; 
		/*Във всички други случай освен 1,2,3,4 ще изписва грешка*/
		default:    
			{
				if (ch!='4')
				cout<<"Error"<<endl;
			};
	  }
	}
	while (ch!='4'); /*Докато ch не е равно на 4 ще повтаря тялото на do */
}
	


