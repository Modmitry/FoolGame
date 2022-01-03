#pragma once

namespace FoolGame {

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
	private: System::Windows::Forms::Button^ play_button;
	private: System::Windows::Forms::PictureBox^ battleground_1;
	private: System::Windows::Forms::PictureBox^ battleground_2;
	private: System::Windows::Forms::PictureBox^ battleground_3;
	private: System::Windows::Forms::PictureBox^ battleground_4;
	private: System::Windows::Forms::PictureBox^ battleground_5;
	private: System::Windows::Forms::PictureBox^ battleground_6;
	private: System::Windows::Forms::PictureBox^ battleground_7;
	private: System::Windows::Forms::PictureBox^ battleground_8;
	private: System::Windows::Forms::PictureBox^ battleground_9;
	private: System::Windows::Forms::PictureBox^ battleground_10;
	private: System::Windows::Forms::PictureBox^ battleground_11;
	private: System::Windows::Forms::PictureBox^ battleground_12;
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
		void InitializeComponent(void);
		
#pragma endregion

	private: System::Void Play_Click(System::Object^ sender, System::EventArgs^ e);
	


	};
}
