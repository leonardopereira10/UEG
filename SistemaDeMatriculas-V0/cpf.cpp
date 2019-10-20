#include "cpf.h"
#include "ui_cpf.h"

Cpf::Cpf(QWidget *parent) :

	QDialog(parent),
	ui(new Ui::Cpf)
{
	ui->setupUi(this);
	QPixmap erro (":/imagens/Erro.png");
	ui->validador->setPixmap(erro);
}

Cpf::~Cpf()
{
	delete ui;
}

QString Cpf::getCpf() const
{
	return cpf;
}

void Cpf::setCpf(const QString &value)
{
	cpf = value;
}

int *Cpf::cpfToInt()
{
  QString tmpCpf[11];
  static int vetCpf[11];

  cpf.remove('.');
  cpf.remove('-');

  // Converter para int
  for (int i = 0; i < 11; i++)
  {
	tmpCpf[i] = cpf.at(i);
	vetCpf[i] = tmpCpf[i].toInt();
  }
  return vetCpf;
}

bool Cpf::knownValid(const int *vetCpf)
{
  // Cpfs inválidos conhecidos (222.222.222-22)
  for (int i = 0, f = 0; i < 11; i++)
  {
	if (vetCpf[i] == vetCpf[i + 1])
	  f++;
	if (f == 10)
	  return false;
  }
  return true;
}

bool Cpf::validDigitOne(const int *vetCpf)
{
  int sumDigitOne = 0;
  int restDigitOne = 0;

  // Soma do primeiro dígito
  for (int i = 0, f = 10; i < 9; i++)
  {
	sumDigitOne += (vetCpf[i] * f);
	f--;
  }
  restDigitOne = ((sumDigitOne * 10) % 11);
  if (restDigitOne == 10)
	restDigitOne = 0; // Se for igual a 10 considera 0

  if (restDigitOne == vetCpf[9])
	return true;
  return false;
}

bool Cpf::validDigitTwo(const int *vetCpf)
{
  // Soma segundo dígito
  int sumDigitTwo = 0;
  int restDigitTwo = 0;
  for (int i = 0, f = 11; i < 10; i++)
  {
	sumDigitTwo += (vetCpf[i] * f);
	f--;
  }
  restDigitTwo = ((sumDigitTwo * 10) % 11);
  if (restDigitTwo == 10)
	restDigitTwo = 0; // Se for igual a 10 considera 0

  if (restDigitTwo == vetCpf[10])
	return true;
  return false;
}

bool Cpf::validCpf()
{
  if (cpf.length() < 14) // Considera-se a pontuaçaoo
	return false;
  else
  {
	int *vetCpf = cpfToInt();

	if (knownValid(vetCpf))
	  if (validDigitOne(vetCpf) && validDigitTwo(vetCpf))
		return true;
	return false;
  }
}


// BUG: Janela fecha ao pressionar enter
// TODO: Retirar imagem de erro que aparece antes de pressionar Ok
void Cpf::on_btn_ok_clicked()
{
	QPixmap erro (":/imagens/Erro.png");
	QPixmap valido (":/imagens/Confirmacao.png");

	setCpf(ui->campo_cpf->text());

	if(validCpf()){
		ui->validador->setPixmap(valido);
	}
	else{
		ui->validador->setPixmap(erro);
	}
}

void Cpf::on_campo_cpf_returnPressed()
{
	ui->btn_ok->click();
}

// NOTE: Removido método de "Cancelar" (fechar janela)
// Função de fechar adicionada ao botão por meio de signais
