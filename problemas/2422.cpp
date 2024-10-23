#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    vector<int> casas;
    int quant_casas, soma_casas, num_casa;

    cin >> quant_casas;

    for (int i = 0; i < quant_casas; i++) {
        cin >> num_casa;
        casas.push_back(num_casa);
    }

    cin >> soma_casas;

    unordered_map<int, int> valores; 

    for (int i = 0; i < quant_casas; i++) {
        int complemento = soma_casas - casas[i];

        
        if (valores.find(complemento) != valores.end()) {
            cout << complemento << " " << casas[i] << '\n';
            return 0;
        }
        
        valores[casas[i]] = i;
    }

    return 0;
}
