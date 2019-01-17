''' /*
     * Fazer um programa que apresente a sequencia conforme o exemplo abaixo.
     * Não tem entrada, mas a saida deve ser:
     
     * I=1 J=7
     * I=1 J=6
     * I=1 J=5
     * I=3 J=7
     * I=3 J=6
     * I=3 J5
     * ...
     * I=9 J=7
     * I=9 J=6
     * I=9 J=5
     * / 
'''

I = -1
for i in range (1,6):
    i=I+2
    print('I=%d J=%d' %(i,7))
    print('I=%d J=%d' %(i,6))
    print('I=%d J=%d' %(i,5))
I=i
