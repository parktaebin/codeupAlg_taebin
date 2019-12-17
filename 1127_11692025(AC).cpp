#include <iostream>
using namespace std;
int main()
{
	int iMidScore, iFinScore, iPerformScore;
	float fMidProportion, fFinProportion, fPerformProPortion, fTotalScore;
	cin >> fMidProportion >> iMidScore;
	cin >> fFinProportion >> iFinScore;
	cin >> fPerformProPortion >> iPerformScore;

	fTotalScore = (fMidProportion*iMidScore)+(fFinProportion*iFinScore)+(fPerformProPortion * iPerformScore);
	printf("%.1f", fTotalScore);
}
