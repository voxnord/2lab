#pragma once

namespace u2lab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для u	2lab
	/// </summary>
	public ref class u2lab : public System::Windows::Forms::Form
	{
	public:
		u2lab(void)
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
		~u2lab()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ start_btn;
	protected:

	protected:

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ info_btn;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton8;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(u2lab::typeid));
			this->start_btn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->info_btn = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// start_btn
			// 
			this->start_btn->Location = System::Drawing::Point(95, 319);
			this->start_btn->Name = L"start_btn";
			this->start_btn->Size = System::Drawing::Size(108, 36);
			this->start_btn->TabIndex = 0;
			this->start_btn->Text = L"Старт";
			this->start_btn->UseVisualStyleBackColor = true;
			this->start_btn->Click += gcnew System::EventHandler(this, &u2lab::start_btn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton8);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(191, 119);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Варианты массивов";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(6, 85);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(103, 24);
			this->radioButton8->TabIndex = 8;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Массив 3";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(6, 55);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(103, 24);
			this->radioButton7->TabIndex = 7;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Массив 2";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 25);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(103, 24);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Массив 1";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Location = System::Drawing::Point(12, 137);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(191, 176);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Варианты сортировок";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 145);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(100, 24);
			this->radioButton5->TabIndex = 10;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Быстрая";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 25);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(137, 24);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Поразрядная";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 115);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(100, 24);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Шейкера";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 55);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(117, 24);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Вставками";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 85);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(134, 24);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Пузырьковая";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Location = System::Drawing::Point(209, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 429);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Данные";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 319);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Сброс";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// info_btn
			// 
			this->info_btn->Location = System::Drawing::Point(12, 361);
			this->info_btn->Name = L"info_btn";
			this->info_btn->Size = System::Drawing::Size(191, 34);
			this->info_btn->TabIndex = 4;
			this->info_btn->Text = L"Информация";
			this->info_btn->UseVisualStyleBackColor = true;
			this->info_btn->Click += gcnew System::EventHandler(this, &u2lab::info_btn_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 401);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(191, 40);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Проверка на ошибки";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Location = System::Drawing::Point(415, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 429);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Результат";
			// 
			// u2lab
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 458);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->info_btn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->start_btn);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"u2lab";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Lab 2 - Sorting arrays";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void info_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ info_btn =
			"\n"
			"\n"
			"\n";
		MessageBox::Show(info_btn, "Информация о программе", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
};
}
