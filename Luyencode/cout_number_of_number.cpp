#include <iostream>
#include <string.h>
#include <cstring>

int main(){
	std::string input; // Khởi tạo biến input.
	std::cin >> input;
	int len = input.length(); // Tính độ dài chuỗi.
	if(input[0] == '-' || input[0] == '+') // Nếu chuỗi nhập vào có kí tự đầu tiên là '-' hoặc '+' thì bỏ qua => trừ đi 1
		std::cout << len - 1;
	else 
		std::cout << len;
	return 0;
}