#pragma once
#include<string>

using namespace std;

class cntStr {
private:
	string sInputStr;
public:
	cntStr();					//기본 생성자
	cntStr(string testString);	//매개변수가 1개인 생성자  
	void SetString(string prmStr);
	char pickString(int iIndex);
	int classifyChar(char cOneChar);
	int isupper(char cOneChar);
	int islower(char cOneChar);
	int isalpha(char cOneChar);
};