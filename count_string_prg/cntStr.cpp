#include <iostream>
#include<string>
#include"cntStr.h"

using namespace std;

//�⺻ ������
cntStr::cntStr() {
	sInputStr = " ";					//������� sInputStr�� ""���� �ʱ�ȭ�ϴ� ������
}
//�Ű����� Ÿ���� string, ������ 1���� ������
cntStr::cntStr(string testString) {
	sInputStr = testString;				//������� sInputStr�� �Ű������� �ʱ�ȭ�ϴ� ������
}
void cntStr::SetString(string prmSt) {
	sInputStr = prmSt;					//������� sInputStr�� �Ű������� ���Ҵ��ϴ� ����Լ�
}
//pickString ��� �Լ�
char cntStr::pickString(int iIndex) {	//������ �Է¹޾� ���ڿ��� �����ؼ� ��ȯ
	char cIndexingChar;
	cIndexingChar = sInputStr.at(iIndex);
	return cIndexingChar;
}
//classifyChar ��� �Լ�
int cntStr::classifyChar(char cOneChar) {
										//�ϳ��� ���ڸ� ��
	int iResult;
		if (cOneChar >= 'A' && cOneChar<='Z') {	
			iResult = 1;				//�빮���̸� 1�� ��ȯ
		}
		else if (cOneChar >= 'a' && cOneChar <= 'z') {
			iResult = 2;				//�ҹ����̸� 2�� ��ȯ
		}
		else {
			iResult = 0;				//�� ��(Ư������,����)�̸� 0�� ��ȯ
		}
		return iResult;
}
//isupper�Լ�
int cntStr::isupper(char cOneChar){		//���ڸ� �޾Ƽ� �ε����� �ٲٴ� ���� ex)A->0,B->1	
	int sArrIndex=cOneChar - 'A';
	return sArrIndex;
}
//islower�Լ�
int cntStr::islower(char cOneChar) {	//�ҹ��ڸ� �ε����� �ٲٴ� ���� a->0,b->1...
	int lArrIndex = cOneChar - 'a';
	return lArrIndex;
}
//isalpha�Լ�
int cntStr::isalpha(char cOneChar) {	//Ư�����ڰ� ������ 1�� ��ȯ�ϴ� ��� �Լ�
	int ArrIndex = 1;
	return ArrIndex;
}
