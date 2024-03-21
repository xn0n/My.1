#pragma once

namespace My {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Graph
	/// </summary>
	public ref class Graph : public System::Windows::Forms::Form
	{
	public:
		Graph(void)
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
		~Graph()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataVisualization::Charting::Chart^ chOutput;
	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chOutput = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chOutput))->BeginInit();
			this->SuspendLayout();
			// 
			// chOutput
			// 
			this->chOutput->BackColor = System::Drawing::Color::Silver;
			this->chOutput->BorderlineColor = System::Drawing::Color::Transparent;
			this->chOutput->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea1->BackSecondaryColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			chartArea1->BorderColor = System::Drawing::Color::DimGray;
			chartArea1->Name = L"ChartArea1";
			this->chOutput->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			legend1->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chOutput->Legends->Add(legend1);
			this->chOutput->Location = System::Drawing::Point(106, 21);
			this->chOutput->Name = L"chOutput";
			series1->BorderWidth = 5;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series1->Legend = L"Legend1";
			series1->Name = L"Значение";
			series2->BorderWidth = 5;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series2->Legend = L"Legend1";
			series2->Name = L"Накопленное";
			this->chOutput->Series->Add(series1);
			this->chOutput->Series->Add(series2);
			this->chOutput->Size = System::Drawing::Size(604, 348);
			this->chOutput->TabIndex = 0;
			this->chOutput->Text = L"авыавы";
			title1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			title1->Name = L"Title";
			title1->Text = L"График значений";
			title2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title2->Name = L"BottomText";
			title2->Text = L"Значение X";
			title3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			title3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title3->Name = L"LeftText";
			title3->Text = L"Значение Y";
			this->chOutput->Titles->Add(title1);
			this->chOutput->Titles->Add(title2);
			this->chOutput->Titles->Add(title3);
			// 
			// Graph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1026, 759);
			this->Controls->Add(this->chOutput);
			this->Name = L"Graph";
			this->Text = L"График";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Graph::Graph_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chOutput))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Graph_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
