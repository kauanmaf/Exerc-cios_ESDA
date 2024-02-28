#include <iostream>
#include <tuple>

using namespace std;

void bissexto(int iAno){
    if (iAno % 400 == 0) {
        cout << iAno << " é ano bissexto" << endl;
    }

    else if (iAno % 100 == 0){
        cout << iAno << " NÂO é ano bissexto" << endl;
    }
    else if (iAno % 4 == 0){
        cout << iAno << " é ano bissexto" << endl;
    }
    else{
        cout << iAno << " NÂO é ano bissexto" << endl;
    }

}

int main (){
    bissexto(2019);
    bissexto(2024);
    bissexto(2100);
    bissexto(2400);
    return 0;
}