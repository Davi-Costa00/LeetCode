class Solution(object):
    def twoSum(self, nums, target):
        memorizados = {}
        
        for indice, numero_atual in enumerate(nums):
            o_que_falta = target - numero_atual
            
            if o_que_falta in memorizados:
                return [memorizados[o_que_falta], indice]
            
            memorizados[numero_atual] = indice