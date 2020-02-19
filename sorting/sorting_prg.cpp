
#include <iostream>
//inputNumber(),sortNumber(),outputNumber()함수가 선언되어있는 헤더파일을 include한다.
#include "myLib.h"
#define array_length 10//배열의 사이즈는 프로그램 내에서 바뀌지 않기때문에 상수로 준다.

using namespace std;

int main()
{
	int iNumber[array_length];
	//cpp파일은 안바뀌는게 제일 좋으므로, 배열사이즈를 매개변수로 넘겨준다.

	inputNumber(iNumber, array_length);
	sortNumber(iNumber, array_length);
	outputNumber(iNumber, array_length);
	return 0;
}