#pragma once

namespace Project3 {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Сводка для MyForm
/// </summary>
public
ref class MyForm : public System::Windows::Forms::Form {
public:
  MyForm(void) {
    InitializeComponent();
    //
    // TODO: добавьте код конструктора
    //
  }

protected:
  /// <summary>
  /// Освободить все используемые ресурсы.
  /// </summary>
  ~MyForm() {
    if (components) {
      delete components;
    }
  }

private:
  System::Windows::Forms::Button ^ button1;

private:
  System::Windows::Forms::TextBox ^ textBox1;

private:
  System::Windows::Forms::Label ^ label1;

private:
  System::Windows::Forms::Button ^ button2;

private:
  System::Windows::Forms::Label ^ label2;

private:
  System::Windows::Forms::Label ^ label3;

private:
  System::Windows::Forms::TextBox ^ textBox2;

private:
  System::Windows::Forms::TextBox ^ textBox3;

private:
  System::Windows::Forms::DataGridView ^ dataGridView1;

protected:
private:
  /// <summary>
  /// Обязательная переменная конструктора.
  /// </summary>
  System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
  /// <summary>
  /// Требуемый метод для поддержки конструктора — не изменяйте
  /// содержимое этого метода с помощью редактора кода.
  /// </summary>
  void InitializeComponent(void) {
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->textBox1 = (gcnew System::Windows::Forms::TextBox());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->button2 = (gcnew System::Windows::Forms::Button());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->textBox2 = (gcnew System::Windows::Forms::TextBox());
    this->textBox3 = (gcnew System::Windows::Forms::TextBox());
    this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->dataGridView1))
        ->BeginInit();
    this->SuspendLayout();
    //
    // button1
    //
    this->button1->Location = System::Drawing::Point(521, 55);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(157, 37);
    this->button1->TabIndex = 0;
    this->button1->Text = L"Добавить процесс";
    this->button1->UseVisualStyleBackColor = true;
    this->button1->Click +=
        gcnew System::EventHandler(this, &MyForm::button1_Click);
    //
    // textBox1
    //
    this->textBox1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
    this->textBox1->Location = System::Drawing::Point(702, 55);
    this->textBox1->Name = L"textBox1";
    this->textBox1->Size = System::Drawing::Size(79, 35);
    this->textBox1->TabIndex = 1;
    this->textBox1->TextAlign =
        System::Windows::Forms::HorizontalAlignment::Center;
    this->textBox1->TextChanged +=
        gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
    //
    // label1
    //
    this->label1->AutoSize = true;
    this->label1->Location = System::Drawing::Point(605, 24);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(146, 16);
    this->label1->TabIndex = 2;
    this->label1->Text = L"Процессорное время";
    //
    // button2
    //
    this->button2->Location = System::Drawing::Point(521, 106);
    this->button2->Name = L"button2";
    this->button2->Size = System::Drawing::Size(156, 41);
    this->button2->TabIndex = 3;
    this->button2->Text = L"Сброс процессов";
    this->button2->UseVisualStyleBackColor = true;
    this->button2->Click +=
        gcnew System::EventHandler(this, &MyForm::button2_Click);
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Location = System::Drawing::Point(25, 237);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(174, 16);
    this->label2->TabIndex = 4;
    this->label2->Text = L"Среднее время ожидания";
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->Location = System::Drawing::Point(26, 285);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(188, 16);
    this->label3->TabIndex = 5;
    this->label3->Text = L"Среднее время исполнения";
    //
    // textBox2
    //
    this->textBox2->BackColor = System::Drawing::SystemColors::Menu;
    this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
    this->textBox2->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
    this->textBox2->Location = System::Drawing::Point(236, 233);
    this->textBox2->Name = L"textBox2";
    this->textBox2->Size = System::Drawing::Size(79, 28);
    this->textBox2->TabIndex = 6;
    //
    // textBox3
    //
    this->textBox3->BackColor = System::Drawing::SystemColors::Menu;
    this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
    this->textBox3->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
    this->textBox3->Location = System::Drawing::Point(236, 279);
    this->textBox3->Name = L"textBox3";
    this->textBox3->Size = System::Drawing::Size(79, 28);
    this->textBox3->TabIndex = 7;
    //
    // dataGridView1
    //
    this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::
        DataGridViewColumnHeadersHeightSizeMode::AutoSize;
    this->dataGridView1->GridColor =
        System::Drawing::SystemColors::AppWorkspace;
    this->dataGridView1->Location = System::Drawing::Point(23, 13);
    this->dataGridView1->Name = L"dataGridView1";
    this->dataGridView1->ReadOnly = true;
    this->dataGridView1->RowHeadersWidth = 53;
    this->dataGridView1->RowTemplate->Height = 24;
    this->dataGridView1->Size = System::Drawing::Size(475, 191);
    this->dataGridView1->TabIndex = 8;
    //
    // MyForm
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(829, 404);
    this->Controls->Add(this->dataGridView1);
    this->Controls->Add(this->textBox3);
    this->Controls->Add(this->textBox2);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->button2);
    this->Controls->Add(this->label1);
    this->Controls->Add(this->textBox1);
    this->Controls->Add(this->button1);
    this->Name = L"MyForm";
    this->Text = L"MyForm";
    this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->dataGridView1))
        ->EndInit();
    this->ResumeLayout(false);
    this->PerformLayout();
  }

private:
  int sum = 0;
  int count = 0;
  double waiting_time = 0;
  double full_time = 0;

#pragma endregion
private:
  System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
    double number = System::Convert::ToInt32(textBox1->Text);
    if (count == 0)
      dataGridView1->Columns->Add("process", "процесс");
    for (int i = sum + 1; i <= sum + number; ++i)
      dataGridView1->Columns->Add(System::Convert::ToString(i),
                                  System::Convert::ToString(i));
    int rowNumber = dataGridView1->Rows->Add();
    dataGridView1->Rows[rowNumber]->Cells["process"]->Value =
        "процесс " + System::Convert::ToString(rowNumber + 1);
    for (int i = 1; i <= sum; ++i)
      dataGridView1->Rows[rowNumber]->Cells[i]->Value = "Г";
    for (int i = sum + 1; i <= sum + number; ++i)
      dataGridView1->Rows[rowNumber]->Cells[i]->Value = "И";

    waiting_time = (waiting_time * count + sum) / (count + 1);
    textBox2->Text = System::Convert::ToString(waiting_time);
    full_time = (full_time * count + number + sum) / (count + 1);
    textBox3->Text = System::Convert::ToString(full_time);
    sum += number;
    ++count;
    textBox1->Text = "";
  }

private:
  System::Void textBox1_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {}

private:
  System::Void MyForm_Load(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
    sum = 0;
    count = 0;
    waiting_time = 0;
    full_time = 0;
    textBox2->Text = "";
    textBox3->Text = "";
    dataGridView1->Rows->Clear();
    dataGridView1->Columns->Clear();
    textBox1->Text = "";
  }
};
} // namespace Project3
