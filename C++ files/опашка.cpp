#include<iostream>          
using namespace std;        
#define n 11           

void add(float key);  // Включване на елемент
int  Delete();       // Изключване на елемент
void Print();       //Показване на опашката
bool isEmpty();    //Проверява дали опашката е празна
bool isFull ();   //Проверява дали опашката е пълна

float Q[n];
int first=0, last=0; 
int main(){
    float val;
    char choice;

    do{
        cout<<"1. Vkluchvane \n";
        cout<<"2. Izkluchvane \n";
        cout<<"3. Pokazvane na opashka \n";
        cout<<"4. Izhod \n";
        cin>>choice;

        switch(choice)
        {
            case '1' :        // Добавя(включва) елемент
                if( isFull() ){
                    cout<<"\n Opashkata e pulna !!!\n";
                    break;
                }
                cin>>val;
                add(val);
                Print();
                break;

            case '2' :        //Изтрива(изкючва) елемент
                if( isEmpty() ){
                    cout<<"\n Opashkata e prazna !!!\n";
                    break;
                }
                cout<<"\nIztrit e element ot opashkata : "<<Delete()<<endl;
                Print();
                break;

            case '3' :        //Показва опашката
                if( isEmpty() ){
                    cout<<"\nOpashkata e prazna !!!\n";
                    break;
                }
                Print();
                break;

            default:    
			{
				if (choice!='4')
				cout<<"Error"<<endl;
			};
            
        }
        

    }
	while (choice!='4');

    return 0;
}

void add(float x){

    Q[last] = x;
    last =(last+1)%n ;       
}

int  Delete(){

    float temp =Q[first];
    first =(first+1)%n ;     
    return temp;
}

void Print(){
    int i;                             
    for(i=first; i!=last; i=(i+1)% n)  
        cout<<Q[i]<<" ";
    cout<<endl;
}

bool isEmpty(){
    if(first == last)
        return true;
    else
        return false;
}

bool isFull(){
    if( (last == n-1 && first == 0) || (first == last + 1)  )
        return true;
    else
        return false;
}
