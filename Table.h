#pragma once

namespace My {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Table
	/// </summary>
	public ref class Table : public System::Windows::Forms::Form
	{
	public:
		Table(void)
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
		~Table()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvOutput;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cSum;

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
			this->dgvOutput = (gcnew System::Windows::Forms::DataGridView());
			this->cID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cSum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOutput))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvOutput
			// 
			this->dgvOutput->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOutput->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->cID, this->cValue,
					this->cSum
			});
			this->dgvOutput->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvOutput->Location = System::Drawing::Point(0, 0);
			this->dgvOutput->Name = L"dgvOutput";
			this->dgvOutput->Size = System::Drawing::Size(451, 486);
			this->dgvOutput->TabIndex = 5;
			// 
			// cID
			// 
			this->cID->HeaderText = L"ИД";
			this->cID->Name = L"cID";
			// 
			// cValue
			// 
			this->cValue->HeaderText = L"Значение";
			this->cValue->Name = L"cValue";
			// 
			// cSum
			// 
			this->cSum->HeaderText = L"Накопленное значение";
			this->cSum->Name = L"cSum";
			// 
			// Table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(451, 486);
			this->Controls->Add(this->dgvOutput);
			this->Name = L"Table";
			this->Text = L"Таблица";
			this->Load += gcnew System::EventHandler(this, &Table::Table_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOutput))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Table_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
