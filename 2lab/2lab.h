#pragma once
#include "arrays.h"

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

	private: System::DateTime startTime;
	private: System::DateTime endTime;
	private: System::Windows::Forms::Timer^ timer;

	public:
		u2lab(void)
		{
			InitializeComponent();

			timer = gcnew System::Windows::Forms::Timer();
			timer->Interval = 1000;
			timer->Tick += gcnew System::EventHandler(this, &u2lab::UpdateTimer);
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

	private: array<long>^ arr;

	private: System::Windows::Forms::Button^ start_btn;
	private: System::Windows::Forms::GroupBox^ array_groupBox;
	private: System::Windows::Forms::Label^ TimerL;
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
	private: System::Windows::Forms::Label^ inlabel;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ outlabel;







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->inlabel = (gcnew System::Windows::Forms::Label());
			this->reset_btn = (gcnew System::Windows::Forms::Button());
			this->info_btn = (gcnew System::Windows::Forms::Button());
			this->err_btn = (gcnew System::Windows::Forms::Button());
			this->result_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->outlabel = (gcnew System::Windows::Forms::Label());
			this->TimerL = (gcnew System::Windows::Forms::Label());
			this->array_groupBox->SuspendLayout();
			this->sorting_groupBox->SuspendLayout();
			this->data_groupBox->SuspendLayout();
			this->panel1->SuspendLayout();
			this->result_groupBox->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// start_btn
			// 
			this->start_btn->Location = System::Drawing::Point(63, 207);
			this->start_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->start_btn->Name = L"start_btn";
			this->start_btn->Size = System::Drawing::Size(72, 39);
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
			this->array_groupBox->Location = System::Drawing::Point(8, 8);
			this->array_groupBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->array_groupBox->Name = L"array_groupBox";
			this->array_groupBox->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->array_groupBox->Size = System::Drawing::Size(127, 77);
			this->array_groupBox->TabIndex = 2;
			this->array_groupBox->TabStop = false;
			this->array_groupBox->Text = L"Варианты массивов";
			// 
			// arr3
			// 
			this->arr3->AutoSize = true;
			this->arr3->Location = System::Drawing::Point(4, 55);
			this->arr3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->arr3->Name = L"arr3";
			this->arr3->Size = System::Drawing::Size(73, 17);
			this->arr3->TabIndex = 8;
			this->arr3->TabStop = true;
			this->arr3->Text = L"Массив 3";
			this->arr3->UseVisualStyleBackColor = true;
			this->arr3->CheckedChanged += gcnew System::EventHandler(this, &u2lab::arr3_CheckedChanged);
			// 
			// arr2
			// 
			this->arr2->AutoSize = true;
			this->arr2->Location = System::Drawing::Point(4, 36);
			this->arr2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->arr2->Name = L"arr2";
			this->arr2->Size = System::Drawing::Size(73, 17);
			this->arr2->TabIndex = 7;
			this->arr2->TabStop = true;
			this->arr2->Text = L"Массив 2";
			this->arr2->UseVisualStyleBackColor = true;
			this->arr2->CheckedChanged += gcnew System::EventHandler(this, &u2lab::arr2_CheckedChanged);
			// 
			// arr1
			// 
			this->arr1->AutoSize = true;
			this->arr1->Location = System::Drawing::Point(4, 16);
			this->arr1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->arr1->Name = L"arr1";
			this->arr1->Size = System::Drawing::Size(73, 17);
			this->arr1->TabIndex = 6;
			this->arr1->TabStop = true;
			this->arr1->Text = L"Массив 1";
			this->arr1->UseVisualStyleBackColor = true;
			this->arr1->CheckedChanged += gcnew System::EventHandler(this, &u2lab::arr1_CheckedChanged);
			// 
			// sorting_groupBox
			// 
			this->sorting_groupBox->Controls->Add(this->QuickSort);
			this->sorting_groupBox->Controls->Add(this->RadixSort);
			this->sorting_groupBox->Controls->Add(this->CocktailSort);
			this->sorting_groupBox->Controls->Add(this->InsertionSort);
			this->sorting_groupBox->Controls->Add(this->BubbleSort);
			this->sorting_groupBox->Location = System::Drawing::Point(8, 89);
			this->sorting_groupBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->sorting_groupBox->Name = L"sorting_groupBox";
			this->sorting_groupBox->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->sorting_groupBox->Size = System::Drawing::Size(127, 114);
			this->sorting_groupBox->TabIndex = 0;
			this->sorting_groupBox->TabStop = false;
			this->sorting_groupBox->Text = L"Варианты сортировок";
			// 
			// QuickSort
			// 
			this->QuickSort->AutoSize = true;
			this->QuickSort->Location = System::Drawing::Point(4, 94);
			this->QuickSort->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->QuickSort->Name = L"QuickSort";
			this->QuickSort->Size = System::Drawing::Size(69, 17);
			this->QuickSort->TabIndex = 10;
			this->QuickSort->Text = L"Быстрая";
			this->QuickSort->UseVisualStyleBackColor = true;
			// 
			// RadixSort
			// 
			this->RadixSort->AutoSize = true;
			this->RadixSort->Location = System::Drawing::Point(4, 16);
			this->RadixSort->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RadixSort->Name = L"RadixSort";
			this->RadixSort->Size = System::Drawing::Size(93, 17);
			this->RadixSort->TabIndex = 6;
			this->RadixSort->Text = L"Поразрядная";
			this->RadixSort->UseVisualStyleBackColor = true;
			// 
			// CocktailSort
			// 
			this->CocktailSort->AutoSize = true;
			this->CocktailSort->Location = System::Drawing::Point(4, 75);
			this->CocktailSort->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->CocktailSort->Name = L"CocktailSort";
			this->CocktailSort->Size = System::Drawing::Size(70, 17);
			this->CocktailSort->TabIndex = 9;
			this->CocktailSort->Text = L"Шейкера";
			this->CocktailSort->UseVisualStyleBackColor = true;
			// 
			// InsertionSort
			// 
			this->InsertionSort->AutoSize = true;
			this->InsertionSort->Location = System::Drawing::Point(4, 36);
			this->InsertionSort->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->InsertionSort->Name = L"InsertionSort";
			this->InsertionSort->Size = System::Drawing::Size(81, 17);
			this->InsertionSort->TabIndex = 7;
			this->InsertionSort->Text = L"Вставками";
			this->InsertionSort->UseVisualStyleBackColor = true;
			// 
			// BubbleSort
			// 
			this->BubbleSort->AutoSize = true;
			this->BubbleSort->Location = System::Drawing::Point(4, 55);
			this->BubbleSort->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BubbleSort->Name = L"BubbleSort";
			this->BubbleSort->Size = System::Drawing::Size(94, 17);
			this->BubbleSort->TabIndex = 8;
			this->BubbleSort->Text = L"Пузырьковая";
			this->BubbleSort->UseVisualStyleBackColor = true;
			// 
			// data_groupBox
			// 
			this->data_groupBox->Controls->Add(this->panel1);
			this->data_groupBox->Location = System::Drawing::Point(139, 8);
			this->data_groupBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->data_groupBox->Name = L"data_groupBox";
			this->data_groupBox->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->data_groupBox->Size = System::Drawing::Size(283, 136);
			this->data_groupBox->TabIndex = 0;
			this->data_groupBox->TabStop = false;
			this->data_groupBox->Text = L"Данные";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->inlabel);
			this->panel1->Location = System::Drawing::Point(4, 16);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(275, 116);
			this->panel1->TabIndex = 0;
			// 
			// inlabel
			// 
			this->inlabel->AutoSize = true;
			this->inlabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->inlabel->Location = System::Drawing::Point(2, 3);
			this->inlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->inlabel->Name = L"inlabel";
			this->inlabel->Size = System::Drawing::Size(152, 13);
			this->inlabel->TabIndex = 0;
			this->inlabel->Text = L"Неотсортированный массив";
			// 
			// reset_btn
			// 
			this->reset_btn->Location = System::Drawing::Point(8, 207);
			this->reset_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->reset_btn->Name = L"reset_btn";
			this->reset_btn->Size = System::Drawing::Size(51, 39);
			this->reset_btn->TabIndex = 3;
			this->reset_btn->Text = L"Сброс";
			this->reset_btn->UseVisualStyleBackColor = true;
			this->reset_btn->Click += gcnew System::EventHandler(this, &u2lab::reset_btn_Click);
			// 
			// info_btn
			// 
			this->info_btn->Location = System::Drawing::Point(8, 250);
			this->info_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->info_btn->Name = L"info_btn";
			this->info_btn->Size = System::Drawing::Size(127, 25);
			this->info_btn->TabIndex = 4;
			this->info_btn->Text = L"Информация";
			this->info_btn->UseVisualStyleBackColor = true;
			this->info_btn->Click += gcnew System::EventHandler(this, &u2lab::info_btn_Click);
			// 
			// err_btn
			// 
			this->err_btn->Location = System::Drawing::Point(8, 279);
			this->err_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->err_btn->Name = L"err_btn";
			this->err_btn->Size = System::Drawing::Size(127, 23);
			this->err_btn->TabIndex = 5;
			this->err_btn->Text = L"Проверка на ошибки";
			this->err_btn->UseVisualStyleBackColor = true;
			this->err_btn->Click += gcnew System::EventHandler(this, &u2lab::err_btn_Click);
			// 
			// result_groupBox
			// 
			this->result_groupBox->Controls->Add(this->panel2);
			this->result_groupBox->Location = System::Drawing::Point(141, 150);
			this->result_groupBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->result_groupBox->Name = L"result_groupBox";
			this->result_groupBox->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->result_groupBox->Size = System::Drawing::Size(281, 136);
			this->result_groupBox->TabIndex = 0;
			this->result_groupBox->TabStop = false;
			this->result_groupBox->Text = L"Результат";
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->outlabel);
			this->panel2->Location = System::Drawing::Point(4, 16);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(275, 116);
			this->panel2->TabIndex = 1;
			// 
			// outlabel
			// 
			this->outlabel->AutoSize = true;
			this->outlabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->outlabel->Location = System::Drawing::Point(2, 3);
			this->outlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->outlabel->Name = L"outlabel";
			this->outlabel->Size = System::Drawing::Size(140, 13);
			this->outlabel->TabIndex = 0;
			this->outlabel->Text = L"Отсортированный массив";
			// 
			// TimerL
			// 
			this->TimerL->AutoSize = true;
			this->TimerL->Location = System::Drawing::Point(142, 289);
			this->TimerL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TimerL->Name = L"TimerL";
			this->TimerL->Size = System::Drawing::Size(105, 13);
			this->TimerL->TabIndex = 6;
			this->TimerL->Text = L"Время сортировки:";
			// 
			// u2lab
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 306);
			this->Controls->Add(this->TimerL);
			this->Controls->Add(this->result_groupBox);
			this->Controls->Add(this->err_btn);
			this->Controls->Add(this->info_btn);
			this->Controls->Add(this->reset_btn);
			this->Controls->Add(this->sorting_groupBox);
			this->Controls->Add(this->data_groupBox);
			this->Controls->Add(this->array_groupBox);
			this->Controls->Add(this->start_btn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->Name = L"u2lab";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->Text = L"Lab 2 - Sorting arrays";
			this->array_groupBox->ResumeLayout(false);
			this->array_groupBox->PerformLayout();
			this->sorting_groupBox->ResumeLayout(false);
			this->sorting_groupBox->PerformLayout();
			this->data_groupBox->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->result_groupBox->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void UpdateTimer(Object^ sender, EventArgs^ e)
	{
		TimeSpan elapsedTime = endTime - startTime;
		TimerL->Text = "Время сортировки: " + elapsedTime.ToString("mm\\:ss\\.ff");
	}

		   void ButtonWork(bool on)
		   {
			   this->reset_btn->Enabled = on;
			   this->start_btn->Enabled = on;
			   this->arr1->Enabled = on;
			   this->arr2->Enabled = on;
			   this->arr3->Enabled = on;
			   this->RadixSort->Enabled = on;
			   this->InsertionSort->Enabled = on;
			   this->BubbleSort->Enabled = on;
			   this->CocktailSort->Enabled = on;
			   this->QuickSort->Enabled = on;
			   this->err_btn->Enabled = on;
		   }

	private: void DisplayArray(const std::vector<long> arrayn)
	{
		ButtonWork(false);
		this->inlabel->Text = "";
		this->outlabel->Text = "";

		arr = gcnew array<long>(arrayn.size());
		System::Text::StringBuilder^ StringBuilder = gcnew System::Text::StringBuilder();

		for (int i = 0; i < arrayn.size(); i++) {
			arr[i] = arrayn[i];
			StringBuilder->Append(arrayn[i].ToString() + " ");
			if ((i + 1) % 6 == 0)
			{
				StringBuilder->Append("\n");
			}
		}

		this->inlabel->Text = StringBuilder->ToString();
		ButtonWork(true);
	}

		   // Функция сортировки с выводом результата
	private:void DisplaySorted(array<long>^ arr, Action<array<long>^>^ sort)
	{
		startTime = System::DateTime::Now;
		ButtonWork(false);

		sort(arr);
		this->outlabel->Text = "";

		for (int i = 0; i < arr->Length; ++i)
		{
			this->outlabel->Text += arr[i].ToString() + " ";
			if ((i + 1) % 6 == 0)
			{
				this->outlabel->Text += "\n";
			}
		}

		ButtonWork(true);
		endTime = System::DateTime::Now;
		TimeSpan elapsedTime = endTime - startTime;
		TimerL->Text = "Время сортировки: " + elapsedTime.ToString("mm\\:ss\\.ff");
	}

	private: System::Void info_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ info_btn =
			"Работа с программой\r\n\r\n"
			"1. Выберите один из вариантов массива (после загрузки массива, он появется в окне \"Данные\").\r\n\r\n"
			"2. Выберите один из видов сортировки массива.\r\n\r\n"
			"3. Нажмите на кнопку \"Старт\" и массив начнёт сортировку (после сортировки массив появится в окне \"Результат\")\r\n\r\n"
			"Для повторного использования программы нажмите кнопку \"Сброс\".";
		MessageBox::Show(info_btn, "Информация о программе", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
		   // Массивы //

		   // Варианты //

	private: System::Void arr1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayArray(array1);
	}

	private: System::Void arr2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayArray(array2);
	}

	private: System::Void arr3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayArray(array3);
	}

		   // Сортировки //

		   void ProcRadixSort(array<long>^ arr) // Поразрядная
		   {
			   int n = arr->Length;
			   array<long>^ output = gcnew array<long>(n);
			   long max = arr[0];
			   for (int i = 1; i < n; i++)
			   {
				   if (arr[i] > max)
					   max = arr[i];
			   }
			   for (long exp = 1; max / exp > 0; exp *= 10)
			   {
				   array<int>^ count = gcnew array<int>(10);
				   for (int i = 0; i < 10; i++)
					   count[i] = 0;
				   for (int i = 0; i < n; i++)
					   count[(arr[i] / exp) % 10]++;
				   for (int i = 1; i < 10; i++)
					   count[i] += count[i - 1];
				   for (int i = n - 1; i >= 0; i--)
				   {
					   output[count[(arr[i] / exp) % 10] - 1] = arr[i];
					   count[(arr[i] / exp) % 10]--;
				   }
				   for (int i = 0; i < n; i++)
					   arr[i] = output[i];
			   }
		   }

		   void ProcInsertionSort(array<long>^ arr) // Вставками	
		   {
			   int n = arr->Length;
			   for (int i = 1; i < n; i++)
			   {
				   long key = arr[i];
				   int j = i - 1;
				   while (j >= 0 && arr[j] > key)
				   {
					   arr[j + 1] = arr[j];
					   j--;
				   }
				   arr[j + 1] = key;
			   }
		   }


		   void ProcBubbleSort(array<long>^ arr) // Пузырьковая
		   {
			   int n = arr->Length;
			   for (int i = 0; i < n - 1; i++)
			   {
				   for (int j = 0; j < n - i - 1; j++)
				   {
					   if (arr[j] > arr[j + 1])
					   {
						   long temp = arr[j];
						   arr[j] = arr[j + 1];
						   arr[j + 1] = temp;
					   }
				   }
			   }
		   }

		   // Шейкер
		   void ProcCocktailSort(array<long>^ arr)
		   {
			   int n = arr->Length;
			   int left = 0, right = n - 1;
			   while (left <= right)
			   {
				   for (int i = left; i < right; i++)
				   {
					   if (arr[i] > arr[i + 1])
					   {
						   long temp = arr[i];
						   arr[i] = arr[i + 1];
						   arr[i + 1] = temp;
					   }
				   }
				   right--;
				   for (int i = right; i > left; i--)
				   {
					   if (arr[i] < arr[i - 1])
					   {
						   long temp = arr[i];
						   arr[i] = arr[i - 1];
						   arr[i - 1] = temp;
					   }
				   }
				   left++;	
			   }
		   }

		   // Алгоритм сравнивания разрядов
		   int partition(array<long>^ arr, int low, int high)
		   {
			   long pivot = arr[high];
			   int i = low - 1;
			   for (int j = low; j <= high - 1; j++)
			   {
				   if (arr[j] < pivot)
				   {
					   i++;
					   long temp = arr[i];
					   arr[i] = arr[j];
					   arr[j] = temp;
				   }
			   }
			   long temp = arr[i + 1];
			   arr[i + 1] = arr[high];
			   arr[high] = temp;
			   return i + 1;
		   }

		   // Быстрая
		   void ProcQuickSort(array<long>^ arr, int low, int high)
		   {
			   if (low < high)
			   {
				   int pi = partition(arr, low, high);
				   ProcQuickSort(arr, low, pi - 1);
				   ProcQuickSort(arr, pi + 1, high);
			   }

		   }

		   void ProcQuickSort(array<long>^ arr) 
		   {
			   ProcQuickSort(arr, 0, arr->Length - 1);
		   }

	private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (RadixSort->Checked)
		{
			DisplaySorted(arr, gcnew Action<array<long>^>(this, &u2lab::ProcRadixSort));
		}
		else if (InsertionSort->Checked)
		{
			DisplaySorted(arr, gcnew Action<array<long>^>(this, &u2lab::ProcInsertionSort));
		}
		else if (BubbleSort->Checked)
		{
			DisplaySorted(arr, gcnew Action<array<long>^>(this, &u2lab::ProcBubbleSort));
		}
		else if (CocktailSort->Checked)
		{
			DisplaySorted(arr, gcnew Action<array<long>^>(this, &u2lab::ProcCocktailSort));
		}
		else if (QuickSort->Checked)
		{
			DisplaySorted(arr, gcnew Action<array<long>^>(this, &u2lab::ProcQuickSort));
		}
		else
		{
			MessageBox::Show("Не выбран вариант сортировки!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void reset_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->arr1->Checked = false;
		this->arr2->Checked = false;
		this->arr3->Checked = false;
		this->RadixSort->Checked = false;
		this->InsertionSort->Checked = false;
		this->BubbleSort->Checked = false;
		this->CocktailSort->Checked = false;
		this->QuickSort->Checked = false;
		this->inlabel->Text = "Неотсортированный массив";
		this->outlabel->Text = "Отсортированный массив";
		this->TimerL->Text = "Время сортировки:";
		timer->Stop();
	}

	private: System::Void err_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		bool result = T1() + T2() + T3() + T4() + T5();
		if (result = true)
		{
			MessageBox::Show("Все тесты пройдены!", "Успех!", MessageBoxButtons::OK, MessageBoxIcon::None);
		}
		else
		{
			MessageBox::Show("Тестирование провалено!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	// Тестирование //


	bool T1()
	{
		array<long>^ arrayTest = gcnew array<long> {14, 4, 23, 6, 34, 1};
		array<long>^ result = gcnew array<long> {6, 5, 4, 3, 2, 1};
		bool equal = true;

		ProcRadixSort(arrayTest);

		for (int i = 0; i < arrayTest->Length; ++i)
		{
			if (arrayTest[i] != result[i])
			{
				equal = false;
				break;
			}
		}

		if (equal)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool T2()
	{
		array<long>^ arrayTest = gcnew array<long> {14, 4, 23, 6, 34, 1};
		array<long>^ result = gcnew array<long> {6, 5, 4, 3, 2, 1};
		bool equal = true;

		ProcInsertionSort(arrayTest);

		for (int i = 0; i < arrayTest->Length; ++i)
		{
			if (arrayTest[i] != result[i])
			{
				equal = false;
				break;
			}
		}

		if (equal)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool T3()
	{
		array<long>^ arrayTest = gcnew array<long> {14, 4, 23, 6, 34, 1};
		array<long>^ result = gcnew array<long> {6, 5, 4, 3, 2, 1};
		bool equal = true;

		ProcBubbleSort(arrayTest);

		for (int i = 0; i < arrayTest->Length; ++i)
		{
			if (arrayTest[i] != result[i])
			{
				equal = false;
				break;
			}
		}

		if (equal)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool T4()
	{
		array<long>^ arrayTest = gcnew array<long> {14, 4, 23, 6, 34, 1};
		array<long>^ result = gcnew array<long> {6, 5, 4, 3, 2, 1};
		bool equal = true;

		ProcCocktailSort(arrayTest);

		for (int i = 0; i < arrayTest->Length; ++i)
		{
			if (arrayTest[i] != result[i])
			{
				equal = false;
				break;
			}
		}

		if (equal)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool T5()
	{
		array<long>^ arrayTest = gcnew array<long> {14, 4, 23, 6, 34, 1};
		array<long>^ result = gcnew array<long> {6, 5, 4, 3, 2, 1};
		bool equal = true;

		ProcQuickSort(arrayTest);

		for (int i = 0; i < arrayTest->Length; ++i)
		{
			if (arrayTest[i] != result[i])
			{
				equal = false;
				break;
			}
		}

		if (equal)
		{
			return false;
		}
		else
		{
			return true;
		}
	}


	
};
}
