#include <iostream>
using namespace std;
//Курсова работа на Себастиян Пламенов Георгиев 1650136020
int encrypt() //Функция за криптиране 
{
    char message[100], ch; //Променливи за цялото съобщение и за отделните букви от него
    int i, key;  //Променлива key за ключа и i за цикъла for
    
    cout << "Tekst za shifrovane(Bez prazni mesta):"; //Изкарва на екрана даденото съобщение(Компилатора ми не разпознава кирилица)
    cin>>message; //Въвеждане на написан текст в променливата message
    cout << "Kliuch: ";
    cin >> key;
    
    for(i = 0; message[i] != '\0'; ++i){ //Цикъл
        ch = message[i]; //Задава  ch = message[i-При всяко изпълнение на цикъла ще се променя с +1,така че ще премина на следващата буква от съобщението]
        
        if(ch >= 'a' && ch <= 'z'){ //Криптиране ако изполваме малки букви
            ch = (ch +key-97)%26 +97;
            
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){ //Криптиране ако използваме големи букви
            ch = (ch +key-65)%26 +65;
            
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            
            message[i] = ch; //При всяко изпълнение на цикъла ще променя буквите в съобщението/текста една по една
        }
    }
    
    cout << "Shifrovan tekst: " << message; //Изкарва целия шифрован текст.
    
}

int decrypt() //Функция за декриптиране аналогична на криптиращата
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

int main() //Главна функция
{
   int x;

   do //Цикъл(изпълнява се докато не се въведе 0)
   {
       cout<<"\n";
       cout<< "0.Izlizane \n";
       cout<< "1.Shifrirane \n";
       cout<< "2.Deshifrirane \n";
       cin >> x;
   switch(x)
   {
    case 1: //Ако е въведено 1 изпълнява функцията за криптиране
    encrypt();
    break;
    case 2: //Ако е въведено 2 изпълнява функцията за декриптиране
    decrypt();
    break;
    case 0: //Ако е въведено 0 излиза от програмата
    cout<<"Izlizane..." ;
    break;
    default:
    cout << "\n Greshka !!!\n";
   }
   } while(x!= 0);
   return 0;
}
