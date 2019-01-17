''' /* 
     *Fazer um programa que apresente a sequencia conforme o exemplo abaixo.
     * Não tem entrada, mas a saida deve ser:
     
     * I=1 J=7
     * I=1 J=6
     * I=1 J=5
     * I=3 J=9
     * I=3 J=8
     * I=3 J=7
     * ...
     * I=9 J=15
     * I=9 J=14
     * I=9 J=13
     */
'''

I, J,F,G = -1,5,4,3
for i in range (1,6):
    i=I+2
    j=J+2
    f=F+2
    g=G+2
    print('I=%d J=%d' %(i,j))
    print('I=%d J=%d' %(i,f))
    print('I=%d J=%d' %(i,g))
    I=i
    J=j
    F=f
G=g
