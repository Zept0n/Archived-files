#include <iostream>
using namespace std;
//������� ������ �� ��������� �������� �������� 1650136020
int encrypt() //������� �� ���������� 
{
    char message[100], ch; //���������� �� ������ ��������� � �� ��������� ����� �� ����
    int i, key;  //���������� key �� ����� � i �� ������ for
    
    cout << "Tekst za shifrovane(Bez prazni mesta):"; //������� �� ������ �������� ���������(����������� �� �� ���������� ��������)
    cin>>message; //��������� �� ������� ����� � ������������ message
    cout << "Kliuch: ";
    cin >> key;
    
    for(i = 0; message[i] != '\0'; ++i){ //�����
        ch = message[i]; //������  ch = message[i-��� ����� ���������� �� ������ �� �� ������� � +1,���� �� �� ������� �� ���������� ����� �� �����������]
        
        if(ch >= 'a' && ch <= 'z'){ //���������� ��� ��������� ����� �����
            ch = (ch +key-97)%26 +97;
            
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){ //���������� ��� ���������� ������ �����
            ch = (ch +key-65)%26 +65;
            
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            
            message[i] = ch; //��� ����� ���������� �� ������ �� ������� ������� � �����������/������ ���� �� ����
        }
    }
    
    cout << "Shifrovan tekst: " << message; //������� ����� �������� �����.
    
}

int decrypt() //������� �� ������������ ���������� �� ������������
{
    char message[100], ch;
    int i, key;
    
    cout << "Tekst za deshifrovane(Bez prazni mesta): ";
    cin>>message;
    cout << "Kliuch: ";
    cin >> key;
    
    for(i = 0; message[i] != '\0'; ++i){
        ch = message[i];
        
        if(ch >= 'a' && ch <= 'z'){
            ch = (ch - key+97)%26 +97;
            
            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }
            
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = (ch -key+65)%26 +65;
            
            if(ch > 'a'){
                ch = ch + 'Z' - 'A' + 1;
            }
            
            message[i] = ch;
        }
    }
    
    cout << "Shifrovan tekst: " << message;

}

int main() //������ �������
{
   int x;

   do //�����(��������� �� ������ �� �� ������ 0)
   {
       cout<<"\n";
       cout<< "0.Izlizane \n";
       cout<< "1.Shifrirane \n";
       cout<< "2.Deshifrirane \n";
       cin >> x;
   switch(x)
   {
    case 1: //��� � �������� 1 ��������� ��������� �� ����������
    encrypt();
    break;
    case 2: //��� � �������� 2 ��������� ��������� �� ������������
    decrypt();
    break;
    case 0: //��� � �������� 0 ������ �� ����������
    cout<<"Izlizane..." ;
    break;
    default:
    cout << "\n Greshka !!!\n";
   }
   } while(x!= 0);
   return 0;
}
