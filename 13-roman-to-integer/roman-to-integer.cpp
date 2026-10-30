

class Solution {
public:
    // Função auxiliar inline para conversão instantânea sem busca em memória
    inline int getValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) {
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            int atual = getValue(s[i]);
            
            // Se não for o último caractere e o atual for menor que o próximo
            if (i + 1 < n && atual < getValue(s[i+1])) {
                total -= atual;
            } else {
                total += atual;
            }
        }
        
        return total;
    }
};