#pragma once

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmAgregarVehiculo
	/// </summary>
	public ref class frmAgregarVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmAgregarVehiculo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmAgregarVehiculo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::GroupBox^ Propietario;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Propietario = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Propietario->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(239, 288);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Propietario
			// 
			this->Propietario->Controls->Add(this->textBox4);
			this->Propietario->Controls->Add(this->textBox3);
			this->Propietario->Controls->Add(this->textBox2);
			this->Propietario->Controls->Add(this->textBox1);
			this->Propietario->Controls->Add(this->label5);
			this->Propietario->Controls->Add(this->label2);
			this->Propietario->Controls->Add(this->label4);
			this->Propietario->Controls->Add(this->label3);
			this->Propietario->Location = System::Drawing::Point(35, 32);
			this->Propietario->Margin = System::Windows::Forms::Padding(4);
			this->Propietario->Name = L"Propietario";
			this->Propietario->Padding = System::Windows::Forms::Padding(4);
			this->Propietario->Size = System::Drawing::Size(512, 225);
			this->Propietario->TabIndex = 13;
			this->Propietario->TabStop = false;
			this->Propietario->Text = L"Datos del Vehiculo:";
			this->Propietario->Enter += gcnew System::EventHandler(this, &frmAgregarVehiculo::Propietario_Enter);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(167, 177);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(255, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(167, 130);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(255, 24);
			this->textBox3->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(167, 86);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(255, 24);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(167, 37);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 24);
			this->textBox1->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 181);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Peso Bruto:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 41);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Placa: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 134);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Peso Neto:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 90);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo:";
			// 
			// frmAgregarVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 345);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Propietario);
			this->Name = L"frmAgregarVehiculo";
			this->Text = L"Agregar Veh�culo";
			this->Load += gcnew System::EventHandler(this, &frmAgregarVehiculo::frmAgregarVehiculo_Load);
			this->Propietario->ResumeLayout(false);
			this->Propietario->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Propietario_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void frmAgregarVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
