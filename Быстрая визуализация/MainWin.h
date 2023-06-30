#pragma once
#include <iostream>
#include <time.h>

namespace Ѕыстра€визуализаци€ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// —водка дл€ MainWin
	/// </summary>
	public ref class MainWin : public System::Windows::Forms::Form
	{
	public:
		MainWin(void)
		{
			InitializeComponent();
			int y;
			srand((unsigned)time(NULL));
			arrY = new int[40];
			this->MainChart->Series[0]->Points->Clear();
			for (int i = 0; i < 40; i++) {
				y = rand() % 40;
				arrY[i]=y;
				this->MainChart->Series[0]->Points->AddXY(i,y);
			}
		}
	public: System::Windows::Forms::Timer^ Timer;
	private: System::Windows::Forms::Button^ ResetButton;
	public:

	public:
	protected:
		int* arrY;
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainWin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ MainChart;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ MinButton;
	private: System::Windows::Forms::Button^ TestButton;
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWin::typeid));
			this->MainChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->MinButton = (gcnew System::Windows::Forms::Button());
			this->TestButton = (gcnew System::Windows::Forms::Button());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainChart))->BeginInit();
			this->SuspendLayout();
			// 
			// MainChart
			// 
			this->MainChart->BorderSkin->BorderWidth = 0;
			chartArea1->AlignmentStyle = System::Windows::Forms::DataVisualization::Charting::AreaAlignmentStyles::Cursor;
			chartArea1->Area3DStyle->Inclination = 10;
			chartArea1->Area3DStyle->Rotation = 10;
			chartArea1->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->AxisX2->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->AxisY2->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->BorderColor = System::Drawing::Color::Transparent;
			chartArea1->IsSameFontSizeForAllAxes = true;
			chartArea1->Name = L"ChartArea1";
			this->MainChart->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->MainChart->Legends->Add(legend1);
			this->MainChart->Location = System::Drawing::Point(0, 40);
			this->MainChart->Name = L"MainChart";
			this->MainChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::SkyBlue;
			series1->CustomProperties = L"PointWidth=0.9";
			series1->EmptyPointStyle->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			series1->Font = (gcnew System::Drawing::Font(L"Courier New", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->MarkerBorderColor = System::Drawing::Color::Black;
			series1->Name = L"hgtyv";
			series1->YAxisType = System::Windows::Forms::DataVisualization::Charting::AxisType::Secondary;
			series1->YValuesPerPoint = 3;
			this->MainChart->Series->Add(series1);
			this->MainChart->Size = System::Drawing::Size(1300, 560);
			this->MainChart->TabIndex = 0;
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::IndianRed;
			this->ExitButton->FlatAppearance->BorderSize = 0;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->Location = System::Drawing::Point(1260, -1);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(40, 40);
			this->ExitButton->TabIndex = 1;
			this->ExitButton->Text = L"&X";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainWin::ExitButton_Click);
			// 
			// MinButton
			// 
			this->MinButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->MinButton->FlatAppearance->BorderSize = 0;
			this->MinButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MinButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MinButton->Location = System::Drawing::Point(1220, -1);
			this->MinButton->Name = L"MinButton";
			this->MinButton->Size = System::Drawing::Size(40, 40);
			this->MinButton->TabIndex = 2;
			this->MinButton->Text = L"-";
			this->MinButton->UseVisualStyleBackColor = false;
			this->MinButton->Click += gcnew System::EventHandler(this, &MainWin::MinButton_Click);
			// 
			// TestButton
			// 
			this->TestButton->BackColor = System::Drawing::Color::SandyBrown;
			this->TestButton->FlatAppearance->BorderSize = 0;
			this->TestButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TestButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TestButton->Location = System::Drawing::Point(1140, -1);
			this->TestButton->Name = L"TestButton";
			this->TestButton->Size = System::Drawing::Size(80, 40);
			this->TestButton->TabIndex = 3;
			this->TestButton->Text = L"Sort";
			this->TestButton->UseVisualStyleBackColor = false;
			this->TestButton->Click += gcnew System::EventHandler(this, &MainWin::TestButton_Click);
			// 
			// NameLabel
			// 
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameLabel->Location = System::Drawing::Point(10, 10);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(300, 20);
			this->NameLabel->TabIndex = 4;
			this->NameLabel->Text = L"QuickSort";
			// 
			// Timer
			// 
			this->Timer->Enabled = true;
			this->Timer->Interval = 50;
			this->Timer->Tick += gcnew System::EventHandler(this, &MainWin::Timer_Tick);
			// 
			// ResetButton
			// 
			this->ResetButton->BackColor = System::Drawing::Color::PaleGreen;
			this->ResetButton->FlatAppearance->BorderSize = 0;
			this->ResetButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ResetButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResetButton->Location = System::Drawing::Point(1060, -1);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(80, 40);
			this->ResetButton->TabIndex = 5;
			this->ResetButton->Text = L"Reset\r\n";
			this->ResetButton->UseVisualStyleBackColor = false;
			this->ResetButton->Click += gcnew System::EventHandler(this, &MainWin::ResetButton_Click);
			// 
			// MainWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1300, 600);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->NameLabel);
			this->Controls->Add(this->TestButton);
			this->Controls->Add(this->MinButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->MainChart);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainWin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"QuickSort";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainChart))->EndInit();
			this->ResumeLayout(false);

		}
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void MinButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
	}

	private: System::Void TestButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Timer->Start();
		quicksort(0, 39);
	}
	void quicksort(int start, int end) {
		int partition = part(start, end);
		if (start >= end)
			return;
		quicksort(start, partition - 1);
		quicksort(partition + 1, end);
	}
	int part(int start, int end) {
		int pivot = this->arrY[start], count = 0, pivotindex, i, j;
		for (int i = start + 1; i <= end; i++)
			if (this->arrY[i] <= pivot)
				count++;
		pivotindex = start + count;
		std::swap(this->arrY[pivotindex], this->arrY[start]);
		i = start, j = end;
		while (i<pivotindex && j>pivotindex) {
			while (this->arrY[i] <= pivot)
				i++;
			while (this->arrY[j] > pivot)
				j--;
			if (i<pivotindex && j>pivotindex)
				std::swap(this->arrY[i++], this->arrY[j--]);
		}
		this->MainChart->Series[0]->Points->Clear();
		for (int i = 0; i < 40; i++)
			this->MainChart->Series[0]->Points->AddXY(i, arrY[i]);
		return pivotindex;
	}
	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int y;
		srand((unsigned)time(NULL));
		this->MainChart->Series[0]->Points->Clear();
		for (int i = 0; i < 40; i++) {
			y = rand() % 40;
			arrY[i] = y;
			this->MainChart->Series[0]->Points->AddXY(i, y);
		}
	}
};
}
#pragma endregion
//void quicksort(int start, int end) {
//	int partition = part(start, end);
//	if (start >= end)
//		return;
//	quicksort(start, partition - 1);
//	quicksort(partition + 1, end);
//}
//int part(int start, int end) {
//	int pivot = this->arrY[start], count = 0, pivotindex, i, j;
//	for (int i = start + 1; i <= end; i++)
//		if (this->arrY[i] <= pivot)
//			count++;
//	pivotindex = start + count;
//	std::swap(this->arrY[pivotindex], this->arrY[start]);
//	i = start, j = end;
//	while (i<pivotindex && j>pivotindex) {
//		while (this->arrY[i] <= pivot)
//			i++;
//		while (this->arrY[j] > pivot)
//			j--;
//		if (i<pivotindex && j>pivotindex)
//			std::swap(this->arrY[i++], this->arrY[j--]);
//	}
//	this->MainChart->Series[0]->Points->Clear();
//	for (int i = 0; i < 40; i++)
//		this->MainChart->Series[0]->Points->AddXY(i, arrY[i]);
//	return pivotindex;
//}