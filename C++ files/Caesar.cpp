#include <iostream>
using namespace std;
int encrypt()
{
    char message[100], ch;
    int i, key;
    
    cout << "????? ?? ????????:";
    cin>>message;
    cout << "????: ";
    cin >> key;
    
    for(i = 0; message[i] != '\0'; ++i){
        ch = message[i];
        
        if(ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            
            message[i] = ch;
        }
    }
    
    cout << "???????? ?????: " << message;
    
}

#include<iostream>
 
using namespace std;
 
int decrypt()
{
    char message[100], ch;
    int i, key;
    
    cout << "????? ?? ??????????: ";
    cin>>message;
    cout << "????: ";
    cin >> key;
    
    for(i = 0; message[i] != '\0'; ++i){
        ch = message[i];
        
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - key;
            
            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }
            
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch - key;
            
            if(ch > 'a'){
                ch = ch + 'Z' - 'A' + 1;
            }
            
            message[i] = ch;
        }
    }
    
    cout << "?????????? ?????: " << message;

}

int main()
{
   int x;

   do 
   {
       cout<<"\n";
       cout<< "0.???????? \n";
       cout<< "1.???????? \n";
       cout<< "2.?????????? \n";
       cin >> x;
   switch(x)
   {
      //first case for encrypting a string
      case 1:
        encrypt();
         break;

      //second case for decrypting a string
      case 2:
      decrypt();
      break;
      case 0:
      cout<<"????????..." ;
      default:
         cout << "\n?????? !!!\n";
   }
   } while (x != 0);
   return 0;
   
   }
