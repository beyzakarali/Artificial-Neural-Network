#pragma once
#include <Windows.h>
#include "Classification.h"
#include <time.h> 
#include <math.h>


namespace ProjectANN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// WinForm için özet
	/// </summary>
	public ref class WinForm : public System::Windows::Forms::Form
	{
	public:
		WinForm(void)
		{
			InitializeComponent();
			Total_size = Class1_size = Class2_size = 0; //Baþlangýçta eleman sayýsý 0 dýr.
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~WinForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ processToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ Class1Button;
	private: System::Windows::Forms::CheckBox^ Class2Button;
	private: System::Windows::Forms::Label^ l1;
	private: System::Windows::Forms::Label^ l2;
	private: System::Windows::Forms::Label^ l3;



	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		Samples* p;
		int Total_size, Class1_size, Class2_size;
		W* w;
	private: System::Windows::Forms::Label^ l4;

	private: System::Windows::Forms::ToolStripMenuItem^ rastgeleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ binaryToolStripMenuItem;
	private: System::Windows::Forms::Label^ x_info;
	private: System::Windows::Forms::Label^ y_info;
	private: System::Windows::Forms::Label^ id_info;
	private: System::Windows::Forms::Label^ total_value;
	private: System::Windows::Forms::ToolStripMenuItem^ binaryToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ continousToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^ checkBox1;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Tasarýmcý desteði için gerekli metot - bu metodun 
		   ///içeriðini kod düzenleyici ile deðiþtirmeyin.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->rastgeleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->binaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->binaryToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->continousToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->Class1Button = (gcnew System::Windows::Forms::CheckBox());
			   this->Class2Button = (gcnew System::Windows::Forms::CheckBox());
			   this->l1 = (gcnew System::Windows::Forms::Label());
			   this->l2 = (gcnew System::Windows::Forms::Label());
			   this->l3 = (gcnew System::Windows::Forms::Label());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->l4 = (gcnew System::Windows::Forms::Label());
			   this->x_info = (gcnew System::Windows::Forms::Label());
			   this->y_info = (gcnew System::Windows::Forms::Label());
			   this->id_info = (gcnew System::Windows::Forms::Label());
			   this->total_value = (gcnew System::Windows::Forms::Label());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->menuStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(713, 24);
			   this->menuStrip1->TabIndex = 0;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // processToolStripMenuItem
			   // 
			   this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->rastgeleToolStripMenuItem,
					   this->binaryToolStripMenuItem
			   });
			   this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			   this->processToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			   this->processToolStripMenuItem->Text = L"Process";
			   // 
			   // rastgeleToolStripMenuItem
			   // 
			   this->rastgeleToolStripMenuItem->Name = L"rastgeleToolStripMenuItem";
			   this->rastgeleToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			   this->rastgeleToolStripMenuItem->Text = L"Rastgele";
			   this->rastgeleToolStripMenuItem->Click += gcnew System::EventHandler(this, &WinForm::rastgeleToolStripMenuItem_Click);
			   // 
			   // binaryToolStripMenuItem
			   // 
			   this->binaryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->binaryToolStripMenuItem1,
					   this->continousToolStripMenuItem
			   });
			   this->binaryToolStripMenuItem->Name = L"binaryToolStripMenuItem";
			   this->binaryToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			   this->binaryToolStripMenuItem->Text = L"Training";
			   // 
			   // binaryToolStripMenuItem1
			   // 
			   this->binaryToolStripMenuItem1->Name = L"binaryToolStripMenuItem1";
			   this->binaryToolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			   this->binaryToolStripMenuItem1->Text = L"Binary";
			   this->binaryToolStripMenuItem1->Click += gcnew System::EventHandler(this, &WinForm::binaryToolStripMenuItem1_Click);
			   // 
			   // continousToolStripMenuItem
			   // 
			   this->continousToolStripMenuItem->Name = L"continousToolStripMenuItem";
			   this->continousToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			   this->continousToolStripMenuItem->Text = L"Continous";
			   this->continousToolStripMenuItem->Click += gcnew System::EventHandler(this, &WinForm::continousToolStripMenuItem_Click);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			   this->pictureBox1->Location = System::Drawing::Point(12, 27);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(501, 417);
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WinForm::pictureBox1_Paint);
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &WinForm::pictureBox1_MouseClick);
			   // 
			   // Class1Button
			   // 
			   this->Class1Button->AutoSize = true;
			   this->Class1Button->Location = System::Drawing::Point(551, 39);
			   this->Class1Button->Name = L"Class1Button";
			   this->Class1Button->Size = System::Drawing::Size(57, 17);
			   this->Class1Button->TabIndex = 2;
			   this->Class1Button->Text = L"Class1";
			   this->Class1Button->UseVisualStyleBackColor = true;
			   this->Class1Button->Click += gcnew System::EventHandler(this, &WinForm::Class1Button_Click);
			   // 
			   // Class2Button
			   // 
			   this->Class2Button->AutoSize = true;
			   this->Class2Button->Location = System::Drawing::Point(551, 63);
			   this->Class2Button->Name = L"Class2Button";
			   this->Class2Button->Size = System::Drawing::Size(57, 17);
			   this->Class2Button->TabIndex = 3;
			   this->Class2Button->Text = L"Class2";
			   this->Class2Button->UseVisualStyleBackColor = true;
			   this->Class2Button->Click += gcnew System::EventHandler(this, &WinForm::Class2Button_Click);
			   // 
			   // l1
			   // 
			   this->l1->AutoSize = true;
			   this->l1->Location = System::Drawing::Point(580, 115);
			   this->l1->Name = L"l1";
			   this->l1->Size = System::Drawing::Size(18, 13);
			   this->l1->TabIndex = 4;
			   this->l1->Text = L"x :";
			   // 
			   // l2
			   // 
			   this->l2->AutoSize = true;
			   this->l2->Location = System::Drawing::Point(580, 134);
			   this->l2->Name = L"l2";
			   this->l2->Size = System::Drawing::Size(18, 13);
			   this->l2->TabIndex = 5;
			   this->l2->Text = L"y :";
			   // 
			   // l3
			   // 
			   this->l3->AutoSize = true;
			   this->l3->Location = System::Drawing::Point(577, 160);
			   this->l3->Name = L"l3";
			   this->l3->Size = System::Drawing::Size(21, 13);
			   this->l3->TabIndex = 6;
			   this->l3->Text = L"id :";
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->Location = System::Drawing::Point(532, 264);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->Size = System::Drawing::Size(169, 160);
			   this->richTextBox1->TabIndex = 7;
			   this->richTextBox1->Text = L"";
			   // 
			   // l4
			   // 
			   this->l4->AutoSize = true;
			   this->l4->Location = System::Drawing::Point(555, 184);
			   this->l4->Name = L"l4";
			   this->l4->Size = System::Drawing::Size(44, 13);
			   this->l4->TabIndex = 8;
			   this->l4->Text = L"toplam :";
			   // 
			   // x_info
			   // 
			   this->x_info->AutoSize = true;
			   this->x_info->Location = System::Drawing::Point(605, 115);
			   this->x_info->Name = L"x_info";
			   this->x_info->Size = System::Drawing::Size(0, 13);
			   this->x_info->TabIndex = 9;
			   // 
			   // y_info
			   // 
			   this->y_info->AutoSize = true;
			   this->y_info->Location = System::Drawing::Point(605, 134);
			   this->y_info->Name = L"y_info";
			   this->y_info->Size = System::Drawing::Size(0, 13);
			   this->y_info->TabIndex = 10;
			   // 
			   // id_info
			   // 
			   this->id_info->AutoSize = true;
			   this->id_info->Location = System::Drawing::Point(605, 160);
			   this->id_info->Name = L"id_info";
			   this->id_info->Size = System::Drawing::Size(0, 13);
			   this->id_info->TabIndex = 11;
			   // 
			   // total_value
			   // 
			   this->total_value->AutoSize = true;
			   this->total_value->Location = System::Drawing::Point(608, 184);
			   this->total_value->Name = L"total_value";
			   this->total_value->Size = System::Drawing::Size(0, 13);
			   this->total_value->TabIndex = 12;
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Location = System::Drawing::Point(571, 230);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(92, 17);
			   this->checkBox1->TabIndex = 13;
			   this->checkBox1->Text = L"Normalization ";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &WinForm::checkBox1_CheckedChanged);
			   // 
			   // WinForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(713, 456);
			   this->Controls->Add(this->checkBox1);
			   this->Controls->Add(this->total_value);
			   this->Controls->Add(this->id_info);
			   this->Controls->Add(this->y_info);
			   this->Controls->Add(this->x_info);
			   this->Controls->Add(this->l4);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->l3);
			   this->Controls->Add(this->l2);
			   this->Controls->Add(this->l1);
			   this->Controls->Add(this->Class2Button);
			   this->Controls->Add(this->Class1Button);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"WinForm";
			   this->Text = L"WinForm";
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   //For not click both of them.
	private: System::Void Class1Button_Click(System::Object^ sender, System::EventArgs^ e) {
		Class2Button->Checked = false;
		Class1Button->Checked = true;
	}
	private: System::Void Class2Button_Click(System::Object^ sender, System::EventArgs^ e) {
		Class1Button->Checked = false;
		Class2Button->Checked = true;
	}
	void pictureBoxClean() {

		pictureBox1->CreateGraphics()->Clear(Color::FromArgb(255, 255, 255));
		//Pen^ pen = gcnew Pen(Color::FromArgb(255, 255, 255), 3.0f);

		Pen^ pen = gcnew Pen(Color::White, 2.0f);
		for (int i = 0; i < Total_size; i++) {
			if (p[i].id == -1) 
				pen->Color = Color::DeepSkyBlue ;
			
			else
				pen->Color = Color::RosyBrown ;


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

		Pen^ pen = gcnew Pen(Color::White, 2.0f);
		for (int i = 0; i < Total_size; i++) {
			if (p[i].id == -1)
				pen->Color = Color::DeepSkyBlue;

			else
				pen->Color = Color::RosyBrown;

			// scale normalization points
			int x_eksen = (p[i].x)*20 + (pictureBox1->Width >> 1);
			int y_eksen = (pictureBox1->Height >> 1) - (p[i].y)*20;
			pictureBox1->CreateGraphics()->DrawRectangle(pen, x_eksen, y_eksen, 1, 1);


		}
		System::Drawing::Rectangle r;
		PaintEventArgs^ f = gcnew PaintEventArgs(pictureBox1->CreateGraphics(), r);
		pictureBox1_Paint(this, f);
	}

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		int center_width, center_height;
		center_width = (int)(pictureBox1->Width / 2);
		center_height = (int)(pictureBox1->Height / 2);
		e->Graphics->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);
	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//PictureBox clicked and points  classification 

		if (Class1Button->Checked || Class2Button->Checked) {

			if (Class1Button->Checked) {

				Pen^ pen = gcnew Pen(Color::DeepSkyBlue, 3.0f);
				double x_eksen, y_eksen;
				int temp_x, temp_y;
				temp_x = (System::Convert::ToInt32(e->X));
				temp_y = (System::Convert::ToInt32(e->Y));
				x_eksen = (double)(temp_x - (pictureBox1->Width >> 1)); // pictureBox->Width / 2 
				y_eksen = (double)((pictureBox1->Height >> 1) - temp_y); // pictureBox->Height / 2


				//Draw points..
				pictureBox1->CreateGraphics()->DrawRectangle(pen, temp_x, temp_y, 1, 1);

				if (Total_size == 0) {
					Total_size = Class1_size = 1;
					p = new Samples[1];
					p[0].x = x_eksen;  p[0].y = y_eksen;  p[0].id = CLASS1;
					//p = NormalizationR1(p); // -------------------------------------delta---------------
				}
				else {
					Samples* temp;
					temp = p;
					Class1_size++;
					Total_size = Class1_size + Class2_size;
					p = new Samples[Total_size];
					//For temp points 
					for (int i = 0; i < Total_size - 1; i++) { //Not only class 1 for all class
						p[i].x = temp[i].x;
						p[i].y = temp[i].y;
						p[i].id = temp[i].id;
					}
					delete temp;
					//New point is loaded.
					p[Total_size - 1].x = x_eksen;
					p[Total_size - 1].y = y_eksen;
					p[Total_size - 1].id = CLASS1;
					//p[Total_size - 1] = NormalizationR1(p[Total_size - 1]); // ---------------------delta---------------------------


				}

			}

			if (Class2Button->Checked) {

				Pen^ pen = gcnew Pen(Color::RosyBrown, 3.0f);
				double x_eksen, y_eksen;
				int temp_x, temp_y; // ................................................?
				temp_x = (System::Convert::ToInt32(e->X));
				temp_y = (System::Convert::ToInt32(e->Y));
				x_eksen = (double)(temp_x - (pictureBox1->Width) / 2); // pictureBox->Width >> 1 
				y_eksen = (double)(pictureBox1->Height / 2 - temp_y); // pictureBox->Height >> 1

				//Draw points..
				pictureBox1->CreateGraphics()->DrawRectangle(pen, temp_x, temp_y, 1, 1);


				if (Total_size == 0) {

					Total_size = Class2_size = 1;
					p = new Samples[1];
					p[0].x = x_eksen;  p[0].y = y_eksen;  p[0].id = CLASS2;
					//p = NormalizationR1(p); // ---------------------delta---------------------------
				}
				else {

					Samples* temp;
					temp = p;     // Previously points  assigned to temp
					Class2_size++;
					Total_size = Class1_size + Class2_size;
					p = new Samples[Total_size];
					//For temp points 
					for (int i = 0; i < Total_size - 1; i++) { //Not only class1 for all points 
						p[i].x = temp[i].x;
						p[i].y = temp[i].y;
						p[i].id = temp[i].id;
					}
					delete temp;
					//New points is loaded.
					p[Total_size - 1].x = x_eksen;
					p[Total_size - 1].y = y_eksen;
					p[Total_size - 1].id = CLASS2;
					//p[Total_size - 1] = NormalizationR1(p[Total_size - 1]); // ---------------------delta---------------------------
				}


			}


			//Labels writed.
			x_info->Text = Convert::ToString(p[Total_size - 1].x);
			y_info->Text = Convert::ToString(p[Total_size - 1].y);
			id_info->Text = Convert::ToString(p[Total_size - 1].id);
			total_value->Text = Convert::ToString(Total_size);
		}

		else
			MessageBox::Show("Sýnýf seçiniz.");


	}
	private: System::Void rastgeleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int boyut = 2;
		w = new W[1];
		


		srand(time(0));
		// W load to random data 
		w->w1 = ((double)rand() / RAND_MAX);
		w->w2 = ((double)rand() / RAND_MAX);
        w->w3 = ((double)rand() / RAND_MAX);
       

		// Sizes determined
		int minX = pictureBox1->Width / -2;
		int maxX = pictureBox1->Width / 2;
		int minY = Ypoint(minX, w);
		int maxY = Ypoint(maxX, w);



		Pen^ pen = gcnew Pen(Color::Purple, 2.0f);

		pictureBox1->CreateGraphics()->DrawLine(pen, pictureBox1->Width / 2 + minX, pictureBox1->Height / 2 - minY, pictureBox1->Width / 2 + maxX, pictureBox1->Height / 2 - maxY);
		//pictureBox1->CreateGraphics()->DrawLine(pen, pictureBox1->Width / 2 + 100, pictureBox1->Height / 2 -50 ,pictureBox1->Width / 2 -120, pictureBox1->Height / 2 +80);
		//pictureBox1->CreateGraphics()->DrawLine( pen , 100,50,-120,-80) yukardaki örnek + - olayýný karýþtýrmýþým :( kodd
		richTextBox1->AppendText("\n \nw1 :" + Convert::ToString(w->w1) + " \n \nw2 :" + Convert::ToString(w->w2) + "\n \nw3 :" + Convert::ToString(w->w3));


	}

    private: System::Void binaryToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (w == NULL)
			MessageBox::Show("Önce rastgele bir doðru oluþturunuz.");

		else {
			
			double c = 0.1;

			double fnet1 = 0;
			int wrong = 0;

			//--------------------------------------------------------------------Preception Rule ------------------------------------------------------------------


			do {
				wrong = 0;
				for (int i = 0; i < Total_size; i++) {

					//FNet1 calculation
					fnet1 = TransMul(w, p[i]); // -1 bias güncellemesi yapýldý.
					int val = sgn(fnet1);
					if (p[i].id != val) {
						wrong = 1;
						Samples temp;
						double fac = (c * (p[i].id - val));  // fac -> katsayý
						temp = w_mulCalculation(fac, p[i]);  // c[di - fnet]*x
						w = w_sumCalculation(w, temp); // w[i] + c[di - fnet]*x[i]
					}
					richTextBox1->AppendText("\n\n" + Convert::ToString(i + 1) + "'nci nesil :" + "\n\nw1:" + Convert::ToString(w[i].w1) + " \n \nw2 :" + Convert::ToString(w[i].w2) + "\n \nw3 :" + Convert::ToString(w[i].w3));
				}

			} while (wrong);

			pictureBoxClean();
			Pen^ pen = gcnew Pen(Color::Purple, 2.0f);

			double y1 = ((w->w3 - (w->w1 * (pictureBox1->Width / -2))) / (w->w2));
			double y2 = ((w->w3 - (w->w1 * (pictureBox1->Width / 2))) / (w->w2));

			pictureBox1->CreateGraphics()->DrawLine(pen, 0, pictureBox1->Height / 2 - y1, pictureBox1->Width, pictureBox1->Height / 2 - y2);



		}
    
    
    }

    private: System::Void continousToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (w == NULL)
		MessageBox::Show("Önce rastgele bir doðru oluþturunuz.");

	else {
		pictureBoxClean_N();
		double c = 0.1;
		double fnet1 = 0;
		double Error = 0;
		double derActivationFunc=0;
		double DW_Value = 0;

		//-------------------------------------------------------------------Delta Rule -------------------------------------------------------------------------

		do {
 			Error = 0;
			for (int i = 0; i < Total_size; i++) {

				//FNet1 calculation
				fnet1 = TransMul(w, p[i]); // -1 bias güncellemesi yapýldý.
				double val = SigmoidFunc(fnet1);

				Error += (pow(p[i].id - val, 2)*0.5);

				if (fabs(Error) >= 0.6) {
				    derActivationFunc = derSigmoidFunc(val); 
				    DW_Value = c * (p[i].id - val) *derActivationFunc; // c*(d-fnet)*fnet'*x)				
					
					Samples deger ;

				    deger = w_mulCalculation(DW_Value, p[i]);

					w = w_sumCalculation(w, deger);

				}
				richTextBox1->AppendText("\n\n" + Convert::ToString(i + 1) + "'nci nesil :" + "\n\nw1:" + Convert::ToString(w->w1) + " \n \nw2 :" + Convert::ToString(w->w2) + "\n \nw3 :" + Convert::ToString(w->w3));
			}

		} while (fabs(Error) > 0.6); // hata 0.6 dan buyuk oldugu muddetce devam et

		// Normalize edilmiþ dogrularý ciz.
		

		

		// cizgiyi ciz..
		Pen^ pen = gcnew Pen(Color::Purple, 2.0f);
		double y1 = ((w->w3*20 - (w->w1 * (pictureBox1->Width / -2))) / (w->w2));
		double y2 = ((w->w3*20 - (w->w1 * (pictureBox1->Width / 2))) / (w->w2));

		pictureBox1->CreateGraphics()->DrawLine(pen, 0, pictureBox1->Height / 2 - y1, pictureBox1->Width, pictureBox1->Height / 2 - y2);
	}


}


	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!p) {

			MessageBox::Show("Noktalarý Seçiniz.");  
			checkBox1->Checked = false;
		}
		else {
			
			BatchNormalization(p, Total_size);
			



			x_info->Text = Convert::ToString(p[Total_size - 1].x);
			y_info->Text = Convert::ToString(p[Total_size - 1].y);
			id_info->Text = Convert::ToString(p[Total_size - 1].id);
			total_value->Text = Convert::ToString(Total_size);

			




			

		}
		

	}






};
}
