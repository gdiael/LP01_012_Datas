#ifndef _DATA_H_
#define _DATA_H_

#include <chrono>
#include <iostream>

using namespace std;

class Data
{
  public:
    Data();
    Data(int dia, int mes, int ano);
    ~Data();
    int getDia();
    int getMes();
    int getAno();
    bool isBissexto();
    void somarDias(int dias);
    void somarMeses(int meses);
    void somarAnos(int anos);
    void proximoDia();
    friend ostream &operator<<(ostream &os, Data &dt);

  private:
    int m_dia;
    int m_mes;
    int m_ano;
    int m_duracaoMes(int mes = 0);
};

#endif