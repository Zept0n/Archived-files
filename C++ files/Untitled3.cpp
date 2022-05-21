#include <iostream>
#include<cmath>
bool narcissistic( int value ){
    int size = trunc(log10(value)) + 1;
    return size;
}

int main() {
	
	std::cout<<narcissistic(5555);
	
}
