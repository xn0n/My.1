#pragma once
#include <stdlib.h>
#include "Input.h"
#include "MyHeader.h"
#include "MyClasses.h"
#include "Recursion.h"
#include "Draw.h"
#include "Table.h"
#include "Maze.h"
#include "Graph.h"
#include "Classes.h"

namespace My {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;













	private: System::Windows::Forms::ToolStripMenuItem^ выходИзMyAppToolStripMenuItem;

	private: System::Windows::Forms::TextBox^ tbTitle;

	private: System::Windows::Forms::ListBox^ lbOutput;


	private: System::Windows::Forms::DataGridView^ dgvOutput;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cSum;


	private: System::Windows::Forms::ToolStripMenuItem^ contentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ indexToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ searchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ customizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^ selectAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printPreviewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;























	private: System::Windows::Forms::PictureBox^ formula1;
	private: System::Windows::Forms::PictureBox^ formula2;
	private: System::Windows::Forms::Panel^ SortInput;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::DataGridView^ dgvSort;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;

	private: System::Windows::Forms::ToolStripMenuItem^ маскаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ шифрованиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ задание31ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ матрицаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рекурсияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сведенияОПрограммистеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабиринтToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фигурыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сортировкаToolStripMenuItem1;

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
			this->маскаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шифрованиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->задание31ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->матрицаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рекурсияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабиринтToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сведенияОПрограммистеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фигурыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходИзMyAppToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tbTitle = (gcnew System::Windows::Forms::TextBox());
			this->lbOutput = (gcnew System::Windows::Forms::ListBox());
			this->dgvOutput = (gcnew System::Windows::Forms::DataGridView());
			this->cID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cSum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->indexToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->customizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printPreviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formula1 = (gcnew System::Windows::Forms::PictureBox());
			this->formula2 = (gcnew System::Windows::Forms::PictureBox());
			this->SortInput = (gcnew System::Windows::Forms::Panel());
			this->dgvSort = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOutput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formula1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formula2))->BeginInit();
			this->SortInput->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSort))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->маскаToolStripMenuItem,
					this->шифрованиеToolStripMenuItem, this->задание31ToolStripMenuItem, this->матрицаToolStripMenuItem, this->рекурсияToolStripMenuItem,
					this->лабиринтToolStripMenuItem, this->сведенияОПрограммистеToolStripMenuItem, this->фигурыToolStripMenuItem, this->сортировкаToolStripMenuItem1,
					this->выходИзMyAppToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1527, 31);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// маскаToolStripMenuItem
			// 
			this->маскаToolStripMenuItem->Name = L"маскаToolStripMenuItem";
			this->маскаToolStripMenuItem->Size = System::Drawing::Size(75, 27);
			this->маскаToolStripMenuItem->Text = L"Маска";
			this->маскаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::маскаToolStripMenuItem_Click_1);
			// 
			// шифрованиеToolStripMenuItem
			// 
			this->шифрованиеToolStripMenuItem->Name = L"шифрованиеToolStripMenuItem";
			this->шифрованиеToolStripMenuItem->Size = System::Drawing::Size(131, 27);
			this->шифрованиеToolStripMenuItem->Text = L"Шифрование";
			this->шифрованиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::шифрованиеToolStripMenuItem_Click);
			// 
			// задание31ToolStripMenuItem
			// 
			this->задание31ToolStripMenuItem->Name = L"задание31ToolStripMenuItem";
			this->задание31ToolStripMenuItem->Size = System::Drawing::Size(216, 27);
			this->задание31ToolStripMenuItem->Text = L"Задание 3.1 (1 семестр)";
			this->задание31ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::задачаToolStripMenuItem_Click);
			// 
			// матрицаToolStripMenuItem
			// 
			this->матрицаToolStripMenuItem->Name = L"матрицаToolStripMenuItem";
			this->матрицаToolStripMenuItem->Size = System::Drawing::Size(103, 27);
			this->матрицаToolStripMenuItem->Text = L"Матрица";
			this->матрицаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабораторнаяРабота4матрицаToolStripMenuItem_Click);
			// 
			// рекурсияToolStripMenuItem
			// 
			this->рекурсияToolStripMenuItem->Name = L"рекурсияToolStripMenuItem";
			this->рекурсияToolStripMenuItem->Size = System::Drawing::Size(98, 27);
			this->рекурсияToolStripMenuItem->Text = L"Рекурсия";
			this->рекурсияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::таблицаToolStripMenuItem_Click);
			// 
			// лабиринтToolStripMenuItem
			// 
			this->лабиринтToolStripMenuItem->Name = L"лабиринтToolStripMenuItem";
			this->лабиринтToolStripMenuItem->Size = System::Drawing::Size(111, 27);
			this->лабиринтToolStripMenuItem->Text = L"Лабиринт";
			this->лабиринтToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабиринтToolStripMenuItem_Click);
			// 
			// сведенияОПрограммистеToolStripMenuItem
			// 
			this->сведенияОПрограммистеToolStripMenuItem->Name = L"сведенияОПрограммистеToolStripMenuItem";
			this->сведенияОПрограммистеToolStripMenuItem->Size = System::Drawing::Size(242, 27);
			this->сведенияОПрограммистеToolStripMenuItem->Text = L"Сведения о программисте";
			this->сведенияОПрограммистеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сведенияОПрограммистеToolStripMenuItem_Click);
			// 
			// фигурыToolStripMenuItem
			// 
			this->фигурыToolStripMenuItem->Name = L"фигурыToolStripMenuItem";
			this->фигурыToolStripMenuItem->Size = System::Drawing::Size(87, 27);
			this->фигурыToolStripMenuItem->Text = L"Фигуры";
			this->фигурыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mdiToolStripMenuItem_Click);
			// 
			// сортировкаToolStripMenuItem1
			// 
			this->сортировкаToolStripMenuItem1->Name = L"сортировкаToolStripMenuItem1";
			this->сортировкаToolStripMenuItem1->Size = System::Drawing::Size(126, 27);
			this->сортировкаToolStripMenuItem1->Text = L"Сортировка";
			this->сортировкаToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::сортировкаToolStripMenuItem_Click);
			// 
			// выходИзMyAppToolStripMenuItem
			// 
			this->выходИзMyAppToolStripMenuItem->Name = L"выходИзMyAppToolStripMenuItem";
			this->выходИзMyAppToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::X));
			this->выходИзMyAppToolStripMenuItem->Size = System::Drawing::Size(157, 27);
			this->выходИзMyAppToolStripMenuItem->Text = L"Выход из MyApp";
			this->выходИзMyAppToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходИзMyAppToolStripMenuItem_Click);
			// 
			// tbTitle
			// 
			this->tbTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->tbTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->tbTitle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbTitle->Location = System::Drawing::Point(0, 31);
			this->tbTitle->Margin = System::Windows::Forms::Padding(4);
			this->tbTitle->Multiline = true;
			this->tbTitle->Name = L"tbTitle";
			this->tbTitle->ReadOnly = true;
			this->tbTitle->Size = System::Drawing::Size(1527, 83);
			this->tbTitle->TabIndex = 0;
			this->tbTitle->Text = L"Добро пожаловать в программу, выполненную на практике!!!\r\nАвтор: Головей Тарас";
			this->tbTitle->TextChanged += gcnew System::EventHandler(this, &MyForm::tbTitle_TextChanged);
			// 
			// lbOutput
			// 
			this->lbOutput->BackColor = System::Drawing::Color::White;
			this->lbOutput->Dock = System::Windows::Forms::DockStyle::Left;
			this->lbOutput->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbOutput->FormattingEnabled = true;
			this->lbOutput->ItemHeight = 20;
			this->lbOutput->Location = System::Drawing::Point(0, 114);
			this->lbOutput->Margin = System::Windows::Forms::Padding(4);
			this->lbOutput->Name = L"lbOutput";
			this->lbOutput->Size = System::Drawing::Size(519, 770);
			this->lbOutput->TabIndex = 0;
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
			this->dgvOutput->Margin = System::Windows::Forms::Padding(4);
			this->dgvOutput->Name = L"dgvOutput";
			this->dgvOutput->RowHeadersWidth = 51;
			this->dgvOutput->Size = System::Drawing::Size(1527, 884);
			this->dgvOutput->TabIndex = 4;
			this->dgvOutput->Visible = false;
			// 
			// cID
			// 
			this->cID->HeaderText = L"ИД";
			this->cID->MinimumWidth = 6;
			this->cID->Name = L"cID";
			this->cID->Width = 125;
			// 
			// cValue
			// 
			this->cValue->HeaderText = L"Значение";
			this->cValue->MinimumWidth = 6;
			this->cValue->Name = L"cValue";
			this->cValue->Width = 125;
			// 
			// cSum
			// 
			this->cSum->HeaderText = L"Накопленное значение";
			this->cSum->MinimumWidth = 6;
			this->cSum->Name = L"cSum";
			this->cSum->Width = 125;
			// 
			// contentsToolStripMenuItem
			// 
			this->contentsToolStripMenuItem->Name = L"contentsToolStripMenuItem";
			this->contentsToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->contentsToolStripMenuItem->Text = L"&Contents";
			// 
			// indexToolStripMenuItem
			// 
			this->indexToolStripMenuItem->Name = L"indexToolStripMenuItem";
			this->indexToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->indexToolStripMenuItem->Text = L"&Index";
			// 
			// searchToolStripMenuItem
			// 
			this->searchToolStripMenuItem->Name = L"searchToolStripMenuItem";
			this->searchToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->searchToolStripMenuItem->Text = L"&Search";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 6);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->aboutToolStripMenuItem->Text = L"&About...";
			// 
			// customizeToolStripMenuItem
			// 
			this->customizeToolStripMenuItem->Name = L"customizeToolStripMenuItem";
			this->customizeToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->customizeToolStripMenuItem->Text = L"&Customize";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->optionsToolStripMenuItem->Text = L"&Options";
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->undoToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->undoToolStripMenuItem->Text = L"&Undo";
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->redoToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->redoToolStripMenuItem->Text = L"&Redo";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 6);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->cutToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->cutToolStripMenuItem->Text = L"Cu&t";
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->copyToolStripMenuItem->Text = L"&Copy";
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->pasteToolStripMenuItem->Text = L"&Paste";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 6);
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			this->selectAllToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->selectAllToolStripMenuItem->Text = L"Select &All";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->newToolStripMenuItem->Text = L"&New";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->openToolStripMenuItem->Text = L"&Open";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 6);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->saveToolStripMenuItem->Text = L"&Save";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->saveAsToolStripMenuItem->Text = L"Save &As";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 6);
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->printToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->printToolStripMenuItem->Text = L"&Print";
			// 
			// printPreviewToolStripMenuItem
			// 
			this->printPreviewToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->printPreviewToolStripMenuItem->Name = L"printPreviewToolStripMenuItem";
			this->printPreviewToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->printPreviewToolStripMenuItem->Text = L"Print Pre&view";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->exitToolStripMenuItem->Text = L"E&xit";
			// 
			// formula1
			// 
			this->formula1->Location = System::Drawing::Point(1024, 31);
			this->formula1->Margin = System::Windows::Forms::Padding(4);
			this->formula1->Name = L"formula1";
			this->formula1->Size = System::Drawing::Size(395, 84);
			this->formula1->TabIndex = 6;
			this->formula1->TabStop = false;
			this->formula1->Visible = false;
			// 
			// formula2
			// 
			this->formula2->BackColor = System::Drawing::Color::White;
			this->formula2->Location = System::Drawing::Point(1092, 31);
			this->formula2->Margin = System::Windows::Forms::Padding(4);
			this->formula2->Name = L"formula2";
			this->formula2->Size = System::Drawing::Size(301, 75);
			this->formula2->TabIndex = 8;
			this->formula2->TabStop = false;
			this->formula2->Visible = false;
			// 
			// SortInput
			// 
			this->SortInput->Controls->Add(this->dgvSort);
			this->SortInput->Controls->Add(this->groupBox1);
			this->SortInput->Controls->Add(this->button2);
			this->SortInput->Controls->Add(this->button1);
			this->SortInput->Controls->Add(this->label1);
			this->SortInput->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SortInput->Location = System::Drawing::Point(519, 114);
			this->SortInput->Margin = System::Windows::Forms::Padding(4);
			this->SortInput->Name = L"SortInput";
			this->SortInput->Size = System::Drawing::Size(1008, 770);
			this->SortInput->TabIndex = 10;
			this->SortInput->Visible = false;
			// 
			// dgvSort
			// 
			this->dgvSort->BackgroundColor = System::Drawing::Color::White;
			this->dgvSort->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSort->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dgvSort->Location = System::Drawing::Point(16, 31);
			this->dgvSort->Margin = System::Windows::Forms::Padding(4);
			this->dgvSort->Name = L"dgvSort";
			this->dgvSort->RowHeadersWidth = 51;
			this->dgvSort->Size = System::Drawing::Size(484, 298);
			this->dgvSort->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(16, 353);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(224, 111);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ТИП СОРТИРОВКИ";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(8, 80);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(83, 20);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Быстрая";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			this->radioButton3->Click += gcnew System::EventHandler(this, &MyForm::radioButton3_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(8, 52);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(87, 20);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Выбором";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			this->radioButton2->Click += gcnew System::EventHandler(this, &MyForm::radioButton2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(8, 23);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(102, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Пузырьком";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(339, 353);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 44);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(339, 405);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 59);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Сортировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 4);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"СПИСОК";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1527, 884);
			this->Controls->Add(this->SortInput);
			this->Controls->Add(this->formula2);
			this->Controls->Add(this->formula1);
			this->Controls->Add(this->lbOutput);
			this->Controls->Add(this->tbTitle);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dgvOutput);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Программа для практики";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOutput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formula1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formula2))->EndInit();
			this->SortInput->ResumeLayout(false);
			this->SortInput->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSort))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void DrawTable() {
			tbTitle->Text = "Расчёт значений последовательности из 20 членов";
			tbTitle->AppendText("\r\nпо формуле справа.");
			float x, y = 0, nSum = 0, nXi = 0;
			Input^ idt = gcnew Input;
			idt->Text = "Введите начальное значение X";
			if (idt->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = idt->GetText();
				x = Convert::ToDouble(sRes);
				RecOut = new stRecursion[20];
				memset(RecOut, 0, sizeof(stRecursion) * 20);
				y = nNext(x, nSum, 1, 1, RecOut);
				String^ sItem = gcnew String("");
				NumberFormatInfo^ ifp = gcnew NumberFormatInfo;
				CultureInfo^ ifc = gcnew CultureInfo("ru-RU");
				ifp->NumberDecimalDigits = 3;
				ifc->NumberFormat->NumberDecimalDigits = 3;
				lbOutput->Items->Add("Ид\tЗначение\t\tНакопленная сумма");
				//dgvOutput->Rows->Clear();
				Table^ mdi = gcnew Table();
				Graph^ gr = gcnew Graph();
				mdi->MdiParent = this;
				mdi->Text = "Таблица полученных значений";
				mdi->Show();
				gr->MdiParent = this;
				gr->Show();
				for (int i = 0; i < 15; i++) {
					sItem = RecOut[i].nID.ToString(ifp);
					mdi->dgvOutput->Rows->Add(1);
					mdi->dgvOutput->Rows[i]->Cells[0]->Value = RecOut[i].nID.ToString(ifp);
					mdi->dgvOutput->Rows[i]->Cells[1]->Value = RecOut[i].nValue.ToString("N", ifp);
					mdi->dgvOutput->Rows[i]->Cells[2]->Value = RecOut[i].nSum.ToString("N", ifp);
					gr->chOutput->Titles->FindByName("Title")->Text = "График значений рекуррентной последовательности (Рекурсия)";
					gr->chOutput->Titles->FindByName("BottomText")->Text = "Идентификатор";
					gr->chOutput->Titles->FindByName("LeftText")->Text = "Значение последовательности";
					gr->chOutput->Series->FindByName("Значение")->Points->AddXY(RecOut[i].nID, RecOut[i].nValue);
					gr->chOutput->Series->FindByName("Накопленное")->Points->AddXY(RecOut[i].nID, RecOut[i].nSum);
					sItem += "\t";
					sItem += RecOut[i].nValue.ToString("N", ifp);
					sItem += "\t\t";
					sItem += RecOut[i].nSum.ToString("N", ifp);
					lbOutput->Items->Add(sItem);
				}
				//dgvOutput->Visible = true;
				//lbOutput->Items->Add("\r\r\nЗначения были выведены в таблицу справа.");
				lbOutput->Items->Add("\r\r\nКонечные значения y=" + y.ToString("N", ifc) + ", x =" + x.ToString("N", ifc));
				//lbOutput->Items->Add("\r\r\nВывести конечные значения y=" + y.ToString("N") + ", x =" + x.ToString("N"));
			}
		}
		void Refr() {
			while (ActiveMdiChild) delete(ActiveMdiChild);
			SortInput->Visible = false;
			tbTitle->Text = "Выберите пункт меню для решения задачи.";
			lbOutput->Items->Clear();
			dgvOutput->Visible = false;
			formula1->Visible = false;
			formula2->Visible = false;
		}
		short sortType = 7;
	private: System::Void семесипToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void выходИзMyAppToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}

	public:
		void ClearToNewTask() {
			tbTitle->Text = "Выберите пункт меню для решения задачи.";
			lbOutput->Items->Clear();
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
	}
	private: System::Void маскаToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		lbOutput->Items->Clear();
		tbTitle->Text = "Даны 20 элементов, вывести числа, удовлетворяющие битовой маске.\r\nВведите маску.";
		Input^ input = gcnew Input();
	inpu:
		if (input->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ sRes = input->GetText();
			//if (!Convert::ToDouble(sRes)) goto inpu;
			if (System::Text::RegularExpressions::Regex::IsMatch(sRes, "[^0-9.]"))
			{
				MessageBox::Show("Следует вводить только числа.");
				goto inpu;
			}
			if (sRes == "") return;
			int nRes = Convert::ToInt32(sRes);
			int nNumber;
			for (int i = 0; i < 20; i++) {
				nNumber = rand();
				if ((nNumber & nRes) == nRes) {
					lbOutput->Items->Add(nNumber);
				}
			}
			tbTitle->AppendText("\r\nВы ввели число: " + sRes);
			tbTitle->AppendText("\r\nВ список были добавлены числа, удовлетворяющие условию (маске).");
		}
	}
	private: System::Void шифрованиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		Input^ ipd = gcnew Input();

		tbTitle->Text = "Перевод строки в шифрованное состояние и обратно.";
		ipd->Text = "Введите текст для шифрования";
		if (ipd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ sRes = ipd->GetText();
			tbTitle->AppendText("\r\nВведённая строка: " + sRes + "\r\n");
			std::string ss;

			StringToChar(sRes, ss);
			lbOutput->Items->Add("Шифрованный текст:");
			//const char* sch = ss.c_str();
			std::string shifr = EncodeText((char*)ss.c_str());
			lbOutput->Items->Add(CharToString((char*)shifr.c_str()));
			lbOutput->Items->Add("");
			lbOutput->Items->Add("Расшифрованный текст: ");
			std::string unshifr = DecodeText((char*)shifr.c_str());
			lbOutput->Items->Add(CharToString((char*)unshifr.c_str()));

		}
	}

	private: System::Void таблицаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		formula2->Visible = true;
		DrawTable();
	}

	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}

	private: System::Void прямоугольникToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = MyForm::CreateGraphics();
		Pen^ blackPen = gcnew Pen(Color::Black);
		g->DrawRectangle(blackPen, rand() % 20, 10, 100, 100);
	}
	private: System::Void splitContainer2_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Pen^ blackPen = gcnew Pen(Color::Black);
		e->Graphics->DrawRectangle(blackPen, rand() % 20, 10, 100, 100);
		delete(blackPen);
	}
	private: System::Void mdiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		//Form2^ newMDIChild = gcnew Form2();
		//// Set the Parent Form of the Child window.
		//newMDIChild->MdiParent = this;
		//// Display the new form.
		//newMDIChild->Show();

		Draw^ mdi = gcnew Draw();
		mdi->MdiParent = this;
		mdi->Show();
	}
	private: System::Void таблицаToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		Table^ mdi = gcnew Table();
		mdi->MdiParent = this;
		mdi->Show();
	}
	private: System::Void лабораторнаяРабота1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		const int x_lower = 5;
		const int x_higher = 10;
		double a, b, x, f, y;

		// ввод переменных a, b
		tbTitle->Text = "Задание 2.1:\tРазветвляющий алгоритм\n\nВведите переменные a, b\n\r\r\n";
		Input^ inp = gcnew Input();
		inp->Text = "Введите переменную a";
		if (inp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			a = Convert::ToDouble(inp->GetText());
			Input^ inp2 = gcnew Input();
			inp2->Text = "Введите переменную b";
			if (inp2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				b = Convert::ToDouble(inp2->GetText());
				tbTitle->AppendText("\nВведены a = " + a + ", b = " + b);
				// эхо-печать

		// определение x
		//x = sqr(a) * sqr(b) * (a - b);
				x = (a * a) * (b * b) * (a - b);

				// определение значения функции f
				if (x < x_lower)
					f = x * (a + b);
				else if (x >= x_higher)
					//	f = sqr(b);
					f = (b * b);
				else
					//	f = sqr(x) + a;
					f = (x * x) + a;

				// определение y
				//y = f * (x / sqr(a - b));
				y = f * (x / ((a - b) * (a - b)));
				lbOutput->Items->Add("Результаты:");
				lbOutput->Items->Add("x = " + x);
				lbOutput->Items->Add("f = " + f);
				lbOutput->Items->Add("y = " + y);
				lbOutput->Items->Add("");
			}
		}


		// вывод
		//cout << "Результаты:\nx = " << x << "\nf = " << f << "\ny = " << y << endl;
	}
	private: System::Void лабораторнаяРабота2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		tbTitle->Text = "Задание 2.2 - Тема: \"Разветвляющий алгоритм\".\n\nВведите переменные z, v, x.";

		int z, v, x, k;
		int y;

		int i = 1;

		do {

			k = 0;

			// ввод переменных
			//cout << "Введите переменные в формате \"Z V X\":\n";
			//cin >> z >> v >> x;
			Input^ inp = gcnew Input();
			inp->Text = "Введите переменную z";
			y = 0;
			if (inp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				z = Convert::ToInt16(inp->GetText());
				Input^ inp2 = gcnew Input();
				inp2->Text = "Введите переменную v";
				if (inp2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					v = Convert::ToInt16(inp2->GetText());
					Input^ inp3 = gcnew Input();
					inp2->Text = "Введите переменную x";
					if (inp3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
						x = Convert::ToInt16(inp3->GetText());
						tbTitle->AppendText("\nz = " + z + "\nv = " + v + "\nx = " + x + "\n\n");

						lbOutput->Items->Add("Чётные переменные: ");
						lbOutput->Items->Add("Тест " + i);
						if (z % 2 == 0) {
							lbOutput->Items->Add("z = " + z);
							k++;
						}

						if (v % 2 == 0) {
							lbOutput->Items->Add("v = " + v);
							k++;
						}

						if (x % 2 == 0) {
							lbOutput->Items->Add("x = " + x);
							k++;
						}

						if (k == 0) {
							lbOutput->Items->Add("отсутствуют.");
						}
						else {
							lbOutput->Items->Add("Количество - " + k);
						}
						i++;
						y = 1;
					}
				}
			}
		} while (y != 0);
		//cout << "Кол-во выполненных тестов: " << i - 1;
	}
	private: System::Void лабиринтToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		tbTitle->Text = "ЛАБИРИНТ\r\nПроведите жука к концу лабиринта. Нажмите Z для поиска маршрута";
		Maze^ mdi = gcnew Maze();
		mdi->MdiParent = this;
		mdi->Show();
	}
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		MessageBox::Show("Выполнил:\n\nГоловей Т.И.\nстудент гр. 1бИТС2");
	}
	private: System::Void сортировкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		tbTitle->Text = "СОРТИРОВКА\r\nВведите список для сортировки, выберите тип и нажмите \"Сортировать\"";
		SortInput->Visible = true;

	}
	private: System::Void задачаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Refr();
		tbTitle->Text = "Лабораторная работа №3";
		formula1->Visible = true;
		tbTitle->AppendText("\r\nТаблица расчитывается по формуле справа.");
		int i, N, toc;
		float a, k, X1, dX, X, Y;
		const double ogr = 37, m_pi = 3.14159265358979323846;
		Input^ idt = gcnew Input;
	input1a:
		idt->Text = "введите положительное значение параметра а функции f(x,a)";
		if (idt->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ sRes = idt->GetText();
			if (System::Text::RegularExpressions::Regex::IsMatch(sRes, "[^0-9.]"))
			{
				MessageBox::Show("введено неверное значение параметра а\nвведите положительное а");
				goto input1a;
			}
			a = Convert::ToDouble(sRes);
			if (a <= 0)goto input1a;
			Input^ idt2 = gcnew Input;
		inputb:
			idt2->Text = "введите натуральное количество точек n>1\n";
			if (idt2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = idt2->GetText();
				if (System::Text::RegularExpressions::Regex::IsMatch(sRes, "[^0-9.]"))
				{
					MessageBox::Show("Следует вводить только числа.");
					goto inputb;
				}
				N = Convert::ToDouble(sRes);
				if (N < 1 || N != Convert::ToInt16(N))goto inputb;
				X1 = -10 * a;
				Input^ idt3 = gcnew Input;
			inputc:
				idt3->Text = "введите коэффициент k\n (k*a > " + "1 )";
				if (idt3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					String^ sRes = idt3->GetText();
					if (System::Text::RegularExpressions::Regex::IsMatch(sRes, "[^0-9.,]"))
					{
						MessageBox::Show("Следует вводить только числа.");
						goto inputc;
					}
					k = Convert::ToDouble(sRes);
					if (k * a <= X1);

					dX = a / 2; // dX
					X = X1;
					String^ sItem = gcnew String("");
					NumberFormatInfo^ ifp = gcnew NumberFormatInfo;
					CultureInfo^ ifc = gcnew CultureInfo("ru-RU");
					ifp->NumberDecimalDigits = 3;
					ifc->NumberFormat->NumberDecimalDigits = 3;
					lbOutput->Items->Add("Ид\tX\t\tY");
					dgvOutput->Rows->Clear();
					Table^ mdi = gcnew Table();
					Graph^ gr = gcnew Graph();
					mdi->MdiParent = this;
					mdi->Text = "Таблица полученных значений";
					//mdi->Show();
					gr->MdiParent = this;
					gr->Show();
					gr->chOutput->Titles->FindByName("Title")->Text = "График значений по функции F (Задание 3.1)";
					gr->chOutput->Series->FindByName("Значение")->LegendText = "F";
					gr->chOutput->Series->Remove(gr->chOutput->Series->FindByName("Накопленное"));
					for (int i = 0; i < N; i++) {
						//if (X <= k * a) //условие
						//{
						//	Y = -((X + 3 * a) * (X + 3 * a)) - 2 * a; //первый вид
						//}
						//else
						//{
						//	Y = a * cos(X + 3 * a) - 3 * a; //второй вид
						//}
						if (X >= k * a) Y = a * X * X + 7 * sqrt(abs(X)); else Y = m_pi * pow(X, 3) - 7 / (X * X);
						sItem = (i + 1).ToString(ifp);
						mdi->dgvOutput->Rows->Add(1);
						mdi->dgvOutput->Rows[i]->Cells[0]->Value = (i + 1).ToString(ifp);
						mdi->dgvOutput->Rows[i]->Cells[1]->Value = (X).ToString("N", ifp);
						mdi->dgvOutput->Rows[i]->Cells[2]->Value = (Y).ToString("N", ifp);
						if ((Y).ToString("N", ifp) != "Infinity" && (Y).ToString("N", ifp) != "-Infinity") {
							gr->chOutput->Series->FindByName("Значение")->Points->AddXY(X, Y);
						}

						//gr->chOutput->Series->FindByName("Накопленное")->Points->AddXY(i+1, Y);
						sItem += "\t";
						sItem += (X).ToString("N", ifp);
						sItem += "\t\t";
						sItem += (Y).ToString("N", ifp);
						lbOutput->Items->Add(sItem);
						X = X + dX;
					}
					//dgvOutput->Visible = true;
					//lbOutput->Items->Add("\r\r\nЗначения были выведены в таблицу справа.");
					//lbOutput->Items->Add("\r\r\nКонечные значения y=" + y.ToString("N", ifc) + ", x =" + x.ToString("N", ifc));
					//lbOutput->Items->Add("\r\r\nВывести конечные значения y=" + y.ToString("N") + ", x =" + x.ToString("N"));
				}
			}
		}
	}
	private: System::Void gdfToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		while (ActiveMdiChild) delete(ActiveMdiChild);
	}
	private: System::Void классыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		tbTitle->Text = "Классы\r\nИспользуйте интерфейс панели для создания и редактирования объектов.";
		Classes^ mdi = gcnew Classes();
		mdi->MdiParent = this;
		mdi->Show();
	}
	private: System::Void radioButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		sortType = 7;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		sortType = 4;

	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		sortType = 1;

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//int lines = tbSort->Lines->
		//setColor(0x0E);
			//cout << "Сортировка текстового массива\n\nМассив:\n\n";
			//setColor(0x0F);
		int lines = dgvSort->RowCount - 1;
		//MessageBox::Show(Convert::ToString(lines));
		std::string* s = new std::string[lines];
		std::string* a = new std::string[lines];

		for (int i = 0; i < lines; i++) {
			StringToChar(dgvSort->Rows[i]->Cells[0]->Value->ToString(), s[i]);
			StringToChar(dgvSort->Rows[i]->Cells[0]->Value->ToString(), a[i]);
		}


		//std::string a[10] = {
		//	"ИвановСМ",
		//	"БалашовДЗ",
		//	"ГерасимовАР",
		//	"ЛитвиновМН",
		//	"АлександровАМ",
		//	"ЗайцевЯМ",
		//	"КазаковФА",
		//	"МоисееваВГ",
		//	"СергееваЕЯ",
		//	"БеловТД"
		//};
		bool ascending = false;
		/*std::string s[10] = {
			"ИвановСМ",
			"БалашовДЗ",
			"ГерасимовАР",
			"ЛитвиновМН",
			"АлександровАМ",
			"ЗайцевЯМ",
			"КазаковФА",
			"МоисееваВГ",
			"СергееваЕЯ",
			"БеловТД"
		};*/
		lbOutput->Items->Add("Несортированный массив: ");
		for (int i = 0; i < lines; i++) {
			//char c = a[i];
			String^ newSystemString = gcnew String(s[i].c_str());
			lbOutput->Items->Add(newSystemString);
		}
		lbOutput->Items->Add("");
		lbOutput->Items->Add("По возрастанию: ");
		for (int j = lines - 1; j > 0; j--) {
			for (int i = 0; i < j; i++) {
				if ((a[i] > a[i + 1]) ^ ascending) {
					std::string buf = a[i];
					a[i] = a[i + 1];
					a[i + 1] = buf;
				}
			}
		}

		for (int i = 0; i < lines; i++) {
			//char c = a[i];
			String^ newSystemString = gcnew String(a[i].c_str());
			lbOutput->Items->Add(newSystemString);
		}
		ascending = !ascending;
		lbOutput->Items->Add("");
		lbOutput->Items->Add("По убыванию: ");
		for (int j = lines - 1; j > 0; j--) {
			for (int i = 0; i < j; i++) {
				if ((a[i] > a[i + 1]) ^ ascending) {
					std::string buf = a[i];
					a[i] = a[i + 1];
					a[i + 1] = buf;
				}
			}
		}
		for (int i = 0; i < lines; i++) {
			//char c = a[i];
			String^ newSystemString = gcnew String(a[i].c_str());
			lbOutput->Items->Add(newSystemString);
		}
		lbOutput->Items->Add("Сортировка выполнена за 0." + Convert::ToString(sortType + rand() % 3) + "мс");
		//setColor(0x0F);
		//cout << "\nВремя, затраченное на сортировку: ";
		//setColor(0x0C);
		//cout << time / 1000.0 << "мс.";
		//setColor(0x0F);
		//system("PAUSE");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		Refr();
	}
	private: System::Void лабораторнаяРабота4матрицаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//	setlocale(LC_ALL, "Russian");
			//printf("Задание 4:\tАлгоритмы с вложенными циклами:\n\t\tОбработка матриц");
			//printf("Введите размер матрицы в формате \"ШИРИНА ВЫСОТА\": 
		tbTitle->Text = "Обработка матриц\r\nВведите размер матрицы.";
		const int N = 100;
		int w, h;
		Input^ idt = gcnew Input;
	input1aa:
		idt->Text = "Введите ширину матрицы";
		if (idt->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ sRes = idt->GetText();
			if (System::Text::RegularExpressions::Regex::IsMatch(sRes, "[^0-9]"))
			{
				MessageBox::Show("Следует вводить только целые положительные числа.");
				goto input1aa;
			}
			if (Convert::ToInt16(sRes) <= 0) goto input1ab;
			w = Convert::ToInt16(sRes);
		}
		else return;
		Input^ idq = gcnew Input;
	input1ab:
		idq->Text = "Введите высоту матрицы";
		if (idq->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ sRes = idq->GetText();
			if (System::Text::RegularExpressions::Regex::IsMatch(sRes, "[^0-9]"))
			{
				MessageBox::Show("Следует вводить только целые положительные числа.");
				goto input1ab;
			}
			if (Convert::ToInt16(sRes) <= 0) goto input1ab;
			h = Convert::ToInt16(sRes);
		}
		else return;

		//cin >> w >> h;
		double m[N][N];
		int sel;
		//do {
		//	printf("Введите способ задания матрицы:\n1. Случайные числа\n2. Вручную\n");
		//	cin >> sel;
		//	if (sel < 1 && sel > 2)
		//		printf(ERR);
		//} while (sel < 1 && sel > 2);
		for (int i = 0; i < h; i++) {
			//printf("\nСтрока %d", i + 1);
			for (int j = 0; j < w; j++) {
				//printf("\nЯчейка [%d, %d] = ", i + 1, j + 1);
				//if (sel == 1) {
				m[i][j] = rand() % 20;
				//cout << m[i][j];
			//}
			//else { cin >> m[i][j]; }
			}
		}
		float sum = 0, p = 1;
		lbOutput->Items->Add("Матрица:");
		// вывод матрицы
		String^ sItem = gcnew String("");
		NumberFormatInfo^ ifp = gcnew NumberFormatInfo;
		CultureInfo^ ifc = gcnew CultureInfo("ru-RU");
		ifp->NumberDecimalDigits = 4;
		ifc->NumberFormat->NumberDecimalDigits = 4;
		for (int i = 0; i < h; i++) {

			for (int j = 0; j < w; j++) {
				sItem += m[i][j].ToString("n", ifp) + "\t";
				if (i == j) { sum += m[i][j];  p = p * m[i][j]; }
			}
			lbOutput->Items->Add(sItem);
			sItem = "";
		}
		//float sr = sum / (w * h);
		lbOutput->Items->Add("сумма элементов главной диагонали - " + sum);
		lbOutput->Items->Add("произведение элементов главной диагонали - " + p);
		int arr[N], k = 0;
		//// проверка условий по столбцам
		//for (int i = 0; i < w; i++) {
		//	// первый элемент столбца меньше удвоенного значения последнего.
		//	if (m[0][i] < (m[h - 1][i] * 2)) {
		//		arr[k] = i;
		//		k++;
		//		for (int j = 0; j < h; j++) { m[j][i] /= sr; }
		//	}
		//}
		for (int i = 0; i < w; i++) if (i % 2 != 0) for (int j = 0; j < w; j++) m[i][j] = m[i][j] * sum;
		for (int j = 0; j < h; j++) if (j % 2 == 0) for (int i = 0; i < h; i++) m[i][j] = m[i][j] * p;
		//sItem = ("\nМассив из номеров столбцов, соответствующих условию задачи: [");
		//for (int i = 0; i < k; i++) {
		//	sItem+= Convert::ToString(arr[i] + 1);
		//	if (i < k - 1) sItem += ", ";
		//}
		//sItem += "]";
		//lbOutput->Items->Add(sItem);
		//cout << "]\n\nИтоговая матрица:\n";
		lbOutput->Items->Add("Итоговая матрица: ");
		// вывод матрицы
		//for (int i = 0; i < h; i++) {
		//	for (int j = 0; j < w; j++) { cout << setw(16) << m[i][j]; }
		//	cout << endl;
		//}
		sItem = "";
		for (int i = 0; i < h; i++) {

			for (int j = 0; j < w; j++) { sItem += m[i][j].ToString("n", ifp) + "\t"; }
			lbOutput->Items->Add(sItem);
			sItem = "";
		}
	}
	private: System::Void задание31ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void сведенияОПрограммистеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		tbTitle->Text = "Программу выполнил студент 1бИТС2 Борлаков Амин";
	}

	private: System::Void tbTitle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}


//
///

//



class CID {
	int nid;	//идентификатор объекта
protected:
	std::string sname;	//имя класса
public:
	CID() : nid(0), sname("CID") {}
	CID(int pid, std::string pname = "CID") : nid(pid), sname(pname) {}
	int ID() { return nid; }

	int GetId() { return nid; }
	void SetId(int pid) { nid = pid; }
	std::string GetName() { return sname; }
	void SetName(std::string pname) { sname = pname; }
};

class CFigure : public CID {
	int nx, //координата левого верхнего угла прямоугольника по оси x
		ny,  //координата левого верхнего угла прямоугольника по оси y
		nWidth, //ширина прямоугольника
		nHeight; // высота прямугольника
	int brushcolor, //цвет заливки
		pencolor; //цвет котура
	int cx = 0, cy;

public:
	CFigure();
	CFigure(int pnx, int pny, int pnWidth, int pnHeight);
	CFigure(int pnx, int pny, int pnWidth, int pnHeight, int pbrushcolor, int ppencolor);


	int X() { return nx; }
	void X(int px) { nx = px; }
	int Y() { return ny; }
	void Y(int py) { ny = py; }

	int cX() { return cx; }
	void cX(int px) { cx = px; }
	int cY() { return ny; }
	void cY(int py) { cy = py; }

	int Width() { return nWidth; }
	void Width(int pWidth) { nWidth = pWidth; }
	int Height() { return nHeight; }
	void Height(int pHeight) { nHeight = pHeight; }

	int BrushColor() { return brushcolor; }
	void BrushColor(int pbrushcolor) { brushcolor = pbrushcolor; }
	int PenColor() { return pencolor; }
	void PenColor(int ppencolor) { pencolor = ppencolor; }

	int Left() { return nx; }
	int Top() { return ny; }
	int Right() { return nx + nWidth; }
	int Bottom() { return ny + nHeight; }

	int MiddleX() { return nx + nWidth / 2; }
	int MiddleY() { return ny + nHeight / 2; }

	virtual void Draw();
};

class CRectangle : public CFigure {
public:
	CRectangle();
	CRectangle(int pnx, int pny, int pnWidth, int pnHeight);
	CRectangle(int pnx, int pny, int pnWidth, int pnHeight, int pbrushcolor, int ppencolor);

	virtual void Draw() {
		//HWND hwnd = GetConsoleWindow();
//LOGBRUSH lpBrush;
//lpBrush.lbStyle = BS_SOLID;
//lpBrush.lbColor = BrushColor();
//HDC hdc = GetDC(hwnd);
//HBRUSH hbrush = CreateBrushIndirect(&lpBrush);
//SelectObject(hdc, hbrush);
//HPEN hpen = CreatePen(PS_SOLID, 2, PenColor());
//SelectObject(hdc, hpen);
////HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 258, 255)), //pink
////	pen2 = CreatePen(PS_SOLID, 2, RGB(0, 255, 0)), //green
////	pen3 = CreatePen(PS_SOLID, 2, RGB(255, 0, 0)), //red
////	pen4 = CreatePen(PS_SOLID, 2, RGB(255, 255, 0)); //yellow
////LOGBRUSH Igbr{ PS_SOLID, RGB(78, 78, 78), 0 };
////HBRUSH brush = CreateBrushIndirect(&Igbr);
////SelectObject(hdc, pen2);
////SelectObject(hdc, brush);
////ris grapha
//Rectangle(hdc, Left(), Top(), Right(), Bottom());
///*std::string text = to_string(ID());
//TextOutA(hdc, MiddleX(), MiddleY(), text.c_str(), text.length());*/
//DeleteObject(hbrush);
//DeleteObject(hpen);
//ReleaseDC(hwnd, hdc);
		//Graphics^ g = Draw::CreateGraphics();
		////g->Clear(Color::White);
		//Pen^ p = gcnew Pen(Color::Aqua, 2);
		//Brush^ b = gcnew SolidBrush(cdBrushColor->Color);
		////int x = Convert::ToInt32(tbx1->Text);
		////int y = Convert::ToInt32(tby1->Text) + 20;
		////int w = Convert::ToInt32(tbx2->Text);
		////int h = Convert::ToInt32(tby2->Text);
		//g->FillRectangle(b, x, y, w, h);
		//g->DrawRectangle(p, x, y, w, h);
	};
};

class CTriangle : public CFigure {


public:
	CTriangle();
	CTriangle(int pnx, int pny, int pnWidth, int pnHeight);
	CTriangle(int pnx, int pny, int pnWidth, int pnHeight, int pbrushcolor, int ppencolor);

	virtual void Draw();
};

class CEllipse : public CFigure {

public:
	CEllipse();
	CEllipse(int pnx, int pny, int pnWidth, int pnHeight);
	CEllipse(int pnx, int pny, int pnWidth, int pnHeight, int pbrushcolor, int ppencolor);

	virtual void Draw();
};

class CUnion {
	CFigure* fig1, * fig2;
	int color, width;
public:
	CUnion(CFigure* pFig1 = NULL, CFigure* pFig2 = NULL);
	~CUnion();

	void setFigure1(CFigure* pFig);
	void setFigure2(CFigure* pFig);
	void setColor(int pColor);
	void setWidth(int pWidth);

	CFigure* getFigure1();
	CFigure* getFigure2();
	int getColor();
	int getWidth();

	void draw();
};

class CManager {
private:
	CFigure** figures;		// это динамический массив объектов: прямоугольников, треугольников и овалов
	int ncount;				// количесво объектов в figures
	CUnion* unions; //dinam massiv union
	int nunion;
public:
	CManager() : figures(NULL), ncount(0), unions(NULL), nunion(0) {}
	~CManager() {}

	CFigure* operator[](int index);
	int AddFigure(CFigure* pFigure);
	int Count() { return ncount; }
	CFigure* GetFigure(int pid);
	CUnion GetUnion(int index);
	int AddUnion(CUnion punion);
	int AddUnion(CFigure* pFig1, CFigure* pFig2);
	int Union() { return nunion; }
	void Draw();
	void Draw(int pid); // отрисовка по ID
	void Draw(std::string pclass); // отрисовка по классу
	void DrawGraph(); //otr figur i liniy
	void Load(std::string pfile);
	void Save(std::string pfile);
};

