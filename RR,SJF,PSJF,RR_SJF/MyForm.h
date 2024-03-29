#pragma once
#include <queue>
#include <set>
#include <vector>

std::vector<int> processes;

namespace Project5 {

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

private:
  System::Windows::Forms::ComboBox ^ comboBox1;

private:
  System::Windows::Forms::TextBox ^ textBox4;

private:
  System::Windows::Forms::Label ^ label4;

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
    this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
    this->textBox4 = (gcnew System::Windows::Forms::TextBox());
    this->label4 = (gcnew System::Windows::Forms::Label());
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
    this->dataGridView1->AutoSizeColumnsMode =
        System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
    this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::
        DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
    this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::
        DataGridViewColumnHeadersHeightSizeMode::AutoSize;
    this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
    this->dataGridView1->GridColor =
        System::Drawing::SystemColors::AppWorkspace;
    this->dataGridView1->Location = System::Drawing::Point(23, 13);
    this->dataGridView1->MinimumSize = System::Drawing::Size(10, 18);
    this->dataGridView1->Name = L"dataGridView1";
    this->dataGridView1->ReadOnly = true;
    this->dataGridView1->RowHeadersWidth = 10;
    this->dataGridView1->RowTemplate->Height = 18;
    this->dataGridView1->RowTemplate->Resizable =
        System::Windows::Forms::DataGridViewTriState::True;
    this->dataGridView1->Size = System::Drawing::Size(475, 191);
    this->dataGridView1->TabIndex = 8;
    //
    // comboBox1
    //
    this->comboBox1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
    this->comboBox1->FormattingEnabled = true;
    this->comboBox1->Items->AddRange(gcnew cli::array<System::Object ^>(4){
        L"RR", L"SJF", L"PSJF", L"RR SJF"});
    this->comboBox1->Location = System::Drawing::Point(619, 301);
    this->comboBox1->Name = L"comboBox1";
    this->comboBox1->Size = System::Drawing::Size(131, 37);
    this->comboBox1->TabIndex = 9;
    this->comboBox1->Text = L"RR";
    this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(
        this, &MyForm::comboBox1_SelectedIndexChanged);
    //
    // textBox4
    //
    this->textBox4->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
    this->textBox4->Location = System::Drawing::Point(672, 233);
    this->textBox4->Name = L"textBox4";
    this->textBox4->Size = System::Drawing::Size(79, 35);
    this->textBox4->TabIndex = 10;
    this->textBox4->TextAlign =
        System::Windows::Forms::HorizontalAlignment::Center;
    this->textBox4->TextChanged +=
        gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->Location = System::Drawing::Point(671, 210);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(46, 16);
    this->label4->TabIndex = 11;
    this->label4->Text = L"Квант";
    //
    // MyForm
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(829, 404);
    this->Controls->Add(this->label4);
    this->Controls->Add(this->textBox4);
    this->Controls->Add(this->comboBox1);
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
  uint32_t sum = 0;

#pragma endregion
private:
  System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
    dataGridView1->Rows->Clear();
    dataGridView1->Columns->Clear();
    double waiting_time = 0;
    double full_time = 0;
    uint32_t number = System::Convert::ToInt32(textBox1->Text);
    processes.push_back(number);

    dataGridView1->Columns->Add("process", "процесс");
    for (uint32_t i = 1; i <= sum + number; ++i)
      dataGridView1->Columns->Add(System::Convert::ToString(i),
                                  System::Convert::ToString(i));
    for (uint32_t i = 0; i < processes.size(); ++i)
      dataGridView1->Rows->Add(System::Convert::ToString(i + 1));
    sum += number;
    //
    // RR
    //
    if (comboBox1->SelectedItem == "RR") {
      uint32_t quantum =
          (textBox4->Text != "" ? System::Convert::ToInt32(textBox4->Text) : 5);
      std::queue<std::pair<uint32_t, uint32_t>> queue;
      for (uint32_t i = 0; i < processes.size(); ++i)
        queue.push({i, processes[i]});
      uint32_t queue_sum = 0;
      std::vector<uint32_t> size_in_table(processes.size());

      while (!queue.empty()) {
        uint32_t current = queue.front().second;
        uint32_t process_number = queue.front().first;
        queue.pop();
        uint32_t time = std::min(quantum, current);
        for (uint32_t i = queue_sum + 1; i <= queue_sum + time; ++i)
          dataGridView1->Rows[process_number]->Cells[i]->Value = "И";
        for (uint32_t i = size_in_table[process_number] + 1; i <= queue_sum;
             ++i)
          dataGridView1->Rows[process_number]->Cells[i]->Value = "Г";
        waiting_time += queue_sum - size_in_table[process_number];
        queue_sum += time;
        size_in_table[process_number] = queue_sum;
        if (current > quantum) {
          queue.push({process_number, current - quantum});
        } else {
          full_time += size_in_table[process_number];
        }
      }
    }
    //
    // SJF
    //
    if (comboBox1->SelectedItem == "SJF") {
      std::vector<std::pair<uint32_t, uint32_t>> sorted_processes;
      for (int i = 0; i < processes.size(); ++i)
        sorted_processes.push_back({processes[i], i});
      sort(sorted_processes.begin(), sorted_processes.end());
      uint32_t current_sum = 0;

      for (auto &element : sorted_processes) {
        for (int i = 1; i <= current_sum; ++i)
          dataGridView1->Rows[element.second]->Cells[i]->Value = "Г";
        for (int i = current_sum + 1; i <= current_sum + element.first; ++i)
          dataGridView1->Rows[element.second]->Cells[i]->Value = "И";
        waiting_time += current_sum;
        current_sum += element.first;
        full_time += current_sum;
      }
    }
    //
    // PSJF
    //
    if (comboBox1->SelectedItem == "PSJF") {
      uint32_t interval =
          (textBox4->Text != "" ? System::Convert::ToInt32(textBox4->Text) : 5);
      uint32_t index = 0;
      std::set<std::pair<uint32_t, uint32_t>> queue;
      queue.insert({processes[0], 0});
      uint32_t time_left = interval;
      uint32_t queue_sum = 0;
      std::vector<int> size_in_table(processes.size());

      while (!queue.empty()) {
        uint32_t current = (*queue.begin()).first;
        uint32_t process_number = (*queue.begin()).second;
        queue.erase({current, process_number});
        int time = std::min(time_left, current);
        for (int i = queue_sum + 1; i <= queue_sum + time; ++i)
          dataGridView1->Rows[process_number]->Cells[i]->Value = "И";
        for (int i = size_in_table[process_number] + 1; i <= queue_sum; ++i)
          dataGridView1->Rows[process_number]->Cells[i]->Value = "Г";
        waiting_time += queue_sum - size_in_table[process_number];
        queue_sum += time;
        size_in_table[process_number] = queue_sum;
        if (current > time_left) {
          queue.insert({current - time_left, process_number});
        } else {
          full_time += size_in_table[process_number];
        }
        if (current >= time_left && index + 1 < processes.size()) {
          ++index;
          queue.insert({processes[index], index});
        }
        time_left = (current >= time_left ? interval : time_left - current);
      }
    }
    //
    // RR SJF
    //
    if (comboBox1->SelectedItem == "RR SJF") {
      std::vector<std::pair<uint32_t, uint32_t>> sorted_processes;
      for (uint32_t i = 0; i < processes.size(); ++i)
        sorted_processes.push_back({processes[i], i});
      sort(sorted_processes.begin(), sorted_processes.end());
      uint32_t quantum = sum / processes.size();
      textBox4->Text = System::Convert::ToString(quantum);
      std::queue<std::pair<uint32_t, uint32_t>> queue;
      for (auto &i : sorted_processes)
        queue.push(i);
      uint32_t queue_sum = 0;
      std::vector<int> size_in_table(processes.size());

      while (!queue.empty()) {
        uint32_t current = queue.front().first;
        uint32_t process_number = queue.front().second;
        queue.pop();
        uint32_t time = std::min(quantum, current);
        for (uint32_t i = queue_sum + 1; i <= queue_sum + time; ++i)
          dataGridView1->Rows[process_number]->Cells[i]->Value = "И";
        for (uint32_t i = size_in_table[process_number] + 1; i <= queue_sum;
             ++i)
          dataGridView1->Rows[process_number]->Cells[i]->Value = "Г";
        waiting_time += queue_sum - size_in_table[process_number];
        queue_sum += time;
        size_in_table[process_number] = queue_sum;
        if (current > quantum) {
          queue.push({current - quantum, process_number});
        } else {
          full_time += size_in_table[process_number];
        }
      }
    }
    waiting_time = waiting_time / processes.size();
    full_time = full_time / processes.size();
    textBox2->Text = System::Convert::ToString(waiting_time);
    textBox3->Text = System::Convert::ToString(full_time);
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
    textBox2->Text = "";
    textBox3->Text = "";
    dataGridView1->Rows->Clear();
    dataGridView1->Columns->Clear();
    textBox1->Text = "";
    textBox4->Text = "";
    processes.clear();
  }

private:
  System::Void comboBox1_SelectedIndexChanged(System::Object ^ sender,
                                              System::EventArgs ^ e) {
    sum = 0;
    textBox2->Text = "";
    textBox3->Text = "";
    dataGridView1->Rows->Clear();
    dataGridView1->Columns->Clear();
    textBox1->Text = "";
    textBox4->Text = "";
    processes.clear();
    if (comboBox1->SelectedItem == "PSJF")
      label4->Text = "интервал";
    if (comboBox1->SelectedItem == "SJF")
      label4->Text = "";
    if (comboBox1->SelectedItem == "RR")
      label4->Text = "квант";
    if (comboBox1->SelectedItem == "RR SJF")
      label4->Text = "Вычесленный квант";
  }

private:
  System::Void textBox4_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {}
};
} // namespace Project5
