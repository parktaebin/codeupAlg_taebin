#include <iostream>
//inputNumber(),sortNumber(),outputNumber()�Լ��� ����Ǿ��ִ� ��������� include�Ѵ�.
#include "myLib.h"

using namespace std;
void inputNumber(int* num, int aSize) {
	
	int iIndex;
	cout << aSize<<"���� ������ �Է��ϼ���" << endl;
	//for���� �̿��ؼ� index�� 0�������� �迭�� ������ ��ŭ ������Ű�� �Է¹޴´�.
	for (iIndex = 0; iIndex < aSize; iIndex++) {
		cin >> num[iIndex];
	}
}
void sortNumber(int* num,int aSize) {

	int iIndex,iMinValue,iMinIndex;
	int iTemp,seqIndex;

	//0��° �ε������� 1�� �����ϸ� �������� �ڸ��� �ٲٴ� �ݺ���
	for (seqIndex = 0; seqIndex < aSize; seqIndex++) {

		iMinValue = num[seqIndex];
		iMinIndex = seqIndex;
		//index�� 0��,1��,2��(seqIndex�� ������ �ʱ�ȭ�ϸ�)... �迭 ũ�⸸ŭ �ݺ��ϸ� index�� �ϳ��� �����Ѵ�. 
		for (iIndex = seqIndex; iIndex < aSize; iIndex++) {
			//iIndex�� �迭�� ���ڰ� �ּڰ� ���� �۰ų� ������
			if (num[iIndex] <= iMinValue) {
				//�ּڰ��� iIndex��°�� ���ڷ� �����ϰ�, �׶��� index�� �ּ��ε��������� �����Ѵ�.
				iMinValue = num[iIndex];
				iMinIndex = iIndex;
			//�迭�� ��ġ �ٲٱ�(if�� �ȿ��� ������Ѵ�...!-> �ּҰ��� �̹� �ٲ���� ������)
			/*�ּҰ��� �ִ� �ε���(iMinIndex)�� �迭�� seqIndex��°�� ��ġ��Ű�� 
			���� seqIndex�� �ε����� �ڸ��� �ٲ۴�.*/
			iTemp = num[seqIndex];
			num[seqIndex]=num[iMinIndex];
			num[iMinIndex] = iTemp;
			}
		}
	}
	//��ȯŸ���� ���⶧���� ������ ��� �ȴ�.
}
//�迭�� ����ϴ� �Լ�
void outputNumber(int* num, int aSize) {
	int iIndex;
	cout << "sorting�� ���" << endl;
	//for���� �̿��ؼ� index�� 0�������� �迭�� ������ ��ŭ ������Ű�� �Է¹޴´�.
	for (iIndex = 0; iIndex < aSize; iIndex++) {
		cout << num[iIndex] << " ";
	}
}