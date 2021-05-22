#include <iostream>

using namespace std;

int main()
{
    int cont = 0;
    float nota, notas = 0;
    while (cont < 2){
        cin >> nota;
        if (nota > 10){
            cout << "nota invalida" <<endl;
        }else{
            if (nota < 0){
                cout << "nota invalida" <<endl;
            }else{
                notas = notas + nota;
                cont++;
            }
        }
    }
    notas = notas / 2;
    cout.precision(2);
    cout << fixed << "media = " << notas <<endl;
    return 0;
}
