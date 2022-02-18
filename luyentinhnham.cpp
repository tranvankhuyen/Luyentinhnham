#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void Multiplication (int rand1, int rand2, int &score, int result, bool &check)
{
	if(rand1 * rand2 == result){
		std::cout << "TRUE" << std::endl; //--------------------------
		score++;
		check = true;

		} // Kết quả đúng -> print TRUE.
			// std::cout << "TRUE" << std::endl; //--------------------------
	else { // Sai -> print FALSE
		std::cout << "FALSE" << " ---> " << rand1 * rand2 << std::endl; // ---------------------------
		check = false;
	}
}
void Summation (int rand1, int rand2, int &score, int result, bool &check)
{
	if(rand1 + rand2 == result){
		std::cout << "TRUE" << std::endl; //--------------------------
		score++;
		check = true;

		} // Kết quả đúng -> print TRUE.
			// std::cout << "TRUE" << std::endl; //--------------------------
	else { // Sai -> print FALSE
		std::cout << "FALSE" << " ---> " << rand1 + rand2 << std::endl; // ---------------------------
		check = false;
	}
}
void Subtraction (int rand1, int rand2, int &score, int result, bool &check)
{
	if(rand1 - rand2 == result){
		std::cout << "TRUE" << std::endl; //--------------------------
		score++;
		check = true;

		} // Kết quả đúng -> print TRUE.
			// std::cout << "TRUE" << std::endl; //--------------------------
	else { // Sai -> print FALSE
		std::cout << "FALSE" << " ---> " << rand1 - rand2 << std::endl; // ---------------------------
		check = false;
	}
}

int main(){
	int rand1, rand2, Operator; // Khai báo hai biến random
	clock_t start, end; // Khai báo biến thời gian.
	double time_use; // Khai báo biến thời gian tính xong phép tính.
	int score = 0;
	int time_TB = 0;
	bool check;
	std::string OPERA; // Biến xác định toán tử.
	while(true)
	{
		
		srand(time(NULL));
		
		rand1 = rand() % 20 + 2; 
		rand2 = rand() % 20 + 2;
		Operator = rand() % 3;
		if(Operator == 0) OPERA = " x ";
		if(Operator == 1) OPERA = " + ";
		if(Operator == 2) OPERA = " - ";
	

		std::cout << rand1 << OPERA << rand2 << " = "; // In ra màn hình phép tính/ -------------------------------
		start = clock(); // thời gian bắt đầu
		int result; // Khai báo biến kết quả.
		std::cin >> result; // Enter result/
		std::cout << "< ----------------------- > " << std::endl;
		if(result == 0) // Câu lệnh thoát chương trình.
			break;
		else{
			if(Operator == 0){
				Multiplication(rand1, rand2, score, result, check);
			}
			else if(Operator == 1)
				Summation(rand1, rand2, score, result, check);
			else if(Operator == 2)
				Subtraction(rand1, rand2, score, result, check);
			end = clock(); // thời gian kết thúc
		std::cout << "< ----------------------- > " << std::endl;
			time_use = (double)(end - start) / CLOCKS_PER_SEC; // Tính thời gian tính toán. 
			std::cout << "Time use: " << time_use << std::endl; // In ra màn hình thời gian đã sử dụng. -------------------------
		if(check == true){
			time_TB += time_use;
		}
		}
	}
	std::cout << "Score: " << score << std::endl;
	std::cout << "Time TB: " << double(time_TB)/score << std::endl;
	system("pause");
	return 0;
}


