#pragma once

#include <cstdlib>
#include <ctime>


namespace BitcoinCalculator2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  amountSpending;
	protected:

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  buyingPrice;





	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  buyingFee;


	private: System::Windows::Forms::Label^  amountBought;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;

	protected:










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->amountSpending = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buyingPrice = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buyingFee = (gcnew System::Windows::Forms::TextBox());
			this->amountBought = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.1F));
			this->label1->Location = System::Drawing::Point(25, 9);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BUY";
			// 
			// amountSpending
			// 
			this->amountSpending->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.1F));
			this->amountSpending->Location = System::Drawing::Point(12, 100);
			this->amountSpending->Name = L"amountSpending";
			this->amountSpending->Size = System::Drawing::Size(182, 31);
			this->amountSpending->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.1F));
			this->label2->Location = System::Drawing::Point(12, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Amount Spending";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.1F));
			this->label3->Location = System::Drawing::Point(222, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Buying Price";
			// 
			// buyingPrice
			// 
			this->buyingPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.1F));
			this->buyingPrice->Location = System::Drawing::Point(205, 100);
			this->buyingPrice->Name = L"buyingPrice";
			this->buyingPrice->Size = System::Drawing::Size(150, 31);
			this->buyingPrice->TabIndex = 5;
			this->buyingPrice->TextChanged += gcnew System::EventHandler(this, &MyForm::buyingPrice_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.1F));
			this->label5->Location = System::Drawing::Point(382, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Buying Fee";
			// 
			// buyingFee
			// 
			this->buyingFee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.1F));
			this->buyingFee->Location = System::Drawing::Point(387, 100);
			this->buyingFee->Name = L"buyingFee";
			this->buyingFee->Size = System::Drawing::Size(84, 31);
			this->buyingFee->TabIndex = 7;
			// 
			// amountBought
			// 
			this->amountBought->AutoSize = true;
			this->amountBought->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.1F));
			this->amountBought->Location = System::Drawing::Point(548, 103);
			this->amountBought->Name = L"amountBought";
			this->amountBought->Size = System::Drawing::Size(191, 25);
			this->amountBought->TabIndex = 9;
			this->amountBought->Text = L"the amount bought";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.1F));
			this->label4->Location = System::Drawing::Point(563, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Amount Bought";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.1F));
			this->button1->Location = System::Drawing::Point(283, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 70);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(32, 63);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 512);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->amountBought);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buyingFee);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buyingPrice);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->amountSpending);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.1F));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"Bitcoin Profit/Loss Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void buyingPrice_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
