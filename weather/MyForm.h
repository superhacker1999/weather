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
	private: System::Windows::Forms::Label^ label10;
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
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label1->Location = System::Drawing::Point(12, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите город:";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Linen;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Набережные Челны", L"Казань", L"Москва", L"Гай",
					L"Екатеринбург", L"Регенсбург"
			});
			this->comboBox1->Location = System::Drawing::Point(196, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(208, 32);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Набережные Челны";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Linen;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(410, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Подтвердить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label2->Location = System::Drawing::Point(192, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(307, 45);
			this->label2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label3->Location = System::Drawing::Point(192, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(253, 45);
			this->label3->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label4->Location = System::Drawing::Point(192, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(253, 45);
			this->label4->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label5->Location = System::Drawing::Point(192, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(325, 29);
			this->label5->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label6->Location = System::Drawing::Point(12, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 45);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Влажность:";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label7->Location = System::Drawing::Point(12, 137);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 45);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Погода:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label8->Location = System::Drawing::Point(12, 233);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 45);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Давление:";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label9->Location = System::Drawing::Point(12, 278);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(164, 29);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Скорость ветра:";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label10->Location = System::Drawing::Point(12, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(210, 24);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Powered by Gismeteo";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(560, 332);
			this->Controls->Add(this->label10);
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
			this->MaximumSize = System::Drawing::Size(576, 371);
			this->MinimumSize = System::Drawing::Size(576, 371);
			this->Name = L"MyForm";
			this->Text = L"Gismeteo Weather App";
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
			line = wb->DownloadString("https://www.gismeteo.ru/weather-naberezhnye-chelny-4534/now");
		} 
		else if (comboBox1->Text == "Казань") {
			line = wb->DownloadString("https://www.gismeteo.ru/weather-kazan-4364/now/");
		}
		else if (comboBox1->Text == "Москва") {
			line = wb->DownloadString("https://www.gismeteo.ru/weather-moscow-4368/now/");
		}
		else if (comboBox1->Text == "Гай") {
			line = wb->DownloadString("https://www.gismeteo.ru/weather-gay-11300/now/");
		}
		else if (comboBox1->Text == "Екатеринбург") {
			line = wb->DownloadString("https://www.gismeteo.ru/weather-yekaterinburg-4517/now/");
		}
		else if (comboBox1->Text == "Регенсбург") {
			line = wb->DownloadString("https://www.gismeteo.ru/weather-regensburg-2708/now/");
		}
		 // скачиваем страницу с сайта
		Regex^ temperature_value = gcnew Regex("now-weather\"><span class=\"unit unit_temperature_c\"><span class=\"sign\">(.*?)</span>(.*?)<span class=\"lower\">(.*?)</span>"); // Регулярное выражение, поиск значения температуры
		Match^ match_temperature = temperature_value->Match(line); // Ищем совпадения по шаблону и записываем в группу температура
		if (match_temperature->Groups[1]->Success) {
			if (match_temperature->Groups[1]->Value->Contains("minus")) {
				label2->Text = "-" + (match_temperature->Groups[2]->Value) + (match_temperature->Groups[3]->Value) + " °C";
			}
			else {
				label2->Text = (match_temperature->Groups[1]->Value) + (match_temperature->Groups[2]->Value) + (match_temperature->Groups[3]->Value) + " °C";
			}
		}
		else {
			temperature_value = gcnew Regex("now-weather\"><span class=\"unit unit_temperature_c\"><span class=\"sign\">(.*?)</span>(.*?)</span>");
			match_temperature = temperature_value->Match(line);
			if (match_temperature->Groups[1]->Value->Contains("minus")) {
				label2->Text = "-" + (match_temperature->Groups[2]->Value) + (match_temperature->Groups[3]->Value) + " °C";
			}
			else {
				label2->Text = (match_temperature->Groups[1]->Value) + (match_temperature->Groups[2]->Value) + (match_temperature->Groups[3]->Value) + " °C";
			}
		}
		

		Regex^ wind_value = gcnew Regex("unit unit_wind_m_s\">(.*?)<div");  //Регулярное выражение, поиск скорости ветра
		Match^ match_wind = wind_value->Match(line);
		if (match_wind->Groups[1]->Value->Contains("0")) {
			label5->Text = match_wind->Groups[1]->Value + " м/с штиль";
		}
		else {
			label5->Text = match_wind->Groups[1]->Value + " м/с";
		}
		
		Regex^ humidity_value = gcnew Regex("humidity\"><div class=\"item-title\">(.*?)</div><div class=\"item-value\">(.*?)</div>");  //Регулярное выражение, поиск значения влажности
		Match^ match_humidity = humidity_value->Match(line);
		label3->Text = match_humidity->Groups[2]->Value + " %";

		Regex^ pressure_value = gcnew Regex("item-value\"><div class=\"unit unit_pressure_mm_hg_atm\">(.*?)<div");  //Регулярное выражение, поиск значения давления
		Match^ match_pressure = pressure_value->Match(line);
		label4->Text = match_pressure->Groups[1]->Value + " мм рт.ст.";
		
	}
};
}
