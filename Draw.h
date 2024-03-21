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
	/// Summary for Draw
	/// </summary>
	public ref class Draw : public System::Windows::Forms::Form
	{
	public:
		Draw(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Draw()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;


	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüÔèãóğóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğÿìîóãîëüíèêToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ òğåóãîëüíèêToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ıëëèïñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàğàìåòğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íà÷àëüíàÿÊîîğäèíàòàXToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ tbx1;


	private: System::Windows::Forms::ToolStripMenuItem^ íà÷àëüíàÿÊîîğäèíàòàYToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîíå÷íàÿÊîîğäèíàòàXToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîíå÷íàÿÊîîğäèíàòàYToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÇàëèâêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÊîíòóğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ tby1;
	private: System::Windows::Forms::ToolStripTextBox^ tbx2;
	private: System::Windows::Forms::ToolStripTextBox^ tby2;








	private: System::Windows::Forms::ToolStripMenuItem^ òîëùèíàÊîíòóğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ tbs;
	private: System::Windows::Forms::ColorDialog^ cdBrushColor;
	private: System::Windows::Forms::ColorDialog^ cdPenColor;
	private: System::Windows::Forms::ToolStripMenuItem^ ğîìáToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ñîçäàòüÔèãóğóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğÿìîóãîëüíèêToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òğåóãîëüíèêToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıëëèïñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğîìáToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàğàìåòğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íà÷àëüíàÿÊîîğäèíàòàXToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tbx1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->íà÷àëüíàÿÊîîğäèíàòàYToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tby1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->êîíå÷íàÿÊîîğäèíàòàXToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tbx2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->êîíå÷íàÿÊîîğäèíàòàYToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tby2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->öâåòÇàëèâêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÊîíòóğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òîëùèíàÊîíòóğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tbs = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->î÷èñòèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cdBrushColor = (gcnew System::Windows::Forms::ColorDialog());
			this->cdPenColor = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñîçäàòüÔèãóğóToolStripMenuItem,
					this->ïàğàìåòğûToolStripMenuItem, this->î÷èñòèòüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1114, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ñîçäàòüÔèãóğóToolStripMenuItem
			// 
			this->ñîçäàòüÔèãóğóToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ïğÿìîóãîëüíèêToolStripMenuItem1,
					this->òğåóãîëüíèêToolStripMenuItem1, this->ıëëèïñToolStripMenuItem, this->ğîìáToolStripMenuItem
			});
			this->ñîçäàòüÔèãóğóToolStripMenuItem->Name = L"ñîçäàòüÔèãóğóToolStripMenuItem";
			this->ñîçäàòüÔèãóğóToolStripMenuItem->Size = System::Drawing::Size(105, 20);
			this->ñîçäàòüÔèãóğóToolStripMenuItem->Text = L"Ñîçäàòü ôèãóğó";
			// 
			// ïğÿìîóãîëüíèêToolStripMenuItem1
			// 
			this->ïğÿìîóãîëüíèêToolStripMenuItem1->Name = L"ïğÿìîóãîëüíèêToolStripMenuItem1";
			this->ïğÿìîóãîëüíèêToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->ïğÿìîóãîëüíèêToolStripMenuItem1->Text = L"Ïğÿìîóãîëüíèê";
			this->ïğÿìîóãîëüíèêToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Draw::ïğÿìîóãîëüíèêToolStripMenuItem1_Click);
			// 
			// òğåóãîëüíèêToolStripMenuItem1
			// 
			this->òğåóãîëüíèêToolStripMenuItem1->Name = L"òğåóãîëüíèêToolStripMenuItem1";
			this->òğåóãîëüíèêToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->òğåóãîëüíèêToolStripMenuItem1->Text = L"Òğåóãîëüíèê";
			this->òğåóãîëüíèêToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Draw::òğåóãîëüíèêToolStripMenuItem1_Click);
			// 
			// ıëëèïñToolStripMenuItem
			// 
			this->ıëëèïñToolStripMenuItem->Name = L"ıëëèïñToolStripMenuItem";
			this->ıëëèïñToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ıëëèïñToolStripMenuItem->Text = L"İëëèïñ";
			this->ıëëèïñToolStripMenuItem->Click += gcnew System::EventHandler(this, &Draw::ıëëèïñToolStripMenuItem_Click);
			// 
			// ğîìáToolStripMenuItem
			// 
			this->ğîìáToolStripMenuItem->Name = L"ğîìáToolStripMenuItem";
			this->ğîìáToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ğîìáToolStripMenuItem->Text = L"Ğîìá";
			this->ğîìáToolStripMenuItem->Click += gcnew System::EventHandler(this, &Draw::ğîìáToolStripMenuItem_Click);
			// 
			// ïàğàìåòğûToolStripMenuItem
			// 
			this->ïàğàìåòğûToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->íà÷àëüíàÿÊîîğäèíàòàXToolStripMenuItem,
					this->tbx1, this->íà÷àëüíàÿÊîîğäèíàòàYToolStripMenuItem, this->tby1, this->êîíå÷íàÿÊîîğäèíàòàXToolStripMenuItem, this->tbx2,
					this->êîíå÷íàÿÊîîğäèíàòàYToolStripMenuItem, this->tby2, this->toolStripSeparator1, this->öâåòÇàëèâêèToolStripMenuItem, this->öâåòÊîíòóğàToolStripMenuItem,
					this->òîëùèíàÊîíòóğàToolStripMenuItem, this->tbs
			});
			this->ïàğàìåòğûToolStripMenuItem->Name = L"ïàğàìåòğûToolStripMenuItem";
			this->ïàğàìåòğûToolStripMenuItem->Size = System::Drawing::Size(129, 20);
			this->ïàğàìåòğûToolStripMenuItem->Text = L"Ïàğàìåòğû ôèãóğû";
			this->ïàğàìåòğûToolStripMenuItem->Click += gcnew System::EventHandler(this, &Draw::ïàğàìåòğûToolStripMenuItem_Click);
			// 
			// íà÷àëüíàÿÊîîğäèíàòàXToolStripMenuItem
			// 
			this->íà÷àëüíàÿÊîîğäèíàòàXToolStripMenuItem->Enabled = false;
			this->íà÷àëüíàÿÊîîğäèíàòàXToolStripMenuItem->Name = L"íà÷àëüíàÿÊîîğäèíàòàXToolStripMenuItem";
			this->íà÷àëüíàÿÊîîğäèíàòàXToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->íà÷àëüíàÿÊîîğäèíàòàXToolStripMenuItem->Text = L"Íà÷àëüíàÿ êîîğäèíàòà X";
			// 
			// tbx1
			// 
			this->tbx1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->tbx1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbx1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tbx1->Name = L"tbx1";
			this->tbx1->Size = System::Drawing::Size(100, 23);
			this->tbx1->Text = L"20";
			// 
			// íà÷àëüíàÿÊîîğäèíàòàYToolStripMenuItem
			// 
			this->íà÷àëüíàÿÊîîğäèíàòàYToolStripMenuItem->Enabled = false;
			this->íà÷àëüíàÿÊîîğäèíàòàYToolStripMenuItem->Name = L"íà÷àëüíàÿÊîîğäèíàòàYToolStripMenuItem";
			this->íà÷àëüíàÿÊîîğäèíàòàYToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->íà÷àëüíàÿÊîîğäèíàòàYToolStripMenuItem->Text = L"Íà÷àëüíàÿ êîîğäèíàòà Y";
			// 
			// tby1
			// 
			this->tby1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tby1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tby1->Name = L"tby1";
			this->tby1->Size = System::Drawing::Size(100, 23);
			this->tby1->Text = L"20";
			// 
			// êîíå÷íàÿÊîîğäèíàòàXToolStripMenuItem
			// 
			this->êîíå÷íàÿÊîîğäèíàòàXToolStripMenuItem->Enabled = false;
			this->êîíå÷íàÿÊîîğäèíàòàXToolStripMenuItem->Name = L"êîíå÷íàÿÊîîğäèíàòàXToolStripMenuItem";
			this->êîíå÷íàÿÊîîğäèíàòàXToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->êîíå÷íàÿÊîîğäèíàòàXToolStripMenuItem->Text = L"Øèğèíà";
			// 
			// tbx2
			// 
			this->tbx2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbx2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tbx2->Name = L"tbx2";
			this->tbx2->Size = System::Drawing::Size(100, 23);
			this->tbx2->Text = L"200";
			// 
			// êîíå÷íàÿÊîîğäèíàòàYToolStripMenuItem
			// 
			this->êîíå÷íàÿÊîîğäèíàòàYToolStripMenuItem->Enabled = false;
			this->êîíå÷íàÿÊîîğäèíàòàYToolStripMenuItem->Name = L"êîíå÷íàÿÊîîğäèíàòàYToolStripMenuItem";
			this->êîíå÷íàÿÊîîğäèíàòàYToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->êîíå÷íàÿÊîîğäèíàòàYToolStripMenuItem->Text = L"Âûñîòà";
			// 
			// tby2
			// 
			this->tby2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tby2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tby2->Name = L"tby2";
			this->tby2->Size = System::Drawing::Size(100, 23);
			this->tby2->Text = L"200";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(208, 6);
			// 
			// öâåòÇàëèâêèToolStripMenuItem
			// 
			this->öâåòÇàëèâêèToolStripMenuItem->Name = L"öâåòÇàëèâêèToolStripMenuItem";
			this->öâåòÇàëèâêèToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->öâåòÇàëèâêèToolStripMenuItem->Text = L"Çàäàòü öâåò çàëèâêè";
			this->öâåòÇàëèâêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Draw::öâåòÇàëèâêèToolStripMenuItem_Click);
			// 
			// öâåòÊîíòóğàToolStripMenuItem
			// 
			this->öâåòÊîíòóğàToolStripMenuItem->Name = L"öâåòÊîíòóğàToolStripMenuItem";
			this->öâåòÊîíòóğàToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->öâåòÊîíòóğàToolStripMenuItem->Text = L"Çàäàòü öâåò êîíòóğà";
			this->öâåòÊîíòóğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Draw::öâåòÊîíòóğàToolStripMenuItem_Click);
			// 
			// òîëùèíàÊîíòóğàToolStripMenuItem
			// 
			this->òîëùèíàÊîíòóğàToolStripMenuItem->Enabled = false;
			this->òîëùèíàÊîíòóğàToolStripMenuItem->Name = L"òîëùèíàÊîíòóğàToolStripMenuItem";
			this->òîëùèíàÊîíòóğàToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->òîëùèíàÊîíòóğàToolStripMenuItem->Text = L"Òîëùèíà êîíòóğà";
			// 
			// tbs
			// 
			this->tbs->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbs->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tbs->Name = L"tbs";
			this->tbs->Size = System::Drawing::Size(100, 23);
			this->tbs->Text = L"2";
			// 
			// î÷èñòèòüToolStripMenuItem
			// 
			this->î÷èñòèòüToolStripMenuItem->Name = L"î÷èñòèòüToolStripMenuItem";
			this->î÷èñòèòüToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->î÷èñòèòüToolStripMenuItem->Text = L"Î÷èñòèòü";
			this->î÷èñòèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Draw::î÷èñòèòüToolStripMenuItem_Click);
			// 
			// cdBrushColor
			// 
			this->cdBrushColor->Color = System::Drawing::Color::Red;
			// 
			// Draw
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1114, 742);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Draw";
			this->Text = L"Ğèñîâàíèå ôèãóğ";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ïğÿìîóãîëüíèêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void ïğÿìîóãîëüíèêToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = Draw::CreateGraphics();
		//g->Clear(Color::White);
		Pen^ p = gcnew Pen(cdPenColor->Color, Convert::ToDouble(tbs->Text));
		Brush^ b = gcnew SolidBrush(cdBrushColor->Color);
		int x = Convert::ToInt32(tbx1->Text);
		int y = Convert::ToInt32(tby1->Text) + 20;
		int w = Convert::ToInt32(tbx2->Text);
		int h = Convert::ToInt32(tby2->Text);

		g->FillRectangle(b, x, y, w, h);
		g->DrawRectangle(p, x, y, w, h);
	}
	private: System::Void òğåóãîëüíèêToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = Draw::CreateGraphics();
		//g->Clear(Color::White);
		Pen^ p = gcnew Pen(cdPenColor->Color, Convert::ToDouble(tbs->Text));
		Brush^ b = gcnew SolidBrush(cdBrushColor->Color);
		int x = Convert::ToInt32(tbx1->Text);
		int y = Convert::ToInt32(tby1->Text) + 20;
		int w = Convert::ToInt32(tbx2->Text);
		int h = Convert::ToInt32(tby2->Text);
		//tbx1->Text;
		Point p1 = Point(x + w / 2, y);
		Point p2 = Point(x, h + y);
		Point p3 = Point(x + w, h + y);
		/*array<Point>^ points = { p1,p2,p3};
		g->FillPolygon(b, points);
		g->DrawPolygon(p, points);*/
	}
	private: System::Void ıëëèïñToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = Draw::CreateGraphics();
		//g->Clear(Color::White);
		Pen^ p = gcnew Pen(cdPenColor->Color, Convert::ToDouble(tbs->Text));
		Brush^ b = gcnew SolidBrush(cdBrushColor->Color);
		int x = Convert::ToInt32(tbx1->Text);
		int y = Convert::ToInt32(tby1->Text) + 20;
		int w = Convert::ToInt32(tbx2->Text);
		int h = Convert::ToInt32(tby2->Text);

		g->FillEllipse(b, x, y, w, h);
		g->DrawEllipse(p, x, y, w, h);
	}
	private: System::Void î÷èñòèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = Draw::CreateGraphics();
		g->Clear(Color::White);
	}
	private: System::Void ïàğàìåòğûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void öâåòÊîíòóğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		cdPenColor->ShowDialog();
	}
	private: System::Void öâåòÇàëèâêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cdBrushColor->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		}
	}
	private: System::Void ğîìáToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = Draw::CreateGraphics();
		//g->Clear(Color::White);
		Pen^ p = gcnew Pen(cdPenColor->Color, Convert::ToDouble(tbs->Text));
		Brush^ b = gcnew SolidBrush(cdBrushColor->Color);
		int x = Convert::ToInt32(tbx1->Text);
		int y = Convert::ToInt32(tby1->Text) + 20;
		int w = Convert::ToInt32(tbx2->Text);
		int h = Convert::ToInt32(tby2->Text);
		//tbx1->Text;
		Point p1 = Point(x + w / 2, y);
		Point p2 = Point(x, y + h / 2);
		Point p3 = Point(x + w / 2, y + h);
		Point p4 = Point(x + w, y + h / 2);
		/*array<Point>^ points = { p1,p2,p3,p4 };
		g->FillPolygon(b, points);
		g->DrawPolygon(p, points);*/
	}
	};
}