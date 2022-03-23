#pragma once

namespace weather {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Text::RegularExpressions; // Для регулярных выражений
	using namespace System::Net;

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// comboBox1
			// 
			resources->ApplyResources(this->comboBox1, L"comboBox1");
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				resources->GetString(L"comboBox1.Items"), resources->GetString(L"comboBox1.Items1"),
					resources->GetString(L"comboBox1.Items2"), resources->GetString(L"comboBox1.Items3")
			});
			this->comboBox1->Name = L"comboBox1";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ line;
		WebClient^ wb = gcnew WebClient();
		if (comboBox1->Text == "Набережные Челны") {
			line = wb->DownloadString("https://yandex.ru/pogoda/naberezhnie-chelny?via=reg");
		} 
		else if (comboBox1->Text == "Казань") {
			line = wb->DownloadString("https://yandex.ru/pogoda/kazan?via=reg");
		}
		else if (comboBox1->Text == "Москва") {
			line = wb->DownloadString("https://yandex.ru/pogoda/moscow?via=reg");
		}
		else if (comboBox1->Text == "Гай") {
			line = wb->DownloadString("https://yandex.ru/pogoda/11087?via=srp");
		}
		 // скачиваем страницу с сайта
		Regex^ temperature_value = gcnew Regex("</span><span class=\"temp__value temp__value_with-unit\">(.*?)</span>"); // Регулярное выражение, поиск значения температуры
		Match^ match_temperature = temperature_value->Match(line); // Ищем совпадения по шаблону и записываем в группу температура
		label2->Text = (match_temperature->Groups[1]->Value) + " °C";

		Regex^ wind_value = gcnew Regex("</i><span class=\"wind-speed\">(.*?)</span> <span class=\"fact__unit\">(.*?), <abbr class=\" icon-abbr\" title=\"(.*?)\" aria-label");  //Регулярное выражение, поиск скорости ветра
		Match^ match_wind = wind_value->Match(line);
		label5->Text = match_wind->Groups[1]->Value + " м/с";

		Regex^ humidity_value = gcnew Regex("fact__humidity\"><div class=\"term__label\"></div><div class=\"term__value\" aria-label=\"(.*?): (.*?)\"");  //Регулярное выражение, поиск значений влажности
		Match^ match_humidity = humidity_value->Match(line);
		label3->Text = match_humidity->Groups[2]->Value;


	}
};
}
