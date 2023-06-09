#pragma once

namespace DomingoFiltroNAguentoMAAA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormPrincipal
	/// </summary>
	public ref class FormPrincipal : public System::Windows::Forms::Form
	{
	public:
		FormPrincipal(void)
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
		~FormPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btOpen;
	private: System::Windows::Forms::Button^ btExit;

	protected:


	private: System::Windows::Forms::Button^ btFiltro;
	private: System::Windows::Forms::PictureBox^ pBoxEntrada;
	private: System::Windows::Forms::PictureBox^ pBoxSaida;


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
			this->btOpen = (gcnew System::Windows::Forms::Button());
			this->btExit = (gcnew System::Windows::Forms::Button());
			this->btFiltro = (gcnew System::Windows::Forms::Button());
			this->pBoxEntrada = (gcnew System::Windows::Forms::PictureBox());
			this->pBoxSaida = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBoxEntrada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBoxSaida))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(337, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 56);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FILTRO BRILHO";
			// 
			// btOpen
			// 
			this->btOpen->Location = System::Drawing::Point(39, 36);
			this->btOpen->Name = L"btOpen";
			this->btOpen->Size = System::Drawing::Size(104, 63);
			this->btOpen->TabIndex = 1;
			this->btOpen->Text = L"OPEN";
			this->btOpen->UseVisualStyleBackColor = true;
			this->btOpen->Click += gcnew System::EventHandler(this, &FormPrincipal::btOpen_Click);
			// 
			// btExit
			// 
			this->btExit->Location = System::Drawing::Point(39, 114);
			this->btExit->Name = L"btExit";
			this->btExit->Size = System::Drawing::Size(104, 68);
			this->btExit->TabIndex = 2;
			this->btExit->Text = L"Exit";
			this->btExit->UseVisualStyleBackColor = true;
			this->btExit->Click += gcnew System::EventHandler(this, &FormPrincipal::btExit_Click);
			// 
			// btFiltro
			// 
			this->btFiltro->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btFiltro->Location = System::Drawing::Point(309, 188);
			this->btFiltro->Name = L"btFiltro";
			this->btFiltro->Size = System::Drawing::Size(82, 50);
			this->btFiltro->TabIndex = 3;
			this->btFiltro->Text = L"filtro";
			this->btFiltro->UseVisualStyleBackColor = true;
			this->btFiltro->Click += gcnew System::EventHandler(this, &FormPrincipal::btFiltro_Click);
			// 
			// pBoxEntrada
			// 
			this->pBoxEntrada->Location = System::Drawing::Point(12, 348);
			this->pBoxEntrada->Name = L"pBoxEntrada";
			this->pBoxEntrada->Size = System::Drawing::Size(336, 202);
			this->pBoxEntrada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pBoxEntrada->TabIndex = 4;
			this->pBoxEntrada->TabStop = false;
			// 
			// pBoxSaida
			// 
			this->pBoxSaida->Location = System::Drawing::Point(390, 348);
			this->pBoxSaida->Name = L"pBoxSaida";
			this->pBoxSaida->Size = System::Drawing::Size(375, 202);
			this->pBoxSaida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pBoxSaida->TabIndex = 5;
			this->pBoxSaida->TabStop = false;
			// 
			// FormPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(991, 592);
			this->Controls->Add(this->pBoxSaida);
			this->Controls->Add(this->pBoxEntrada);
			this->Controls->Add(this->btFiltro);
			this->Controls->Add(this->btExit);
			this->Controls->Add(this->btOpen);
			this->Controls->Add(this->label1);
			this->Name = L"FormPrincipal";
			this->Text = L"FormPrincipal";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBoxEntrada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBoxSaida))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btFiltro_Click(System::Object^ sender, System::EventArgs^ e) {
		
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
	
		

		pBoxSaida->ImageLocation = "images/output.ppm";

		
		




	}
private: System::Void btOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	//insert here the filter if you want
	//ofd->Filter..
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		//img_input->Image = Image::FromFile(ofd->FileName);
		//System::String^ strFilename = ofd->FileName;

		pBoxEntrada->ImageLocation = ofd->FileName;
	}

}
private: System::Void btExit_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();

}
};
}
