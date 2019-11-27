#ifndef EXCLUIRMATRICULA_H
#define EXCLUIRMATRICULA_H
#include <iostream>
#include <QWidget>

using namespace std;

namespace Ui {
class ExcluirMatricula;
}

class ExcluirMatricula : public QWidget {
  Q_OBJECT

public:
  explicit ExcluirMatricula(QWidget *parent = nullptr);
  ~ExcluirMatricula();

private slots:
  void on_BtnExcluir_clicked();

  void on_txbCodAluno_returnPressed();

  void on_txbCodDisciplina_returnPressed();

  void on_txbAno_returnPressed();

  void on_txbSemestre_returnPressed();

  void MensagemCampoNotFound(char campo[]);

  void MensagemSucesso(char CampoMaisAcao[]);

private:
  Ui::ExcluirMatricula *ui;
};

#endif // EXCLUIRMATRICULA_H
