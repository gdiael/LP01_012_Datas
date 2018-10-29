#include "data.h"

int main(int argc, char const *argv[])
{
    Data agora;
    cout << "Mostrar data de hoje:" << endl;
    cout << agora << endl;
    cout << "Mostrar data de amnhã:" << endl;
    agora.proximoDia();
    cout << agora << endl;
    cout << "Somar dois anos a data anterior:" << endl;
    agora.somarAnos(2);
    cout << agora << endl;
    cout << "Somar tres meses a data anterior:" << endl;
    agora.somarMeses(3);
    cout << agora << endl;
    cout << "Somar 127 dias a data anterior:" << endl;
    agora.somarDias(127);
    cout << agora << endl;
    return 0;
}
