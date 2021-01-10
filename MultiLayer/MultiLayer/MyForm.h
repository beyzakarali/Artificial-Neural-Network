#pragma once
#include <Windows.h>
#include "Classification.h"
#include <time.h> 
#include <math.h>
#include <stdlib.h>

#include <iostream>
using namespace std;

namespace MultiLayer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin. 
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ processesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ýnitializingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ manualToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getWeightsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getDataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ randomToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trainingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ binaryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ continousToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contWithMomentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ testToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ solutionAreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ showSamplesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox1;




	private: System::Windows::Forms::Label^ Error;
	private: System::Windows::Forms::Label^ cycle;
	private: System::Windows::Forms::NumericUpDown^ Neuron_Size;
	private: System::Windows::Forms::NumericUpDown^ Class_Size;
	private: System::Windows::Forms::NumericUpDown^ Class_Label;

	private:
		Samples* p;
		int Total_size = 0;
		W* w;
		Color_* clr_p;
		Color_* clr_n;
		V* v;
		
		//TEST ICIN TANIMLAMA
		double* w_m; // class_numb x neuron_numb +1
		double* v_m; // neuron_numb x 3
		double* p_m;
		double* o, * y, *fnetj, *fnetk;
		int neuron_numb, class_numb;
		
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;


	private: System::ComponentModel::IContainer^ components;
		   /// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			   System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->processesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->ýnitializingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->manualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->getWeightsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->getDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->randomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->trainingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->binaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->continousToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->contWithMomentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->testToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->solutionAreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->showSamplesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->Neuron_Size = (gcnew System::Windows::Forms::NumericUpDown());
			   this->Class_Size = (gcnew System::Windows::Forms::NumericUpDown());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->Error = (gcnew System::Windows::Forms::Label());
			   this->cycle = (gcnew System::Windows::Forms::Label());
			   this->Class_Label = (gcnew System::Windows::Forms::NumericUpDown());
			   this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			   this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->menuStrip1->SuspendLayout();
			   this->groupBox1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Neuron_Size))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Class_Size))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Class_Label))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(3, 25);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(446, 421);
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			   // 
			   // processesToolStripMenuItem
			   // 
			   this->processesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->ýnitializingToolStripMenuItem,
					   this->trainingToolStripMenuItem, this->testToolStripMenuItem, this->saveToolStripMenuItem
			   });
			   this->processesToolStripMenuItem->Name = L"processesToolStripMenuItem";
			   this->processesToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			   this->processesToolStripMenuItem->Text = L"Processes";
			   // 
			   // ýnitializingToolStripMenuItem
			   // 
			   this->ýnitializingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->manualToolStripMenuItem,
					   this->randomToolStripMenuItem
			   });
			   this->ýnitializingToolStripMenuItem->Name = L"ýnitializingToolStripMenuItem";
			   this->ýnitializingToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			   this->ýnitializingToolStripMenuItem->Text = L"Initializing";
			   // 
			   // manualToolStripMenuItem
			   // 
			   this->manualToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->getWeightsToolStripMenuItem,
					   this->getDataToolStripMenuItem
			   });
			   this->manualToolStripMenuItem->Name = L"manualToolStripMenuItem";
			   this->manualToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			   this->manualToolStripMenuItem->Text = L"Manual";
			   // 
			   // getWeightsToolStripMenuItem
			   // 
			   this->getWeightsToolStripMenuItem->Name = L"getWeightsToolStripMenuItem";
			   this->getWeightsToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			   this->getWeightsToolStripMenuItem->Text = L"GetWeights";
			   // 
			   // getDataToolStripMenuItem
			   // 
			   this->getDataToolStripMenuItem->Name = L"getDataToolStripMenuItem";
			   this->getDataToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			   this->getDataToolStripMenuItem->Text = L"GetData";
			   // 
			   // randomToolStripMenuItem
			   // 
			   this->randomToolStripMenuItem->Name = L"randomToolStripMenuItem";
			   this->randomToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			   this->randomToolStripMenuItem->Text = L"Random";
			   this->randomToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::randomToolStripMenuItem_Click);
			   // 
			   // trainingToolStripMenuItem
			   // 
			   this->trainingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->binaryToolStripMenuItem,
					   this->continousToolStripMenuItem, this->contWithMomentToolStripMenuItem
			   });
			   this->trainingToolStripMenuItem->Name = L"trainingToolStripMenuItem";
			   this->trainingToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			   this->trainingToolStripMenuItem->Text = L"Training";
			   // 
			   // binaryToolStripMenuItem
			   // 
			   this->binaryToolStripMenuItem->Name = L"binaryToolStripMenuItem";
			   this->binaryToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			   this->binaryToolStripMenuItem->Text = L"Discrete";
			   this->binaryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::binaryToolStripMenuItem_Click);
			   // 
			   // continousToolStripMenuItem
			   // 
			   this->continousToolStripMenuItem->Name = L"continousToolStripMenuItem";
			   this->continousToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			   this->continousToolStripMenuItem->Text = L"Continous";
			   this->continousToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::continousToolStripMenuItem_Click);
			   // 
			   // contWithMomentToolStripMenuItem
			   // 
			   this->contWithMomentToolStripMenuItem->Name = L"contWithMomentToolStripMenuItem";
			   this->contWithMomentToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			   this->contWithMomentToolStripMenuItem->Text = L"Cont_With_Moment";
			   // 
			   // testToolStripMenuItem
			   // 
			   this->testToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->solutionAreaToolStripMenuItem,
					   this->showSamplesToolStripMenuItem
			   });
			   this->testToolStripMenuItem->Name = L"testToolStripMenuItem";
			   this->testToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			   this->testToolStripMenuItem->Text = L"Test";
			   // 
			   // solutionAreaToolStripMenuItem
			   // 
			   this->solutionAreaToolStripMenuItem->Name = L"solutionAreaToolStripMenuItem";
			   this->solutionAreaToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			   this->solutionAreaToolStripMenuItem->Text = L"SolutionArea";
			   this->solutionAreaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::solutionAreaToolStripMenuItem_Click);
			   // 
			   // showSamplesToolStripMenuItem
			   // 
			   this->showSamplesToolStripMenuItem->Name = L"showSamplesToolStripMenuItem";
			   this->showSamplesToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			   this->showSamplesToolStripMenuItem->Text = L"ShowSamples";
			   this->showSamplesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::showSamplesToolStripMenuItem_Click);
			   // 
			   // saveToolStripMenuItem
			   // 
			   this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			   this->saveToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			   this->saveToolStripMenuItem->Text = L"Save";
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processesToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(1180, 24);
			   this->menuStrip1->TabIndex = 1;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(7, 33);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(58, 13);
			   this->label1->TabIndex = 4;
			   this->label1->Text = L"Class Size:";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(6, 66);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(105, 13);
			   this->label2->TabIndex = 5;
			   this->label2->Text = L"Hidden Neuron Size:";
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->Neuron_Size);
			   this->groupBox1->Controls->Add(this->Class_Size);
			   this->groupBox1->Controls->Add(this->button1);
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Controls->Add(this->label2);
			   this->groupBox1->Location = System::Drawing::Point(455, 27);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(221, 145);
			   this->groupBox1->TabIndex = 6;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Information";
			   // 
			   // Neuron_Size
			   // 
			   this->Neuron_Size->Location = System::Drawing::Point(118, 62);
			   this->Neuron_Size->Name = L"Neuron_Size";
			   this->Neuron_Size->Size = System::Drawing::Size(82, 20);
			   this->Neuron_Size->TabIndex = 8;
			   this->Neuron_Size->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			   // 
			   // Class_Size
			   // 
			   this->Class_Size->Location = System::Drawing::Point(118, 31);
			   this->Class_Size->Name = L"Class_Size";
			   this->Class_Size->Size = System::Drawing::Size(82, 20);
			   this->Class_Size->TabIndex = 7;
			   this->Class_Size->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(84, 103);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(62, 36);
			   this->button1->TabIndex = 6;
			   this->button1->Text = L"Apply";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(833, 53);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(61, 13);
			   this->label3->TabIndex = 8;
			   this->label3->Text = L"Class Label";
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Location = System::Drawing::Point(730, 106);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(89, 17);
			   this->checkBox1->TabIndex = 9;
			   this->checkBox1->Text = L"Normalization";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			   // 
			   // Error
			   // 
			   this->Error->AutoSize = true;
			   this->Error->Location = System::Drawing::Point(900, 53);
			   this->Error->Name = L"Error";
			   this->Error->Size = System::Drawing::Size(0, 13);
			   this->Error->TabIndex = 14;
			   // 
			   // cycle
			   // 
			   this->cycle->AutoSize = true;
			   this->cycle->Location = System::Drawing::Point(914, 88);
			   this->cycle->Name = L"cycle";
			   this->cycle->Size = System::Drawing::Size(0, 13);
			   this->cycle->TabIndex = 15;
			   // 
			   // Class_Label
			   // 
			   this->Class_Label->Location = System::Drawing::Point(730, 55);
			   this->Class_Label->Name = L"Class_Label";
			   this->Class_Label->Size = System::Drawing::Size(82, 20);
			   this->Class_Label->TabIndex = 16;
			   this->Class_Label->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   // 
			   // chart1
			   // 
			   chartArea1->Name = L"ChartArea1";
			   this->chart1->ChartAreas->Add(chartArea1);
			   legend1->Name = L"Legend1";
			   this->chart1->Legends->Add(legend1);
			   this->chart1->Location = System::Drawing::Point(455, 197);
			   this->chart1->Name = L"chart1";
			   series1->ChartArea = L"ChartArea1";
			   series1->Legend = L"Legend1";
			   series1->Name = L"Series1";
			   this->chart1->Series->Add(series1);
			   this->chart1->Size = System::Drawing::Size(507, 242);
			   this->chart1->TabIndex = 17;
			   this->chart1->Text = L"chart1";
			   // 
			   // contextMenuStrip1
			   // 
			   this->contextMenuStrip1->Name = L"contextMenuStrip1";
			   this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->Location = System::Drawing::Point(981, 55);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->Size = System::Drawing::Size(187, 384);
			   this->richTextBox1->TabIndex = 20;
			   this->richTextBox1->Text = L"";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1180, 451);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->chart1);
			   this->Controls->Add(this->Class_Label);
			   this->Controls->Add(this->cycle);
			   this->Controls->Add(this->Error);
			   this->Controls->Add(this->checkBox1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->groupBox1);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Neuron_Size))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Class_Size))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Class_Label))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }


#pragma endregion

	//PENCERE TEMIZLEME ISLEMLERI
	void pictureBoxClean() {


		pictureBox1->CreateGraphics()->Clear(Color::FromArgb(255, 255, 255));
		Pen^ pen = gcnew Pen(Color::FromArgb(255, 255, 255), 3.0f);

		for (int i = 0; i < Total_size; i++) {
			int R = p[i].cl.R;
			int G = p[i].cl.G;
			int B = p[i].cl.B;
			pen->Color = Color::FromArgb(R, G, B);
			double x_eksen = (p[i].x) + (pictureBox1->Width >> 1);
			double y_eksen = (pictureBox1->Height >> 1) - (p[i].y);
			pictureBox1->CreateGraphics()->DrawRectangle(pen, x_eksen, y_eksen, 1, 1);
		}
		System::Drawing::Rectangle r;
		PaintEventArgs^ f = gcnew PaintEventArgs(pictureBox1->CreateGraphics(), r);
		pictureBox1_Paint(this, f);

	}

	void pictureBoxClean_N() {

		pictureBox1->CreateGraphics()->Clear(Color::FromArgb(255, 255, 255));
		Pen^ pen = gcnew Pen(Color::FromArgb(255, 255, 255), 2.0f);

		//Drawing normalization points..
		for (int i = 0; i < Total_size; i++) {
			int R = p[i].cl.R;
			int G = p[i].cl.G;
			int B = p[i].cl.B;
			pen->Color = Color::FromArgb(R, G, B);
			// Points scale for normalization
			double x_eksen = (double)(+(p[i].x) * 20 + (pictureBox1->Width >> 1));
			double y_eksen = (double)(+(pictureBox1->Height >> 1) - (p[i].y) * 20);
			pictureBox1->CreateGraphics()->DrawRectangle(pen, x_eksen, y_eksen, 1, 1);
		}

		System::Drawing::Rectangle r;
		PaintEventArgs^ f = gcnew PaintEventArgs(pictureBox1->CreateGraphics(), r);
		pictureBox1_Paint(this, f);

	}

	//KOORDINAT CIZIMI
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		int center_width, center_height;
		center_width = (int)(pictureBox1->Width / 2);
		center_height = (int)(pictureBox1->Height / 2);
		e->Graphics->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);
	}

	//NOKTA CIZIMLERI
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int class_value = Convert::ToInt32(Class_Size->Value);

		Pen^ pen = gcnew Pen(Color::FromArgb(0, 0, 0), 3.0f);

		for (int j = 1; j <= class_value; j++) {

			if (Class_Label->Value == j) {

				pen->Color = Color::FromArgb(clr_p[j - 1].R, clr_p[j - 1].G, clr_p[j - 1].B);

				double x_eksen, y_eksen;
				int temp_x, temp_y;
				temp_x = (System::Convert::ToInt32(e->X));
				temp_y = (System::Convert::ToInt32(e->Y));
				x_eksen = (double)(temp_x - (pictureBox1->Width >> 1));
				y_eksen = (double)((pictureBox1->Height >> 1) - temp_y);


				//Draw points..
				pictureBox1->CreateGraphics()->DrawRectangle(pen, temp_x, temp_y, 1, 1);

				if (Total_size == 0) {
					Total_size = 1;
					p = new Samples[1];
					p[0].x = x_eksen;  p[0].y = y_eksen;  p[0].id = j; p[0].cl.R = clr_p[j - 1].R;  p[0].cl.G = clr_p[j - 1].G; p[0].cl.B = clr_p[j - 1].B;

				}
				else {
					Samples* temp;
					temp = p;
					Total_size += 1;
					p = new Samples[Total_size];
					//For temp points 
					for (int i = 0; i < Total_size - 1; i++) { //Not only class 1 for all class
						p[i].x = temp[i].x;
						p[i].y = temp[i].y;
						p[i].id = temp[i].id;
						p[i].cl.R = temp[i].cl.R;
						p[i].cl.G = temp[i].cl.G;
						p[i].cl.B = temp[i].cl.B;

					}
					delete temp;
					//New point is loaded.
					p[Total_size - 1].x = x_eksen;
					p[Total_size - 1].y = y_eksen;
					p[Total_size - 1].id = j;
					p[Total_size - 1].cl.R = clr_p[j - 1].R;
					p[Total_size - 1].cl.G = clr_p[j - 1].G;
					p[Total_size - 1].cl.B = clr_p[j - 1].B;

				}

			}



		}


	}

    //RENK ATAMALARI
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		class_numb = Convert::ToInt32(Class_Size->Value);
		neuron_numb = Convert::ToInt32(Neuron_Size->Value);

		clr_p = new Color_[class_numb]; // tum neuronlar icin line
		srand(time(0));
		for (int i = 0; i < class_numb; i++) {  

			clr_p[i].R = rand() % 255;
			clr_p[i].G = rand() % 255;
			clr_p[i].B = rand() % 255;
		}

		clr_n = new Color_[neuron_numb];

		for (int i = 0; i < neuron_numb; i++) { 

			clr_n[i].R = rand() % 255;
			clr_n[i].G = rand() % 255;
			clr_n[i].B = rand() % 255;
		}

	}

    //NORMALIZASYON	    
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!p) {

			MessageBox::Show("Noktalari Seçiniz.");
			checkBox1->Checked = false;
		}
		else {

			BatchNormalization(p, Total_size);
			//Drawing Normalization points
			this->pictureBoxClean_N();


		}
	}

	//ILK AGIRLIK ATAMALARI V -W
	private: System::Void randomToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int boyut = 2, control = 0;
		int class_value = Convert::ToInt32(Class_Size->Value);
		int neuron_value = Convert::ToInt32(Neuron_Size->Value);
		v = new V[neuron_value]; // Struct icin
		//Matris tanimlamalari
		w_m = new double[class_value * (neuron_value + 1)](); // class_value x (neuron_value + 1)
		v_m = new double[neuron_value * (boyut + 1)]();  // neuron_value x 3


		Pen^ pen;

		// V struct dolumu
		for (int i = 0; i < neuron_value; i++) {


			v[i].v1 = ((double)rand() / RAND_MAX); 

			v[i].v2 = ((double)rand() / RAND_MAX); 

			v[i].v3 = ((double)rand() / RAND_MAX);



			// Sizes determined

			int minX = pictureBox1->Width / -2;
			int maxX = pictureBox1->Width / 2;
			int minY = Ypoint(minX, v[i], 1);
			int maxY = Ypoint(maxX, v[i], 1);




			pen = gcnew Pen(Color::FromArgb(clr_n[i].R, clr_n[i].G, clr_n[i].B), 2.0f);
			control++;



			pictureBox1->CreateGraphics()->DrawLine(pen, pictureBox1->Width / 2 + minX, pictureBox1->Height / 2 - minY, pictureBox1->Width / 2 + maxX, pictureBox1->Height / 2 - maxY);



		}



		for (int i = 0; i < neuron_value; i++) {

			
			v_m[i * 3] = v[i].v1;
			v_m[i * 3 + 1] = v[i].v2;
			v_m[i * 3 + 2] = v[i].v3;


		} // V Matris dolumu



		for (int i = 0; i < class_value * (neuron_value + 1); i++) { // W [class x neuron+1] 


			w_m[i] = ((double)rand() / RAND_MAX);


		}//W Matris dolumu



	}


	private: System::Void binaryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		/*
		
	    */	
	}


    //SIGMOID FONK - SUREKLI ALGORITMA (TRAIN)
	private: System::Void continousToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pictureBoxClean_N(); 

		int class_numb = Convert::ToInt32(Class_Size->Value);
		int neuron_numb = Convert::ToInt32(Neuron_Size->Value);

		y = new double[neuron_numb + 1](); // Y [NEURON +1 X 1]
		o = new double[class_numb](); //   O  [CLASS X 1]


		if (v == NULL)
			MessageBox::Show("Once rastgele bir dogru olusturunuz.");

		else {
			double c = 0.7;  // W icin lr
			double c2 = 0.9; // V icin lr

			fnetj = new double[neuron_numb]();
		    fnetk = new double[class_numb]();
			p_m = new double[3]();
			int* d_m = new int[class_numb]();
			double Error = 0.0;



			//--------------------------------------------------------------------PerceptionRule ------------------------------------------------------------------


			int cyclec = 0;
			do {
				cyclec++;
				double sumEr = 0.0;

				for (int j = 0; j < Total_size; j++) { //POINT

					p_m[0] = p[j].x;
					p_m[1] = p[j].y;
					p_m[2] = p[j].bias;

					multiply_matrix(v_m, neuron_numb, 3, p_m, 3, 1, fnetj);


					for (int j = 0; j < neuron_numb; j++) {
						y[j] = SigmoidFunc(fnetj[j]);
					}// y outputs 
					y[neuron_numb] = -1;  // Bias eklentisi 

					multiply_matrix(w_m, class_numb, (neuron_numb + 1), y, (neuron_numb + 1), 1, fnetk); 

					for (int i = 0; i < class_numb; i++) {
						o[i] = SigmoidFunc(fnetk[i]);
					}// O outputs 


					for (int k = 1; k <= class_numb; k++) { // Tum classlar icin o noktanin matrisi

						if (p[j].id == k) {
							d_m[k - 1] = 1;

						}

						else {

							d_m[k - 1] = -1;
						}
					}


					for (int k = 0; k < class_numb; k++) {

						sumEr += pow((d_m[k] - o[k]), 2);
					}

					//-------------------------------------------------------BackForward----------------------------------------------------------------------

					// w update
					double sabit = 0;
					for (int k = 0; k < class_numb; k++) {
						sabit = c * (d_m[k] - o[k]) * derSigmoidFunc(o[k]);
						for (int j = 0; j < (neuron_numb + 1); j++) {

							w_m[k * (neuron_numb + 1) + j] = (sabit * y[j]) + w_m[k * (neuron_numb + 1) + j]; // c.(dk -ok).f'(netk).

						}
					}

					// V update
					double sum = 0.0;
					for (int j = 0; j < neuron_numb; j++) {

						sum = 0.0;
						for (int k = 0; k < class_numb; k++) { // Toplama islemi

							sum += ((d_m[k] - o[k]) * derSigmoidFunc(o[k]) * w_m[k * neuron_numb +j]); // E (dk-ok).f'(netk).Wkj 
						}

						for (int i = 0; i < 3; i++) { // V Güncelleme

							v_m[(j * 3) + i] += c2 * derSigmoidFunc(y[j]) * p_m[i] * sum;

						}
					}


				}
				Error = sqrt(sumEr) / (Total_size * class_numb);
				chart1->Series["Series1"]->Points->AddXY(cyclec, Error);
				this->richTextBox1->AppendText("Loss: " + Convert::ToString(Error) + "\tcycle: " + Convert::ToString(cyclec++) + "\n");
				this->richTextBox1->ScrollToCaret();

			} while (Error > 0.01);




		}
	}

	//TEST
	private: System::Void solutionAreaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		Samples* b = new Samples[pictureBox1->Width * pictureBox1->Height];
		Bitmap^ surface = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		pictureBox1->Image = surface;
	

		for (int i = 0; i < pictureBox1->Width; i++) {
			for (int j = 0; j < pictureBox1->Height; j++) {

				//Pikselleri normalize edilmis uzaya donustur.

				p_m[0] =  ((double)(i - (pictureBox1->Width >> 1) - p[0].ao_x) / p[0].ss_x);
				p_m[1] =  ((double)((pictureBox1->Height >> 1) - j - p[0].ao_y) / p[0].ss_y);
				p_m[2] =  -1;

				multiply_matrix(v_m, neuron_numb, 3, p_m, 3, 1, fnetj);

				for (int j = 0; j < neuron_numb; j++) {
					y[j] = SigmoidFunc(fnetj[j]);
				}// y outputs 
				y[neuron_numb] = -1;  // Bias eklentisi 

				multiply_matrix(w_m, class_numb, (neuron_numb + 1), y, (neuron_numb + 1), 1, fnetk);
				
				
				for (int i = 0; i < class_numb; i++) {
					o[i] = SigmoidFunc(fnetk[i]);
				}// O outputs 


			
				double max_index = o[0];
				int max = 0;
				for (int i = 0; i < class_numb; i++)
				{
					if (o[i] > max_index) {
						max_index = o[i];
						max = i;
					}
				}
				//Sonucun rengini piksele ver.
				surface->SetPixel(i, j, Color::FromArgb( clr_p[max].R, clr_p[max].G, clr_p[max].B)); 
					
			}
		}

	}

	//TEST SONRASI NOKTA ATAMA
	private: System::Void showSamplesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pen^ pen = gcnew Pen(Color::FromArgb(255, 255, 255), 2.0f);
		//Drawing normalization points..
		for (int i = 0; i < Total_size; i++) {
			int R = p[i].cl.R;
			int G = p[i].cl.G;
			int B = p[i].cl.B;
			pen->Color = Color::FromArgb(0, 0, 0);

			// Points scale for normalization
			double x_eksen = (double)(+(p[i].x*p[0].ss_x + p[0].ao_x) + (pictureBox1->Width >> 1));
			double y_eksen = (double)(+(pictureBox1->Height >> 1) - (p[i].y*p[0].ss_y + p[0].ao_y));
			pictureBox1->CreateGraphics()->DrawRectangle(pen, x_eksen, y_eksen, 1, 1);
		}

		System::Drawing::Rectangle r;
		PaintEventArgs^ f = gcnew PaintEventArgs(pictureBox1->CreateGraphics(), r);
		pictureBox1_Paint(this, f);
	}
};
}
