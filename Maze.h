#pragma once
#include "MyHeader.h"



namespace My {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Maze
	/// </summary>
	public ref class Maze : public System::Windows::Forms::Form
	{
	public:
		Maze(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		int* nMov = 0;

		const short START_X = 2,
			START_Y = 0,
			FINISH_X = 31,
			FINISH_Y = 7,
			L_WIDTH = 32,
			L_HEIGHT = 32;

		unsigned int bit = 0b10000000000000000000000000000000;

		short bx = 2,
			by = 0;
		int scale = 20;

		short moving(short pbx, short pby) {
			short nRes = 0;
			Graphics^ g = Maze::CreateGraphics();
			Brush^ bWall = gcnew SolidBrush(Color::Aqua);
			Brush^ bBack = gcnew SolidBrush(Color::Blue);
			Brush^ bStart = gcnew SolidBrush(Color::Red);
			Brush^ bFinish = gcnew SolidBrush(Color::Green);
			Brush^ bBug = gcnew SolidBrush(Color::Yellow);
			Brush^ bRoute = gcnew SolidBrush(Color::Beige);
			unsigned int map[32] =
			{
	0b1101'1111'1111'1111'1111'1111'1111'1111,//1
	0b1101'1111'1101'1100'0011'0000'0000'0011,//2
	0b1001'1111'1001'1101'1000'0110'1001'1011,//3
	0b1100'0011'1011'1111'1000'0011'1100'0111,//4
	0b1100'0000'0011'1000'0000'1111'1111'1111,//5
	0b1110'1111'1111'1101'1110'0111'1010'0111,//6
	0b1110'0111'1111'1101'1111'0011'1010'1111,//7
	0b1111'0000'1111'1000'1001'1001'1010'0000,//8
	0b1111'1110'1111'1011'1011'1100'0000'0111,//9
	0b1111'1110'1111'1011'1011'1111'1111'1111,//10
	0b1111'1100'1110'0000'0011'1111'1111'1111,//11
	0b1100'0001'1110'1000'0000'0001'1111'1111,//12
	0b1101'1111'1110'1011'1011'1101'1111'1111,//13
	0b1101'1000'0110'0011'1011'1100'0011'1111,//14
	0b1100'0011'0000'0111'1011'1111'1000'0011,//15
	0b1111'1111'1111'1111'1000'0011'1111'1011,//16
	0b1111'1001'1000'0001'1011'1011'1111'1111,//17
	0b1000'1011'1011'1100'0011'1001'1111'1111,//18
	0b1110'0000'1001'1111'1011'1101'1111'1111,//19
	0b1111'1011'1000'1111'1011'1100'0001'1111,//20
	0b1111'0000'0000'0011'1000'0111'1101'1111,//21
	0b1111'1101'1111'1111'1101'0001'1101'1111,//22
	0b1100'0001'0000'0000'1101'1101'1100'0011,//23
	0b1101'1111'1111'1110'1101'1100'0111'1011,//24
	0b1101'1100'0111'1110'1100'0001'0000'0011,//25
	0b1100'0101'0011'1110'1111'1011'1101'1111,//26
	0b1111'0001'1000'1110'1111'1011'1101'1111,//27
	0b1111'1101'1111'1110'0000'0011'1000'0011,//28
	0b1111'1001'1000'0001'1111'1000'0011'1111,//29
	0b1111'1011'1011'1101'1111'1011'1001'1111,//30
	0b1111'1000'0011'1100'0000'0011'1100'1111,//31
	0b1111'1111'1111'1111'1111'1111'1111'1111
	};
			//setColor(0x44);
			//setCaret(pbx * 2, pby);
			//cout << "..";
			g->FillRectangle(bRoute, bx * scale, by * scale, scale, scale);
			nMov[pby] |= bit >> pbx;
			if ((pbx == FINISH_X) && (pby == FINISH_Y)) return 99;

			// up
			if (pby - 1 >= 0) {
				if (!(map[pby - 1] & (bit >> pbx)) && !(nMov[pby - 1] & (bit >> pbx))) { // can
					nRes = moving(pbx, pby - 1);
					if (nRes) return nRes;
				}
			}

			// down
			if (pby + 1 <= 32) {
				if (!(map[pby + 1] & (bit >> pbx)) && !(nMov[pby + 1] & (bit >> pbx))) { // can
					nRes = moving(pbx, pby + 1);
					if (nRes) return nRes;
				}
			}

			// left
			if (pbx - 1 >= 0) {
				if (!(map[pby] & (bit >> pbx - 1)) && !(nMov[pby] & (bit >> pbx - 1))) { // can
					nRes = moving(pbx - 1, pby);
					if (nRes) return nRes;
				}
			}

			// right
			if (pbx + 1 <= 32) {
				if (!(map[pby] & (bit >> pbx + 1)) && !(nMov[pby] & (bit >> pbx + 1))) { // can
					nRes = moving(pbx + 1, pby);
					if (nRes) return nRes;
				}
			}

			g->FillRectangle(bRoute, bx * scale, by * scale, scale, scale);
			return 0;
		}

		void redraw() {
			Graphics^ g = Maze::CreateGraphics();
			Brush^ bWall = gcnew SolidBrush(Color::Black);
			Brush^ bBack = gcnew SolidBrush(Color::Yellow);
			Brush^ bStart = gcnew SolidBrush(Color::Green);
			Brush^ bFinish = gcnew SolidBrush(Color::Purple);
			Brush^ bBug = gcnew SolidBrush(Color::Red);
			if (bx == START_X && by == START_Y) g->FillRectangle(bStart, bx * scale, by * scale, scale, scale);
			else if (bx == FINISH_X && by == FINISH_Y) g->FillRectangle(bFinish, bx * scale, by * scale, scale, scale);
			else g->FillRectangle(bBack, bx * scale, by * scale, scale, scale);
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Maze()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Maze
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1081, 815);
			this->Name = L"Maze";
			this->Text = L"Ëàáèðèíò";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Maze::Maze_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Maze::Maze_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Maze::Maze_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Maze::Maze_KeyPress);
			this->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Maze::Maze_PreviewKeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Maze_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Maze_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = Maze::CreateGraphics();
		Brush^ bWall = gcnew SolidBrush(Color::Black);
		Brush^ bBack = gcnew SolidBrush(Color::Yellow);
		Brush^ bStart = gcnew SolidBrush(Color::Green);
		Brush^ bFinish = gcnew SolidBrush(Color::Purple);
		Brush^ bBug = gcnew SolidBrush(Color::Red);
		unsigned int map[32] =
		{
	0b1101'1111'1111'1111'1111'1111'1111'1111,//1
	0b1101'1111'1101'1100'0011'0000'0000'0011,//2
	0b1001'1111'1001'1101'1000'0110'1001'1011,//3
	0b1100'0011'1011'1111'1000'0011'1100'0111,//4
	0b1100'0000'0011'1000'0000'1111'1111'1111,//5
	0b1110'1111'1111'1101'1110'0111'1010'0111,//6
	0b1110'0111'1111'1101'1111'0011'1010'1111,//7
	0b1111'0000'1111'1000'1001'1001'1010'0000,//8
	0b1111'1110'1111'1011'1011'1100'0000'0111,//9
	0b1111'1110'1111'1011'1011'1111'1111'1111,//10
	0b1111'1100'1110'0000'0011'1111'1111'1111,//11
	0b1100'0001'1110'1000'0000'0001'1111'1111,//12
	0b1101'1111'1110'1011'1011'1101'1111'1111,//13
	0b1101'1000'0110'0011'1011'1100'0011'1111,//14
	0b1100'0011'0000'0111'1011'1111'1000'0011,//15
	0b1111'1111'1111'1111'1000'0011'1111'1011,//16
	0b1111'1001'1000'0001'1011'1011'1111'1111,//17
	0b1000'1011'1011'1100'0011'1001'1111'1111,//18
	0b1110'0000'1001'1111'1011'1101'1111'1111,//19
	0b1111'1011'1000'1111'1011'1100'0001'1111,//20
	0b1111'0000'0000'0011'1000'0111'1101'1111,//21
	0b1111'1101'1111'1111'1101'0001'1101'1111,//22
	0b1100'0001'0000'0000'1101'1101'1100'0011,//23
	0b1101'1111'1111'1110'1101'1100'0111'1011,//24
	0b1101'1100'0111'1110'1100'0001'0000'0011,//25
	0b1100'0101'0011'1110'1111'1011'1101'1111,//26
	0b1111'0001'1000'1110'1111'1011'1101'1111,//27
	0b1111'1101'1111'1110'0000'0011'1000'0011,//28
	0b1111'1001'1000'0001'1111'1000'0011'1111,//29
	0b1111'1011'1011'1101'1111'1011'1001'1111,//30
	0b1111'1000'0011'1100'0000'0011'1100'1111,//31
	0b1111'1111'1111'1111'1111'1111'1111'1111 };
		g->Clear(Color::White);
		//Pen^ p = gcnew Pen(cdPenColor->Color, Convert::ToDouble(tbs->Text));

		for (int ny = 0; ny < 32; ny++) {
			for (int nx = 0; nx < 32; nx++) {
				if ((bit >> nx) & map[ny]) {
					//setColor(CLR_WALL);
					//cout << "ØØ";
					g->FillRectangle(bWall, nx * scale, ny * scale, scale, scale);
				}
				else {
					if (nx == START_X && ny == START_Y) g->FillRectangle(bStart, nx * scale, ny * scale, scale, scale);
					else if (nx == FINISH_X && ny == FINISH_Y) g->FillRectangle(bFinish, nx * scale, ny * scale, scale, scale);
					else g->FillRectangle(bBack, nx * scale, ny * scale, scale, scale);
				}
			}
		}
		g->FillRectangle(bBug, bx * scale, by * scale, scale, scale);
	}
	private: System::Void Maze_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	}
	private: System::Void Maze_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//String^ s = Convert::ToString(e->KeyCode);
		//MessageBox::Show(s);
	}
	private: System::Void Maze_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e) {
		Graphics^ g = Maze::CreateGraphics();
		Brush^ bWall = gcnew SolidBrush(Color::Black);
		Brush^ bBack = gcnew SolidBrush(Color::Yellow);
		Brush^ bStart = gcnew SolidBrush(Color::Green);
		Brush^ bFinish = gcnew SolidBrush(Color::Purple);
		Brush^ bBug = gcnew SolidBrush(Color::Red);
		unsigned int map[32] =
		{
	0b1101'1111'1111'1111'1111'1111'1111'1111,//1
	0b1101'1111'1101'1100'0011'0000'0000'0011,//2
	0b1001'1111'1001'1101'1000'0110'1001'1011,//3
	0b1100'0011'1011'1111'1000'0011'1100'0111,//4
	0b1100'0000'0011'1000'0000'1111'1111'1111,//5
	0b1110'1111'1111'1101'1110'0111'1010'0111,//6
	0b1110'0111'1111'1101'1111'0011'1010'1111,//7
	0b1111'0000'1111'1000'1001'1001'1010'0000,//8
	0b1111'1110'1111'1011'1011'1100'0000'0111,//9
	0b1111'1110'1111'1011'1011'1111'1111'1111,//10
	0b1111'1100'1110'0000'0011'1111'1111'1111,//11
	0b1100'0001'1110'1000'0000'0001'1111'1111,//12
	0b1101'1111'1110'1011'1011'1101'1111'1111,//13
	0b1101'1000'0110'0011'1011'1100'0011'1111,//14
	0b1100'0011'0000'0111'1011'1111'1000'0011,//15
	0b1111'1111'1111'1111'1000'0011'1111'1011,//16
	0b1111'1001'1000'0001'1011'1011'1111'1111,//17
	0b1000'1011'1011'1100'0011'1001'1111'1111,//18
	0b1110'0000'1001'1111'1011'1101'1111'1111,//19
	0b1111'1011'1000'1111'1011'1100'0001'1111,//20
	0b1111'0000'0000'0011'1000'0111'1101'1111,//21
	0b1111'1101'1111'1111'1101'0001'1101'1111,//22
	0b1100'0001'0000'0000'1101'1101'1100'0011,//23
	0b1101'1111'1111'1110'1101'1100'0111'1011,//24
	0b1101'1100'0111'1110'1100'0001'0000'0011,//25
	0b1100'0101'0011'1110'1111'1011'1101'1111,//26
	0b1111'0001'1000'1110'1111'1011'1101'1111,//27
	0b1111'1101'1111'1110'0000'0011'1000'0011,//28
	0b1111'1001'1000'0001'1111'1000'0011'1111,//29
	0b1111'1011'1011'1101'1111'1011'1001'1111,//30
	0b1111'1000'0011'1100'0000'0011'1100'1111,//31
	0b1111'1111'1111'1111'1111'1111'1111'1111 };

		int maproute[32] = {
		0b0010'0000'0000'0000'0000'0000'0000'0000,//0
		0b0010'0000'0000'0000'0000'0000'0000'0000,//1
		0b0010'0000'0000'0000'0000'0000'0000'0000,//3
		0b0010'0000'0000'0000'0000'0000'0000'0000,//4
		0b0011'0000'0000'0011'1111'0000'0000'0000,//5
		0b0001'0000'0000'0010'0001'1000'0000'0000,//6
		0b0001'1000'0000'0010'0000'1100'0000'0000,//7
		0b0000'1111'0000'0110'0000'0110'0000'1111,//8
		0b0000'0001'0000'0100'0000'0011'1111'1000,//9
		0b0000'0001'0000'0100'0000'0000'0000'0000,//00
		0b0000'0011'0001'1100'0000'0000'0000'0000,//00
		0b0011'1110'0001'0000'0000'0000'0000'0000,//01
		0b0010'0000'0001'0000'0000'0000'0000'0000,//03
		0b0010'0111'1001'0000'0000'0000'0000'0000,//04
		0b0011'1100'1111'0000'0000'0000'0000'0000,//05
		0b0000'0000'0000'0000'0000'0000'0000'0000,//06
		0b0000'0000'0000'0000'0000'0000'0000'0000,//07
		0b0000'0000'0000'0000'0000'0000'0000'0000,//08
		0b0000'0000'0000'0000'0000'0000'0000'0000,//09
		0b0000'0000'0000'0000'0000'0000'0000'0000,//20
		0b0000'0000'0000'0000'0000'0000'0000'0000,//20
		0b0000'0000'0000'0000'0000'0000'0000'0000,//22
		0b0000'0000'0000'0000'0000'0000'0000'0000,//23
		0b0000'0000'0000'0000'0000'0000'0000'0000,//24
		0b0000'0000'0000'0000'0000'0000'0000'0000,//25
		0b0000'0000'0000'0000'0000'0000'0000'0000,//26
		0b0000'0000'0000'0000'0000'0000'0000'0000,//27
		0b0000'0000'0000'0000'0000'0000'0000'0000,//28
		0b0000'0000'0000'0000'0000'0000'0000'0000,//29
		0b0000'0000'0000'0000'0000'0000'0000'0000,//30
		0b0000'0000'0000'0000'0000'0000'0000'0000,//30
		0b0000'0000'0000'0000'0000'0000'0000'0000 };
		//String^ s = Convert::ToString(e->KeyCode);
		//MessageBox::Show(s);
		switch (e->KeyCode) {
			//case 63:
			//	nMov = new UINT[32]{ 0 };
			//	memset(nMov, 0, sizeof(UINT) * 32);
			//	moving(bx, by);
			//	delete[] nMov;
			//	break;
		case Keys::Up:
			if ((bit >> bx) & map[by - 1])
				//cout << "\a";
				void();
			else
			{
				redraw();
				by--;
			}
			break;
		case Keys::Down:
			if ((bit >> bx) & map[by + 1])
				//cout << "\a";
				void();
			else
			{
				redraw();
				by += 1;
			}
			break;
		case Keys::Left:
			if ((bit >> (bx - 1)) & map[by])
				void();
			else {
				redraw();
				bx -= 1;
			}
			break;
		case Keys::Right:
			if ((bit >> (bx + 1)) & map[by])
				void();
			else {
				redraw();
				bx += 1;
			}
			break;
			//case KEY_ESCAPE:
			//	setCaret(24, 16);
			//	setColor(0xC0);
			//	cout << "Àâàðèéíûé âûõîä\n";
			//	goto end;
		case Keys::Z:
			Brush^ bRoute = gcnew SolidBrush(Color::ForestGreen);
			for (int ny = 0; ny < 32; ny++) {
				for (int nx = 0; nx < 32; nx++) {
					if ((bit >> nx) & maproute[ny]) {
						//setColor(CLR_WALL);
						//cout << "ØØ";
						g->FillRectangle(bRoute, nx * scale, ny * scale, scale, scale);
					}
				}
			}
		}
		if (bx == FINISH_X && by == FINISH_Y) {
			MessageBox::Show("ÓÐÀ! ÏÎÁÅÄÀ!\nÆÓÊ ÄÎØ¨Ë ÄÎ ÊÎÍÖÀ");
			delete(this);
		}
		g->FillRectangle(bBug, bx * scale, by * scale, scale, scale);
	}
	};
}
