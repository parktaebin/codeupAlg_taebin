
#include <iostream>
#include<string>
#define MENU_COUNT 4

using namespace std;

int main()
{
	string menu[MENU_COUNT] = { "아메리카노","라떼","버블티","요거트스무디" }, order;
	int price[MENU_COUNT] = { 1000,2500,3000,4000 };
	int iIndex, bev_cnt,income,iTodayIncome=0;

	//메뉴판 출력하기
	for (iIndex = 0; iIndex < MENU_COUNT; iIndex++) {
		cout << menu[iIndex] << "  " << price[iIndex] << " 원 " << endl;
	}
	cout << "=================" << endl;
	//반복할 구문 while문으로 감싸고 탈출조건 전까지 계속 반복
	while (true) {
		//메뉴와 수량 입력받기
		cout << "주문할 음료와 수량을 입력하세요>";
		getline(cin, order, ' ');
		cin >> bev_cnt;
		cin.ignore();
		//음료수량에 0이 입력되면 종료
		if (bev_cnt == 0) {
			cout << "영업 종료합니다" << endl;
			cout << "하루 매출은" << iTodayIncome <<"입니다"<<endl;
			break;
		}

		for (iIndex = 0; iIndex < MENU_COUNT; iIndex++) {
			if (order == menu[iIndex]) {
				income = bev_cnt * price[iIndex];
				break;// break 안해주면 비교하고도 계속 index가 증가해서 나중에 출력 안됨
			}
		}//menucount와 인덱스가 같다는 말은 비교해줬는데도 break빠져나가지 못했다는것->없는 메뉴임
		if (iIndex == MENU_COUNT) {
			cout << "우리카페에 없는 메뉴입니다" << endl;
		}
		else {//menu[iIndex]로 출력해야 하는 이유 order는 단지 비교용이고 데이터는 배열에 저장되어 있음
			cout << "음료" << menu[iIndex] << " " << price[iIndex] << endl;
			cout << "가격" << income << endl;
			iTodayIncome = iTodayIncome + income;
		}
	}
	
	return 0;
}

