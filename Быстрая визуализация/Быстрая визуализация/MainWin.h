#pragma once

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
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
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



	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWin::typeid));
			this->MainChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->MinButton = (gcnew System::Windows::Forms::Button());
			this->TestButton = (gcnew System::Windows::Forms::Button());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainChart))->BeginInit();
			this->SuspendLayout();
			// 
			// MainChart
			// 
			this->MainChart->BorderSkin->BorderWidth = 0;
			chartArea1->AlignmentStyle = System::Windows::Forms::DataVisualization::Charting::AreaAlignmentStyles::Cursor;
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
			series1->Color = System::Drawing::Color::IndianRed;
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
			this->MainChart->Size = System::Drawing::Size(800, 560);
			this->MainChart->TabIndex = 0;
			this->MainChart->Text = L"chart1";
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::IndianRed;
			this->ExitButton->FlatAppearance->BorderSize = 0;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->Location = System::Drawing::Point(760, -1);
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
			this->MinButton->Location = System::Drawing::Point(720, -1);
			this->MinButton->Name = L"MinButton";
			this->MinButton->Size = System::Drawing::Size(40, 40);
			this->MinButton->TabIndex = 2;
			this->MinButton->Text = L"-";
			this->MinButton->UseVisualStyleBackColor = false;
			this->MinButton->Click += gcnew System::EventHandler(this, &MainWin::MinButton_Click);
			// 
			// TestButton
			// 
			this->TestButton->Location = System::Drawing::Point(639, 8);
			this->TestButton->Name = L"TestButton";
			this->TestButton->Size = System::Drawing::Size(75, 23);
			this->TestButton->TabIndex = 3;
			this->TestButton->Text = L"TEST";
			this->TestButton->UseVisualStyleBackColor = true;
			this->TestButton->Click += gcnew System::EventHandler(this, &MainWin::TestButton_Click);
			// 
			// NameLabel
			// 
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameLabel->Location = System::Drawing::Point(10, 10);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(300, 20);
			this->NameLabel->TabIndex = 4;
			this->NameLabel->Text = L"QuickSort";
			// 
			// MainWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(800, 600);
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
	int x, y;
	this->MainChart->Series[0]->Points->Clear();
	for (int x = 0; x < 10; x++) {
		y = x + 1;
		this->MainChart->Series[0]->Points->AddXY(x, y);
	}
}
};
}
#pragma endregion