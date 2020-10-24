"""Author: Manoela Barreto de Oliveira Reis
    Country: Brazil"""

BRANCOS    = [' ', '\n', '\t']
DIGITOS    = "0123456789."

OPERADORES = "+-*/%^=!"
OP_ATR = '='
OP_ADD = '+'
OP_SUB = '-'
OP_MUL = '*'
OP_DIV = '/'
OP_MOD = '%'
OP_POT = '^'  # potência: você pode usar ** do Python
OP_NOT = '!'  # troca o sinal

# OUTRAS CONSTANTES SE DESEJAR
LETRAS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

def main ():
    exp = input("exp>> ")
    l= tokeniza (exp)
    print( "\n tokens:")
    imprima_tokens (l)

def tokeniza(exp):
    """ (str) -> list
    Recebe uma expressão em notação polonesa e retorna uma lista de tokens.
    Use a classe Token definida nesse esqueleto sem modificá-la, e use a função imprima_tokens para testar essa função.
    Você pode converter todos os números para reais. """
    # escreva o seu código abaixo

    listaF = []
    variavel = ''
    numbers = ''
    fez = False
    fezz = False
    for car in exp:
        if not (car in BRANCOS):
            if car in LETRAS:           
                variavel += car
                fez=True
    if fez:
        tk = Token('V',variavel)
        listaF.append(tk)
        
    for car in exp:
            if car in OPERADORES:
                tk = Token('O',car)
                listaF.append(tk)
            if not (car in BRANCOS):
                if car in DIGITOS:
                    numbers+=car
                    fezz = True
    if fezz:        
         tk = Token ('N',float(numbers))
         listaF.append(tk)
            
    return listaF

def imprima_tokens(tokens):
    """ (list) -> None
        Recebe uma lista (pilha ou fila) de tokens e a imprime
        """
    if len(tokens) == 0:
        print('[]')
    else:
        s = '[' + str(tokens[0])        
        for t in tokens[1:]:
            s += ',' + str(t)
        print(s+']')            

class Token:
    """ Token é um elemento da expressão polonesa,
        que pode ser colocado na lista de tokens ou 
        empilhado na pilha de execução.
        O tipo pode ser 'N', 'V' ou 'O'.
        """
    def __init__(self, t, v):
        self.tipo  = t
        self.valor = v

    def __str__(self):
        if self.tipo == 'N':
            return "N(%.3f)"%(self.valor)
        elif self.tipo == 'V':
            return "V(%s)"%(self.valor)
        else: # self.tipo == 'O':
            return "O(%s)"%(self.valor)
    
main()   
