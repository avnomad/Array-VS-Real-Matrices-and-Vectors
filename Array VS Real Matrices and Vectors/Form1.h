#pragma once

double (*sinp)(double) = sin;
double (*cosp)(double) = cos;

double add1(double x)
{
	return 1+x;
}


namespace ArrayVSRealMatricesandVectors {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			execute();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 273);
			this->Name = L"Form1";
			this->Text = L"Form1";

			this->ResumeLayout(false);

		}
#pragma endregion

		void execute()
		{
			unsigned int c;
			ASL::DataStructures::Array<double> A(25000000);
			ASL::DataStructures::Array<double> B;

			A = add1;
			c = clock();
			B = A.mapped(sinp).map(cosp).map(sinp);
			c = clock() - c;
			Form1::Text = L"";
			Form1::Text += c;
			Form1::Text += L" - ";

			ASL::Vector v,u;

			v = ASL::C/1/25000000;
			c = clock();
			u = sin(cos(sin(v)));
			c = clock() - c;
			Form1::Text += c;
		}
	
	};
}

