class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {
            'I': 1, 'V': 5, 'X': 10, 'L': 50,
            'C': 100, 'D': 500, 'M': 1000
        }
        
        total = 0
        anterior = 0
        
        for caractere in reversed(s):
            atual = roman[caractere]
            if atual < anterior:
                total -= atual
            else:
                total += atual
                anterior = atual
                
        return total