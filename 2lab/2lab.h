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
	private: System::Windows::Forms::GroupBox^ array_groupBox;

	private: System::Windows::Forms::GroupBox^ sorting_groupBox;
	private: System::Windows::Forms::GroupBox^ data_groupBox;
	protected:

	protected:




	private: System::Windows::Forms::Button^ reset_btn;


	private: System::Windows::Forms::Button^ info_btn;
	private: System::Windows::Forms::Button^ err_btn;
	private: System::Windows::Forms::GroupBox^ result_groupBox;
	private: System::Windows::Forms::RadioButton^ RadixSort;
	private: System::Windows::Forms::RadioButton^ InsertionSort;






	private: System::Windows::Forms::RadioButton^ BubbleSort;
	private: System::Windows::Forms::RadioButton^ CocktailSort;



	private: System::Windows::Forms::RadioButton^ QuickSort;

	private: System::Windows::Forms::RadioButton^ arr2;

	private: System::Windows::Forms::RadioButton^ arr1;
	private: System::Windows::Forms::RadioButton^ arr3;





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
			this->start_btn = (gcnew System::Windows::Forms::Button());
			this->array_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->arr3 = (gcnew System::Windows::Forms::RadioButton());
			this->arr2 = (gcnew System::Windows::Forms::RadioButton());
			this->arr1 = (gcnew System::Windows::Forms::RadioButton());
			this->sorting_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->QuickSort = (gcnew System::Windows::Forms::RadioButton());
			this->RadixSort = (gcnew System::Windows::Forms::RadioButton());
			this->CocktailSort = (gcnew System::Windows::Forms::RadioButton());
			this->InsertionSort = (gcnew System::Windows::Forms::RadioButton());
			this->BubbleSort = (gcnew System::Windows::Forms::RadioButton());
			this->data_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->reset_btn = (gcnew System::Windows::Forms::Button());
			this->info_btn = (gcnew System::Windows::Forms::Button());
			this->err_btn = (gcnew System::Windows::Forms::Button());
			this->result_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->array_groupBox->SuspendLayout();
			this->sorting_groupBox->SuspendLayout();
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
			// array_groupBox
			// 
			this->array_groupBox->Controls->Add(this->arr3);
			this->array_groupBox->Controls->Add(this->arr2);
			this->array_groupBox->Controls->Add(this->arr1);
			this->array_groupBox->Location = System::Drawing::Point(12, 12);
			this->array_groupBox->Name = L"array_groupBox";
			this->array_groupBox->Size = System::Drawing::Size(191, 119);
			this->array_groupBox->TabIndex = 2;
			this->array_groupBox->TabStop = false;
			this->array_groupBox->Text = L"Варианты массивов";
			// 
			// arr3
			// 
			this->arr3->AutoSize = true;
			this->arr3->Location = System::Drawing::Point(6, 85);
			this->arr3->Name = L"arr3";
			this->arr3->Size = System::Drawing::Size(103, 24);
			this->arr3->TabIndex = 8;
			this->arr3->TabStop = true;
			this->arr3->Text = L"Массив 3";
			this->arr3->UseVisualStyleBackColor = true;
			// 
			// arr2
			// 
			this->arr2->AutoSize = true;
			this->arr2->Location = System::Drawing::Point(6, 55);
			this->arr2->Name = L"arr2";
			this->arr2->Size = System::Drawing::Size(103, 24);
			this->arr2->TabIndex = 7;
			this->arr2->TabStop = true;
			this->arr2->Text = L"Массив 2";
			this->arr2->UseVisualStyleBackColor = true;
			// 
			// arr1
			// 
			this->arr1->AutoSize = true;
			this->arr1->Location = System::Drawing::Point(6, 25);
			this->arr1->Name = L"arr1";
			this->arr1->Size = System::Drawing::Size(103, 24);
			this->arr1->TabIndex = 6;
			this->arr1->TabStop = true;
			this->arr1->Text = L"Массив 1";
			this->arr1->UseVisualStyleBackColor = true;
			// 
			// sorting_groupBox
			// 
			this->sorting_groupBox->Controls->Add(this->QuickSort);
			this->sorting_groupBox->Controls->Add(this->RadixSort);
			this->sorting_groupBox->Controls->Add(this->CocktailSort);
			this->sorting_groupBox->Controls->Add(this->InsertionSort);
			this->sorting_groupBox->Controls->Add(this->BubbleSort);
			this->sorting_groupBox->Location = System::Drawing::Point(12, 137);
			this->sorting_groupBox->Name = L"sorting_groupBox";
			this->sorting_groupBox->Size = System::Drawing::Size(191, 176);
			this->sorting_groupBox->TabIndex = 0;
			this->sorting_groupBox->TabStop = false;
			this->sorting_groupBox->Text = L"Варианты сортировок";
			// 
			// QuickSort
			// 
			this->QuickSort->AutoSize = true;
			this->QuickSort->Location = System::Drawing::Point(6, 145);
			this->QuickSort->Name = L"QuickSort";
			this->QuickSort->Size = System::Drawing::Size(100, 24);
			this->QuickSort->TabIndex = 10;
			this->QuickSort->Text = L"Быстрая";
			this->QuickSort->UseVisualStyleBackColor = true;
			// 
			// RadixSort
			// 
			this->RadixSort->AutoSize = true;
			this->RadixSort->Location = System::Drawing::Point(6, 25);
			this->RadixSort->Name = L"RadixSort";
			this->RadixSort->Size = System::Drawing::Size(137, 24);
			this->RadixSort->TabIndex = 6;
			this->RadixSort->Text = L"Поразрядная";
			this->RadixSort->UseVisualStyleBackColor = true;
			// 
			// CocktailSort
			// 
			this->CocktailSort->AutoSize = true;
			this->CocktailSort->Location = System::Drawing::Point(6, 115);
			this->CocktailSort->Name = L"CocktailSort";
			this->CocktailSort->Size = System::Drawing::Size(100, 24);
			this->CocktailSort->TabIndex = 9;
			this->CocktailSort->Text = L"Шейкера";
			this->CocktailSort->UseVisualStyleBackColor = true;
			// 
			// InsertionSort
			// 
			this->InsertionSort->AutoSize = true;
			this->InsertionSort->Location = System::Drawing::Point(6, 55);
			this->InsertionSort->Name = L"InsertionSort";
			this->InsertionSort->Size = System::Drawing::Size(117, 24);
			this->InsertionSort->TabIndex = 7;
			this->InsertionSort->Text = L"Вставками";
			this->InsertionSort->UseVisualStyleBackColor = true;
			// 
			// BubbleSort
			// 
			this->BubbleSort->AutoSize = true;
			this->BubbleSort->Location = System::Drawing::Point(6, 85);
			this->BubbleSort->Name = L"BubbleSort";
			this->BubbleSort->Size = System::Drawing::Size(134, 24);
			this->BubbleSort->TabIndex = 8;
			this->BubbleSort->Text = L"Пузырьковая";
			this->BubbleSort->UseVisualStyleBackColor = true;
			// 
			// data_groupBox
			// 
			this->data_groupBox->Location = System::Drawing::Point(209, 12);
			this->data_groupBox->Name = L"data_groupBox";
			this->data_groupBox->Size = System::Drawing::Size(200, 429);
			this->data_groupBox->TabIndex = 0;
			this->data_groupBox->TabStop = false;
			this->data_groupBox->Text = L"Данные";
			// 
			// reset_btn
			// 
			this->reset_btn->Location = System::Drawing::Point(12, 319);
			this->reset_btn->Name = L"reset_btn";
			this->reset_btn->Size = System::Drawing::Size(77, 36);
			this->reset_btn->TabIndex = 3;
			this->reset_btn->Text = L"Сброс";
			this->reset_btn->UseVisualStyleBackColor = true;
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
			// err_btn
			// 
			this->err_btn->Location = System::Drawing::Point(12, 401);
			this->err_btn->Name = L"err_btn";
			this->err_btn->Size = System::Drawing::Size(191, 40);
			this->err_btn->TabIndex = 5;
			this->err_btn->Text = L"Проверка на ошибки";
			this->err_btn->UseVisualStyleBackColor = true;
			// 
			// result_groupBox
			// 
			this->result_groupBox->Location = System::Drawing::Point(415, 12);
			this->result_groupBox->Name = L"result_groupBox";
			this->result_groupBox->Size = System::Drawing::Size(200, 429);
			this->result_groupBox->TabIndex = 0;
			this->result_groupBox->TabStop = false;
			this->result_groupBox->Text = L"Результат";
			// 
			// u2lab
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 458);
			this->Controls->Add(this->result_groupBox);
			this->Controls->Add(this->err_btn);
			this->Controls->Add(this->info_btn);
			this->Controls->Add(this->reset_btn);
			this->Controls->Add(this->sorting_groupBox);
			this->Controls->Add(this->data_groupBox);
			this->Controls->Add(this->array_groupBox);
			this->Controls->Add(this->start_btn);
			this->Name = L"u2lab";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->Text = L"Lab 2 - Sorting arrays";
			this->array_groupBox->ResumeLayout(false);
			this->array_groupBox->PerformLayout();
			this->sorting_groupBox->ResumeLayout(false);
			this->sorting_groupBox->PerformLayout();
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
