#pragma once
#include<string>

using namespace std;

class cntStr {
private:
	string sInputStr;
public:
	cntStr();					//�⺻ ������
	cntStr(string testString);	//�Ű������� 1���� ������  
	void SetString(string prmStr);
	char pickString(int iIndex);
	int classifyChar(char cOneChar);
	int isupper(char cOneChar);
	int islower(char cOneChar);
	int isalpha(char cOneChar);
};