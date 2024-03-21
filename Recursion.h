#pragma once
#include "MyHeader.h"

typedef struct _stRecursion {
	int nID;
	double nValue, nSum;
	_stRecursion() {
		nID = 0;
		nValue = 0;
		nSum = 0;
	}
} stRecursion, * pstRecursion;

typedef
struct _stArrayRecursion {
	int nCount;
	pstRecursion arrRec;
	_stArrayRecursion() { nCount = 0; arrRec = NULL; }
	//stArrayRecursion() { // должна быть какая-то черта хз что нужно
	//	nCount = 0;
	//	if (arrRec != NULL) { delete arrRec; arrRec = NULL; }
	//}

	int AddItem(int pnID, double pnValue, double pnSum) {
		nCount++;
		arrRec = (stRecursion*)realloc(arrRec, sizeof(stRecursion) * nCount);
		arrRec[nCount - 1].nID = pnID;
		arrRec[nCount - 1].nValue = pnValue;
		arrRec[nCount - 1].nSum = pnSum;
		return nCount;
	}

	stRecursion* Item(int pnIndex) {
		if (pnIndex >= 0 && pnIndex < nCount)
			return arrRec + pnIndex;
		else
			return 0;
	}

	int ID(int pnIndex) {
		if (pnIndex >= 0 && pnIndex < nCount)return arrRec[pnIndex].nID;
		else return -1;
	}

	double Value(int pnIndex) {
		if (pnIndex >= 0 && pnIndex < nCount)return arrRec[pnIndex].nValue;
		else return -1;
	}

	double Sum(int pnIndex) {
		if (pnIndex >= 0 && pnIndex < nCount)return arrRec[pnIndex].nSum;
		else return -1;
	}
}stArrayRecursion, * pstArrayRecursion;

static stRecursion* RecOut;
static CURSORINFO pci;

void Recursion();
void DrawAxisX(Graphics^ pgraph, RECT pArea, float pnMin, float pnMax, int pnSec = 10);
void DrawAxisY(Graphics^ pgraph, RECT pArea, float pnMin, float pnMax, int pnSec = 4);
void DrawGraph(Graphics^ pgraph, pstRecursion pRec, int pnSizeRec, RECT pstRect);
void DrawTextRotate(Graphics^ pgraph, String^ ptext, System::Drawing::Rectangle prect, Font^ pfont, Brush^ pbrush, float angle);
void DrawSideText(Graphics^ gr, Font^ font, Brush^ brush, RECT bounds, StringFormat string_format, String^ txt);
float nNext(float x, float nSum, int i, float nXi, pstRecursion pstRec);