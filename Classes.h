#pragma once

namespace My {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Classes
	/// </summary>
	public ref class Classes : public System::Windows::Forms::Form
	{
	public:
		Classes(void)
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
		~Classes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüÎáúåêòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òğåóãîëüíèêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êâàäğàòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıëèïñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîåäèíåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âêëş÷èòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêëş÷èòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüToolStripMenuItem;

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
			this->ñîçäàòüÎáúåêòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîåäèíåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãğóçèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âêëş÷èòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêëş÷èòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òğåóãîëüíèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êâàäğàòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıëèïñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ñîçäàòüÎáúåêòToolStripMenuItem,
					this->ñîåäèíåíèåToolStripMenuItem, this->ñîõğàíèòüToolStripMenuItem, this->çàãğóçèòüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ñîçäàòüÎáúåêòToolStripMenuItem
			// 
			this->ñîçäàòüÎáúåêòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->òğåóãîëüíèêToolStripMenuItem,
					this->êâàäğàòToolStripMenuItem, this->ıëèïñToolStripMenuItem
			});
			this->ñîçäàòüÎáúåêòToolStripMenuItem->Name = L"ñîçäàòüÎáúåêòToolStripMenuItem";
			this->ñîçäàòüÎáúåêòToolStripMenuItem->Size = System::Drawing::Size(103, 20);
			this->ñîçäàòüÎáúåêòToolStripMenuItem->Text = L"Ñîçäàòü îáúåêò";
			// 
			// ñîåäèíåíèåToolStripMenuItem
			// 
			this->ñîåäèíåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âêëş÷èòüToolStripMenuItem,
					this->îòêëş÷èòüToolStripMenuItem
			});
			this->ñîåäèíåíèåToolStripMenuItem->Name = L"ñîåäèíåíèåToolStripMenuItem";
			this->ñîåäèíåíèåToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->ñîåäèíåíèåToolStripMenuItem->Text = L"Ñîåäèíåíèå";
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(78, 20);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			// 
			// çàãğóçèòüToolStripMenuItem
			// 
			this->çàãğóçèòüToolStripMenuItem->Name = L"çàãğóçèòüToolStripMenuItem";
			this->çàãğóçèòüToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->çàãğóçèòüToolStripMenuItem->Text = L"Çàãğóçèòü";
			// 
			// âêëş÷èòüToolStripMenuItem
			// 
			this->âêëş÷èòüToolStripMenuItem->Name = L"âêëş÷èòüToolStripMenuItem";
			this->âêëş÷èòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âêëş÷èòüToolStripMenuItem->Text = L"Âêëş÷èòü";
			// 
			// îòêëş÷èòüToolStripMenuItem
			// 
			this->îòêëş÷èòüToolStripMenuItem->Name = L"îòêëş÷èòüToolStripMenuItem";
			this->îòêëş÷èòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->îòêëş÷èòüToolStripMenuItem->Text = L"Îòêëş÷èòü";
			// 
			// òğåóãîëüíèêToolStripMenuItem
			// 
			this->òğåóãîëüíèêToolStripMenuItem->Name = L"òğåóãîëüíèêToolStripMenuItem";
			this->òğåóãîëüíèêToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->òğåóãîëüíèêToolStripMenuItem->Text = L"Òğåóãîëüíèê";
			// 
			// êâàäğàòToolStripMenuItem
			// 
			this->êâàäğàòToolStripMenuItem->Name = L"êâàäğàòToolStripMenuItem";
			this->êâàäğàòToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->êâàäğàòToolStripMenuItem->Text = L"Êâàäğàò";
			// 
			// ıëèïñToolStripMenuItem
			// 
			this->ıëèïñToolStripMenuItem->Name = L"ıëèïñToolStripMenuItem";
			this->ıëèïñToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ıëèïñToolStripMenuItem->Text = L"İëèïñ";
			// 
			// Classes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 754);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Classes";
			this->Text = L"Êëàññû";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	};
}
