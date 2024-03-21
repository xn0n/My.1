#include "Recursion.h"

void Recursion() {
};

void DrawAxisX(Graphics^ pgraph, RECT pArea, float pnMin, float pnMax, int pnSec) {

};
void DrawAxisY(Graphics^ pgraph, RECT pArea, float pnMin, float pnMax, int pnSec) {
};
void DrawGraph(Graphics^ pgraph, pstRecursion pRec, int pnSizeRec, RECT pstRect) {
};
void DrawTextRotate(Graphics^ pgraph, String^ ptext, System::Drawing::Rectangle prect, Font^ pfont, Brush^ pbrush, float angle) {
	System::Drawing::Rectangle rect(0, 0, prect.Height, prect.Width);
	pgraph->ResetTransform();
	pgraph->RotateTransform(angle);

	pgraph->TranslateTransform(prect.Left, prect.Bottom, System::Drawing::Drawing2D::MatrixOrder::Append);
	StringFormat^ string_format = gcnew StringFormat();
	string_format->Alignment = StringAlignment::Center;
	string_format->LineAlignment = StringAlignment::Center;
	Pen^ pen = gcnew Pen(Color::Black, 2);
	pgraph->DrawRectangle(pen, prect);
	pgraph->DrawString(ptext, pfont, pbrush, rect, string_format);
	pgraph->ResetTransform();
};
void DrawSideText(Graphics^ gr, Font^ font, Brush^ brush, RECT bounds, StringFormat string_format, String^ txt) {
};

float nNext(float x, float nSum, int i, float nXi, pstRecursion pstRec) {
	//nXi = i > 1 ? nXi * x * x * (i - 1) / i : nXi * x * x / i;
	//nXi = -1 * (x * x * (2 * i - 3)) / (2 * i - 1);
	nXi = (i == 1) ? x : nXi * x * x * i / (i - 1);
	nSum = nSum + nXi;

	pstRec[i - 1].nID = i;
	pstRec[i - 1].nValue = nXi;
	pstRec[i - 1].nSum = nSum;

	(pstRec + i - 1)->nValue = nXi;
	(*(pstRec + i - 1)).nValue = nXi;

	if (i < 20) return nNext(x, nSum, i + 1, nXi, pstRec);

	return nSum;
}

//void MyForm::Recursion() {
//	tbTitle->
//}