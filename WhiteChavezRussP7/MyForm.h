#pragma once

namespace WhiteChavezRussP7 {

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
	private: System::Windows::Forms::Label^ lblHeader;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lblPlayersHand;
	private: System::Windows::Forms::Label^ lblDealersHand;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnBet;

	private: System::Windows::Forms::Button^ btnPlayAgain;
	private: System::Windows::Forms::TextBox^ txbBet;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txbPlayersHand;
	private: System::Windows::Forms::TextBox^ txbDealersHand;
	private: System::Windows::Forms::TextBox^ txbGameStatus;



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
			this->lblHeader = (gcnew System::Windows::Forms::Label());
			this->lblPlayersHand = (gcnew System::Windows::Forms::Label());
			this->lblDealersHand = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnBet = (gcnew System::Windows::Forms::Button());
			this->btnPlayAgain = (gcnew System::Windows::Forms::Button());
			this->txbBet = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txbPlayersHand = (gcnew System::Windows::Forms::TextBox());
			this->txbDealersHand = (gcnew System::Windows::Forms::TextBox());
			this->txbGameStatus = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblHeader
			// 
			this->lblHeader->AutoSize = true;
			this->lblHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHeader->Location = System::Drawing::Point(372, 53);
			this->lblHeader->Name = L"lblHeader";
			this->lblHeader->Size = System::Drawing::Size(488, 37);
			this->lblHeader->TabIndex = 0;
			this->lblHeader->Text = L"Welcome to the Black Jack table.";
			// 
			// lblPlayersHand
			// 
			this->lblPlayersHand->AutoSize = true;
			this->lblPlayersHand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayersHand->Location = System::Drawing::Point(115, 271);
			this->lblPlayersHand->Name = L"lblPlayersHand";
			this->lblPlayersHand->Size = System::Drawing::Size(151, 25);
			this->lblPlayersHand->TabIndex = 1;
			this->lblPlayersHand->Text = L"Player\'s  Hand";
			// 
			// lblDealersHand
			// 
			this->lblDealersHand->AutoSize = true;
			this->lblDealersHand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDealersHand->Location = System::Drawing::Point(115, 479);
			this->lblDealersHand->Name = L"lblDealersHand";
			this->lblDealersHand->Size = System::Drawing::Size(143, 25);
			this->lblDealersHand->TabIndex = 2;
			this->lblDealersHand->Text = L"Dealers Hand";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(844, 479);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Game Status";
			// 
			// btnBet
			// 
			this->btnBet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBet->Location = System::Drawing::Point(730, 201);
			this->btnBet->Name = L"btnBet";
			this->btnBet->Size = System::Drawing::Size(99, 35);
			this->btnBet->TabIndex = 4;
			this->btnBet->Text = L"Bet";
			this->btnBet->UseVisualStyleBackColor = true;
			// 
			// btnPlayAgain
			// 
			this->btnPlayAgain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlayAgain->Location = System::Drawing::Point(849, 342);
			this->btnPlayAgain->Name = L"btnPlayAgain";
			this->btnPlayAgain->Size = System::Drawing::Size(131, 44);
			this->btnPlayAgain->TabIndex = 5;
			this->btnPlayAgain->Text = L"Play Again";
			this->btnPlayAgain->UseVisualStyleBackColor = true;
			// 
			// txbBet
			// 
			this->txbBet->Location = System::Drawing::Point(579, 210);
			this->txbBet->Multiline = true;
			this->txbBet->Name = L"txbBet";
			this->txbBet->Size = System::Drawing::Size(145, 21);
			this->txbBet->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(283, 206);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Enter your bet and click \"Bet\"";
			// 
			// txbPlayersHand
			// 
			this->txbPlayersHand->Location = System::Drawing::Point(120, 299);
			this->txbPlayersHand->Multiline = true;
			this->txbPlayersHand->Name = L"txbPlayersHand";
			this->txbPlayersHand->ReadOnly = true;
			this->txbPlayersHand->Size = System::Drawing::Size(136, 132);
			this->txbPlayersHand->TabIndex = 8;
			// 
			// txbDealersHand
			// 
			this->txbDealersHand->Location = System::Drawing::Point(120, 507);
			this->txbDealersHand->Multiline = true;
			this->txbDealersHand->Name = L"txbDealersHand";
			this->txbDealersHand->ReadOnly = true;
			this->txbDealersHand->Size = System::Drawing::Size(136, 132);
			this->txbDealersHand->TabIndex = 9;
			// 
			// txbGameStatus
			// 
			this->txbGameStatus->Location = System::Drawing::Point(824, 507);
			this->txbGameStatus->Multiline = true;
			this->txbGameStatus->Name = L"txbGameStatus";
			this->txbGameStatus->ReadOnly = true;
			this->txbGameStatus->Size = System::Drawing::Size(187, 150);
			this->txbGameStatus->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1423, 739);
			this->Controls->Add(this->txbGameStatus);
			this->Controls->Add(this->txbDealersHand);
			this->Controls->Add(this->txbPlayersHand);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txbBet);
			this->Controls->Add(this->btnPlayAgain);
			this->Controls->Add(this->btnBet);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblDealersHand);
			this->Controls->Add(this->lblPlayersHand);
			this->Controls->Add(this->lblHeader);
			this->Name = L"MyForm";
			this->Text = L"WhiteChavezRuss Black  Jack Game";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
