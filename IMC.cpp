#include <iostream>
#include <tuple>

using namespace std;

void imc(const tuple<float, float>& valores) {
    float fWeight = get<0>(valores);
    float fHeight = get<1>(valores);
    
    cout << "Sua altura é de " << fHeight << endl;
    cout << "Seu peso é de " << fWeight << endl;

    float fIMC = fWeight / (fHeight * fHeight);

    cout << "Seu IMC é de " << fIMC << endl;

    if (fIMC > 40) {
        cout << "Você está com obesidade mórbida" << endl;
    } else if (fIMC > 35) {
        cout << "Você está com obesidade severa" << endl;
    } else if (fIMC > 30) {
        cout << "Você está com obesidade" << endl;
    } else if (fIMC > 25) {
        cout << "Você está acima do peso" << endl;
    } else if (fIMC > 18.5) {
        cout << "Você está com o peso normal" << endl;
    } else if (fIMC > 17) {
        cout << "Você está abaixo do peso" << endl;
    } else {
        cout << "Você está muito abaixo do peso" << endl;
    }
}

int main() {
    tuple<float, float> pessoa0(75.0, 1.75);
    tuple<float, float> pessoa1(70.0, 1.75);
    tuple<float, float> pessoa2(90.0, 1.80);
    tuple<float, float> pessoa3(60.0, 1.65);
    tuple<float, float> pessoa4(100.0, 1.70);

    imc(pessoa0);
    imc(pessoa1);
    imc(pessoa2);
    imc(pessoa3);
    imc(pessoa4);

    return 0;
}