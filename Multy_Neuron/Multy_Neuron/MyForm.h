#pragma once

#include <Windows.h>
#include "Classification.h"
#include <time.h> 
#include <math.h>


namespace MultyNeuron {

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
			//TODO: Oluşturucu kodunu buraya ekle
			//
			Total_size = 0; //Başlangıçta eleman sayısı 0 dır.
		}

	protected:
		/// <summary>
		///Kullanılan tüm kaynakları temizleyin.
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
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ CycleCount;

	private:
		Samples* p;
		int Total_size = 0;
		W* w;
		Color_* clr;
		

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ x_info;
	private: System::Windows::Forms::Label^ y_info;
	private: System::Windows::Forms::Label^ id_info;
	private: System::Windows::Forms::Label^ total_value;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ rastgeleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ discreteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ discreteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ countinousToolStripMenuItem1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ rastgeleToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ rastgeleToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ trainToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ discreteToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ countinousToolStripMenuItem;
	private: System::Windows::Forms::Label^ cycle_info;
	private: System::ComponentModel::IContainer^ components;

		 /// <summary>
		///Gerekli tasarımcı değişkeni.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarımcı desteği için gerekli metot - bu metodun 
		///içeriğini kod düzenleyici ile değiştirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CycleCount = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->x_info = (gcnew System::Windows::Forms::Label());
			this->y_info = (gcnew System::Windows::Forms::Label());
			this->id_info = (gcnew System::Windows::Forms::Label());
			this->total_value = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->rastgeleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->discreteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->discreteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->countinousToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->rastgeleToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rastgeleToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trainToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->discreteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->countinousToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cycle_info = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->Location = System::Drawing::Point(1, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(443, 390);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(571, 41);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(81, 20);
			this->numericUpDown1->TabIndex = 1;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(571, 78);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(81, 20);
			this->numericUpDown2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(494, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Sınıf sayısı :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(494, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Seçilen Sınıf :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(674, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 25);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Onayla";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(500, 157);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(89, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Normalization";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Click += gcnew System::EventHandler(this, &MyForm::checkBox1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(666, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Sınıf Sayısı:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(736, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(666, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Cycle sayısı:";
			// 
			// CycleCount
			// 
			this->CycleCount->AutoSize = true;
			this->CycleCount->Location = System::Drawing::Point(736, 157);
			this->CycleCount->Name = L"CycleCount";
			this->CycleCount->Size = System::Drawing::Size(0, 13);
			this->CycleCount->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(635, 205);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"X:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(635, 228);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Y:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(631, 256);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"ID:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(595, 281);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Total Size:";
			// 
			// x_info
			// 
			this->x_info->AutoSize = true;
			this->x_info->Location = System::Drawing::Point(666, 205);
			this->x_info->Name = L"x_info";
			this->x_info->Size = System::Drawing::Size(0, 13);
			this->x_info->TabIndex = 15;
			// 
			// y_info
			// 
			this->y_info->AutoSize = true;
			this->y_info->Location = System::Drawing::Point(666, 228);
			this->y_info->Name = L"y_info";
			this->y_info->Size = System::Drawing::Size(0, 13);
			this->y_info->TabIndex = 16;
			// 
			// id_info
			// 
			this->id_info->AutoSize = true;
			this->id_info->Location = System::Drawing::Point(666, 256);
			this->id_info->Name = L"id_info";
			this->id_info->Size = System::Drawing::Size(0, 13);
			this->id_info->TabIndex = 17;
			// 
			// total_value
			// 
			this->total_value->AutoSize = true;
			this->total_value->Location = System::Drawing::Point(666, 281);
			this->total_value->Name = L"total_value";
			this->total_value->Size = System::Drawing::Size(0, 13);
			this->total_value->TabIndex = 18;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->rastgeleToolStripMenuItem,
					this->discreteToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(119, 48);
			// 
			// rastgeleToolStripMenuItem
			// 
			this->rastgeleToolStripMenuItem->Name = L"rastgeleToolStripMenuItem";
			this->rastgeleToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->rastgeleToolStripMenuItem->Text = L"Rastgele";
			// 
			// discreteToolStripMenuItem
			// 
			this->discreteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->discreteToolStripMenuItem1,
					this->countinousToolStripMenuItem1
			});
			this->discreteToolStripMenuItem->Name = L"discreteToolStripMenuItem";
			this->discreteToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->discreteToolStripMenuItem->Text = L"Train";
			// 
			// discreteToolStripMenuItem1
			// 
			this->discreteToolStripMenuItem1->Name = L"discreteToolStripMenuItem1";
			this->discreteToolStripMenuItem1->Size = System::Drawing::Size(136, 22);
			this->discreteToolStripMenuItem1->Text = L"Discrete";
			// 
			// countinousToolStripMenuItem1
			// 
			this->countinousToolStripMenuItem1->Name = L"countinousToolStripMenuItem1";
			this->countinousToolStripMenuItem1->Size = System::Drawing::Size(136, 22);
			this->countinousToolStripMenuItem1->Text = L"Countinous";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->rastgeleToolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// rastgeleToolStripMenuItem1
			// 
			this->rastgeleToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->rastgeleToolStripMenuItem2,
					this->trainToolStripMenuItem
			});
			this->rastgeleToolStripMenuItem1->Name = L"rastgeleToolStripMenuItem1";
			this->rastgeleToolStripMenuItem1->Size = System::Drawing::Size(77, 20);
			this->rastgeleToolStripMenuItem1->Text = L"MultyClass";
			// 
			// rastgeleToolStripMenuItem2
			// 
			this->rastgeleToolStripMenuItem2->Name = L"rastgeleToolStripMenuItem2";
			this->rastgeleToolStripMenuItem2->Size = System::Drawing::Size(118, 22);
			this->rastgeleToolStripMenuItem2->Text = L"Rastgele";
			this->rastgeleToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::rastgeleToolStripMenuItem2_Click);
			// 
			// trainToolStripMenuItem
			// 
			this->trainToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->discreteToolStripMenuItem2,
					this->countinousToolStripMenuItem
			});
			this->trainToolStripMenuItem->Name = L"trainToolStripMenuItem";
			this->trainToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->trainToolStripMenuItem->Text = L"Train";
			// 
			// discreteToolStripMenuItem2
			// 
			this->discreteToolStripMenuItem2->Name = L"discreteToolStripMenuItem2";
			this->discreteToolStripMenuItem2->Size = System::Drawing::Size(136, 22);
			this->discreteToolStripMenuItem2->Text = L"Discrete";
			this->discreteToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::discreteToolStripMenuItem2_Click);
			// 
			// countinousToolStripMenuItem
			// 
			this->countinousToolStripMenuItem->Name = L"countinousToolStripMenuItem";
			this->countinousToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->countinousToolStripMenuItem->Text = L"Countinous";
			this->countinousToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::countinousToolStripMenuItem_Click);
			// 
			// cycle_info
			// 
			this->cycle_info->AutoSize = true;
			this->cycle_info->Location = System::Drawing::Point(739, 135);
			this->cycle_info->Name = L"cycle_info";
			this->cycle_info->Size = System::Drawing::Size(0, 13);
			this->cycle_info->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 438);
			this->Controls->Add(this->cycle_info);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->total_value);
			this->Controls->Add(this->id_info);
			this->Controls->Add(this->y_info);
			this->Controls->Add(this->x_info);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->CycleCount);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->pictureBox1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



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
		int class_value = Convert::ToInt32(numericUpDown1->Value);

		Pen^ pen = gcnew Pen(Color::FromArgb(0, 0, 0), 3.0f);
		for (int j = 1; j <= class_value ; j++) {

			if (numericUpDown2->Value == j) {

				pen->Color = Color::FromArgb(clr[j-1].R, clr[j-1].G, clr[j-1].B);
				
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
					p[0].x = x_eksen;  p[0].y = y_eksen;  p[0].id = j; p[0].cl.R = clr[j-1].R;  p[0].cl.G = clr[j-1].G; p[0].cl.B = clr[j-1].B;
					
				}
				else {
					Samples* temp;
					temp = p;
					Total_size+=1;
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
					p[Total_size - 1].cl.R = clr[j-1].R;
					p[Total_size - 1].cl.G = clr[j-1].G;
					p[Total_size - 1].cl.B = clr[j-1].B;


				}
				x_info->Text = Convert::ToString(p[Total_size - 1].x);
				y_info->Text = Convert::ToString(p[Total_size - 1].y);
				id_info->Text = Convert::ToString(p[Total_size - 1].id);
				total_value->Text = Convert::ToString(Total_size);

			}

			

		}

		
		

	}			

	//RENK ATAMALARI
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	    int  class_numb = Convert::ToInt32(numericUpDown1->Value);
		label4->Text = Convert::ToString(numericUpDown1->Value);
		clr = new Color_[class_numb];
		//srand(time(0));
		for (int i = 0; i < class_numb; i++) { 
			
			clr[i].R = rand() % 255;
			clr[i].G = rand() % 255;
			clr[i].B = rand() % 255;
		}
	

	}
    
	//PENCERE TEMIZLEME ISLEMLERI
	void pictureBoxClean() {

		pictureBox1->CreateGraphics()->Clear(Color::FromArgb(255, 255, 255));		
		Pen^ pen = gcnew Pen(Color::FromArgb(255, 255, 255),3.0f);

		for (int i = 0; i < Total_size; i++) {
			int R = p[i].cl.R;
			int G = p[i].cl.G;
            int B = p[i].cl.B;
			pen->Color = Color::FromArgb(R, G, B);
			int x_eksen = (p[i].x) + (pictureBox1->Width >> 1);
			int y_eksen = (pictureBox1->Height >> 1) - (p[i].y);
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
			double x_eksen = (double)(+(p[i].x)*20 + (pictureBox1->Width >> 1));
			double y_eksen = (double)(+(pictureBox1->Height >> 1) - (p[i].y)*20);
			pictureBox1->CreateGraphics()->DrawRectangle(pen, x_eksen, y_eksen, 1, 1);
		}

		System::Drawing::Rectangle r;
		PaintEventArgs^ f = gcnew PaintEventArgs(pictureBox1->CreateGraphics(), r);
		pictureBox1_Paint(this, f);

	}

	//ILK DOGRU CIZIMI - AGIRLIK ATAMALARI
	private: System::Void rastgeleToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
			int boyut = 2;
			int class_value = Convert::ToInt32(numericUpDown1->Value);
			w = new W[class_value];

			for (int i = 0; i < class_value; i++) {
				//srand(time(0));
				// W load to random data 
				w[i].w1 = ((double)rand() / RAND_MAX);
				w[i].w2 = ((double)rand() / RAND_MAX);
				w[i].w3 = ((double)rand() / RAND_MAX);


				// Sizes determined
				int minX = pictureBox1->Width / -2;
				int maxX = pictureBox1->Width / 2;
				int minY = Ypoint(minX, w[i], 1);
				int maxY = Ypoint(maxX, w[i], 1);




				Pen^ pen = gcnew Pen(Color::FromArgb(clr[i].R, clr[i].G, clr[i].B),2.0f);

				pictureBox1->CreateGraphics()->DrawLine(pen, pictureBox1->Width / 2 + minX, pictureBox1->Height / 2 - minY, pictureBox1->Width / 2 + maxX, pictureBox1->Height / 2 - maxY);
			
			
			}

			

	}
   
    //SIGN FONK - AYRIK ALGORITMA
	private: System::Void discreteToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->pictureBoxClean();
		
		int class_value = Convert::ToInt32(numericUpDown1->Value);

		if (w == NULL)
			MessageBox::Show("Önce rastgele bir doğru oluşturunuz.");

		else {
			double c = 0.1;

			double fnet1 = 0;
			int wrong = 0 , total_cycle=0 ;
			

			//--------------------------------------------------------------------Preception Rule ------------------------------------------------------------------

			for (int i = 1; i <= class_value; i++) { 
				do {
					wrong = 0;

					for (int j = 0; j < Total_size; j++) {

						fnet1 = TransMul(w[i-1], p[j]); // -1 bias güncellemesi yapıldı.
						int o = sgn(fnet1);

						if (p[j].id == i)
							p[j].temp_id = 1;
						else
							p[j].temp_id = -1;


						if (p[j].temp_id != o) {
							wrong = 1;
							Samples temp;
							double fac = (c * (p[j].temp_id - o));  // fac -> katsayı
							temp = w_mulCalculation(fac, p[j]);  // c[di - fnet]*x
							w[i-1] = w_sumCalculation(w[i-1], temp); // w[i] + c[di - fnet]*x[i]
						}

					}

					total_cycle++;

				} while (wrong);


				
				Pen^ pen = gcnew Pen(Color::FromArgb(255, clr[i-1].R, clr[i-1].G, clr[i-1].B), 2.0f);

				double y1 = ((w[i-1].w3 - (w[i-1].w1 * (pictureBox1->Width / -2))) / (w[i-1].w2));
				double y2 = ((w[i-1].w3 - (w[i-1].w1 * (pictureBox1->Width / 2))) / (w[i-1].w2));

				pictureBox1->CreateGraphics()->DrawLine(pen, 0, pictureBox1->Height / 2 - y1, pictureBox1->Width, pictureBox1->Height / 2 - y2);
			}

			cycle_info->Text = Convert::ToString(total_cycle);
		}


	}

	//SIGMOID FONK - SUREKLI ALGORIMA - (DELTA RULE)
	private: System::Void countinousToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (w == NULL)
			MessageBox::Show("Once rastgele bir dogru olusturunuz.");

		else {

			int class_value = Convert::ToInt32(numericUpDown1->Value);
			double c = 0.1;
			double fnet1 = 0;
			double Error = 0;
			double derActivationFunc = 0;
			double DW_Value = 0;

			int total_cycle =0;
			 
			//-------------------------------------------------------------------Delta Rule -------------------------------------------------------------------------
			pictureBoxClean_N();
			for (int j = 1; j <= class_value; j++) {
				do {
					Error = 0;

					for (int i = 0; i < Total_size; i++) {

						//FNet1 calculation
						fnet1 = TransMul(w[j-1], p[i]); // -1 bias güncellemesi yapildi.
						double val = SigmoidFunc(fnet1);

						if (p[i].id == j)
							p[i].temp_id = 1;
						else
							p[i].temp_id = -1;

						Error += (pow(p[i].temp_id - val, 2) * 0.5);

						

						if (fabs(Error) >= 0.1) {

							derActivationFunc = derSigmoidFunc(val);
							DW_Value = c * (p[i].temp_id - val) * derActivationFunc; // c*(d-fnet)*fnet'*x)


							Samples deger;

							deger = w_mulCalculation(DW_Value, p[i]);

							w[j - 1] = w_sumCalculation(w[j - 1], deger);

						}
						
					}

					total_cycle++;
					

				} while (fabs(Error) > 0.1); 



				Pen^ pen = gcnew Pen(Color::FromArgb( clr[j - 1].R, clr[j - 1].G, clr[j - 1].B), 2.0f);

				// lines scale for scale points (normalization problem solved) 
				double y1 = ((w[j-1].w3 * 20 - (w[j-1].w1 * (pictureBox1->Width / -2))) / (w[j-1].w2));
				double y2 = ((w[j-1].w3 * 20 - (w[j-1].w1 * (pictureBox1->Width / 2))) / (w[j-1].w2));

				pictureBox1->CreateGraphics()->DrawLine(pen, 0, pictureBox1->Height / 2 - y1, pictureBox1->Width, pictureBox1->Height / 2 - y2);
				
			}
			
			
			cycle_info->Text = Convert::ToString(total_cycle);


			

			
		}


	
	}

    //NORMALIZASYON 
	private: System::Void checkBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!p) {

			MessageBox::Show("Noktalari Seçiniz.");
			checkBox1->Checked = false;
		}
		else {

			BatchNormalization(p, Total_size);
			//Drawing Normalization points
			this->pictureBoxClean_N();
              

			x_info->Text = Convert::ToString(p[Total_size - 1].x);
			y_info->Text = Convert::ToString(p[Total_size - 1].y);
			id_info->Text = Convert::ToString(p[Total_size - 1].id);
			total_value->Text = Convert::ToString(Total_size);

		}

	}


};
}
