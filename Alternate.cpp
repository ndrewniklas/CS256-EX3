#include <iostream>
#include <string>

int lines = 0;
int sp = 0;
int flip = 0;
std::string x = "XXXXXXXXXXXXXXXXXXXX";

int main(){
	
	std::cout << "Input a positive integer: ";
	std::cin >> lines;
	while(lines < 0){
		std::cout << "Invalid input! Must be positive" << std::endl;
	}
	
	for(int i = 0; i < lines; i++){
		int j = 0;
		while(j < sp){
			std::cout << " ";
			++j;
		}
		std::cout << x << std::endl;
		if(flip%2 == 0){
			if(sp < 50){
				++sp;
			}else{
				++flip;
				--sp;
			}
		}else{
			if(sp > 0){
				--sp;
			}else{
				++flip;
				++sp;
			}
		}
	}
}