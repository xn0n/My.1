#pragma once

namespace My {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Input
	/// </summary>
	public ref class Input : public System::Windows::Forms::Form
	{
	public:
		Input(void)
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
		~Input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbInput;
	private: System::Windows::Forms::Button^ bOK;
	private: System::Windows::Forms::Button^ bCancel;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbInput = (gcnew System::Windows::Forms::TextBox());
			this->bOK = (gcnew System::Windows::Forms::Button());
			this->bCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите данные";
			// 
			// tbInput
			// 
			this->tbInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbInput->Location = System::Drawing::Point(15, 25);
			this->tbInput->Name = L"tbInput";
			this->tbInput->Size = System::Drawing::Size(445, 22);
			this->tbInput->TabIndex = 1;
			// 
			// bOK
			// 
			this->bOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->bOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bOK->Location = System::Drawing::Point(285, 68);
			this->bOK->Name = L"bOK";
			this->bOK->Size = System::Drawing::Size(123, 35);
			this->bOK->TabIndex = 2;
			this->bOK->Text = L"Ввести";
			this->bOK->UseVisualStyleBackColor = true;
			// 
			// bCancel
			// 
			this->bCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->bCancel->Location = System::Drawing::Point(61, 68);
			this->bCancel->Name = L"bCancel";
			this->bCancel->Size = System::Drawing::Size(123, 35);
			this->bCancel->TabIndex = 3;
			this->bCancel->Text = L"Закрыть";
			this->bCancel->UseVisualStyleBackColor = true;
			// 
			// Input
			// 
			this->AcceptButton = this->bOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->bCancel;
			this->ClientSize = System::Drawing::Size(472, 121);
			this->ControlBox = false;
			this->Controls->Add(this->bCancel);
			this->Controls->Add(this->bOK);
			this->Controls->Add(this->tbInput);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Input";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Ввод";
			this->Load += gcnew System::EventHandler(this, &Input::Input_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	public:
		String^ GetText() {
			return tbInput->Text;
		}
#pragma endregion
	private: System::Void Input_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
