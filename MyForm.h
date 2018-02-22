#pragma once
#include <ctime>
#include <iostream>
#include <fstream>



namespace Проект1 { 

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
		
	int chislo;
	int stavka;
	int srand(time(0));
	int rand1;
	int rand2;
	int sum;
	int bank = 100;
	int i = 0;
	
	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;














	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(114, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Бросить кубик";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Придумайте число";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(251, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ставка";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Сумма: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(238, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Очки: 100";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 60);
			this->textBox1->MaxLength = 2;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(224, 60);
			this->textBox2->MaxLength = 3;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 219);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Игра в кости";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		chislo = int::Parse(textBox1->Text);
		stavka = int::Parse(textBox2->Text);
		rand1 = 1 + rand() % 6;
		rand2 = 1 + rand() % 6;
		sum = rand1 + rand2;
		if (textBox1->Text == "\0")
		{
			sum = 12;
		}
		if (chislo < 2)
		{
			MessageBox::Show("Нужно ввести число в диапазоне от 2 до 12!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Clear();
			textBox2->Clear();
			stavka = 0;
			sum = 0;
		}
		else if (chislo > 12)
		{
			MessageBox::Show("Нужно ввести число в диапазоне от 2 до 12!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Clear();
			textBox2->Clear();
			stavka = 0;
			sum = 0;
		}
		else if (stavka < 1)
		{
			MessageBox::Show("Нужно поставить хотя бы 1 очко!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox2->Clear();
			sum = 0;
		}
		if ((chislo > 7) && (sum > 7))
		{
			bank = bank + stavka;
		}
		else if ((chislo < 7) && (sum < 7))
		{
			bank = bank + stavka;
		}
		else if (chislo == sum)
		{
			bank = bank + 4 * stavka;
		}
		else
		{
			bank = bank - stavka;
		}
		if (bank <= 0)
		{
			MessageBox::Show("Вы проиграли!", "Игра в кости", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Application::Exit();
		}
		label3->Text = "Сумма: " + sum.ToString();
		label4->Text = "Очки: " + bank.ToString();
		i++;
		std::ofstream file("1.txt",std::ofstream::app);
		if (!file.is_open())
		{
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		else
		{
			file << "Игра № " << i << "\n" << "Загаданное число: " << chislo << "\t" << "Сумма: " << sum << "\t" << "Ставка: " << stavka << "\t" << "Очки: " << bank << "\n";
		}
		
		file.close();
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}

	

private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
};
}
