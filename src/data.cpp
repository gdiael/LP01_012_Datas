#include "data.h"

    Data::Data(){
        chrono::system_clock::time_point now = std::chrono::system_clock::now();
        time_t tt = chrono::system_clock::to_time_t(now);
        tm local_tm = *localtime(&tt);
        this->m_ano = local_tm.tm_year + 1900;
        this->m_mes = local_tm.tm_mon + 1;
        this->m_dia = local_tm.tm_mday;
    }

    Data::Data(int dia, int mes, int ano){
        this->m_ano = ano;
        this->m_mes = (mes > 12) ? 12 : (mes < 1) ? 1 : mes;
        int diamax = this->m_duracaoMes();
        this->m_dia = (dia > diamax) ? diamax : (dia < 1) ? 1 : dia;
    }

    Data::~Data(){}

    int Data::getDia(){
        return this->m_dia;
    }

    int Data::getMes(){
        return this->m_mes;
    }

    int Data::getAno(){
        return this->m_ano;
    }

    bool Data::isBissexto(){
        return (( this->m_ano % 4 == 0 && this->m_ano % 100 != 0 ) || this->m_ano % 400 == 0 );
    }

    void Data::somarDias(int dias){

    }

    void Data::somarMeses(int meses){

    }

    void Data::somarAnos(int anos){

    }

    void Data::proximoDia(){
        
    }

    ostream &operator<<(ostream &os, Data &dt){
        string dia = to_string(dt.m_dia);
        dia = (dt.m_dia < 10) ? "0" + dia : dia;
        string mes = to_string(dt.m_mes);
        string ano = to_string(dt.m_ano);
        os << dt.m_dia << "/" << dt.m_mes << "/" << dt.m_ano;
        return os;
    }

    int Data::m_duracaoMes(int mes){
        mes = (mes == 0) ? this->m_mes : mes;
        if(mes == 2){
            return this->isBissexto() ? 29 : 28;
        }else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            return 31;
        }else{
            return 30;
        };
    }