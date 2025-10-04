# Desafio de Xadrez — MateCheck

Este repositório contém três níveis do desafio, focando em estruturas de repetição, loops aninhados e recursão em C.

## Arquivos
- `xadrez_novato.c`: Bispo (while: 5x "Cima Direita"), Torre (for: 5x "Direita"), Rainha (do-while: 8x "Esquerda").
- `xadrez_aventureiro.c`: Cavalo em L para **baixo e esquerda** usando **loops aninhados** (for externo + while interno).
- `xadrez_mestre.c`: Bispo/Torre/Rainha com **recursão**; Bispo cumpre **loops aninhados**; Cavalo em L para **cima e direita** com **múltiplas variáveis/condições** e uso de `continue`/`break`.

## Compilação
```bash
gcc xadrez_novato.c -o xadrez_novato
gcc xadrez_aventureiro.c -o xadrez_aventureiro
gcc xadrez_mestre.c -o xadrez_mestre
```


## Execução
```bash
./xadrez_novato
./xadrez_aventureiro
./xadrez_mestre
```

Nomenclatura de saída

As direções seguem o padrão: Cima, Baixo, Esquerda, Direita e, quando diagonal do Bispo, Cima Direita.
