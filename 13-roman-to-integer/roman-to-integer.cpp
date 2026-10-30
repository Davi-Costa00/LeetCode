
class Solution {
public:
    int romanToInt(string s) {
        // Cria um array rápido indexado pelo código ASCII do caractere
        int roman[128];
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            // Se o valor atual for menor que o próximo valor, nós subtraímos
            if (i + 1 < n && roman[s[i]] < roman[s[i+1]]) {
                total -= roman[s[i]];
            } else {
                // Caso contrário, apenas somamos
                total += roman[s[i]];
            }
        }
        
        return total;
    }
};