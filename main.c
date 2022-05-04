#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int main()
{
    //Opções alimentícias disponíveis (Cardápio)
    float arroz = 3.04;
    float feijao = 7.50;
    float batatafrita = 9.00;
    float acem = 19.50;
    float picanha = 23.19;
    float costela = 14.48;
    float macarrao = 19.99;
    float feijoada = 22.15;
    float estrogonofe = 18.49;
    float pizzaqueijo = 29.99;
    float pizzacalabresa = 34.99;
    float pizzapepperoni = 39.99;
    float cocacola = 8.99;
    float fanta = 8.99;
    float sodaitaliana = 11.99;
    float pudim = 10.99;
    float sorvete = 13.99;
    float torta = 12.99;

    //Total da Conta, Número de Itens e Código do Produto
    float total = 0;
    int itens = 0;
    int codigo;


    //Inicialização do Sistema
    printf("Sistema de Pedidos - Restaurante Feliz\n");
    printf("===========================================\n\n");
    sleep(1);

    //Apresentação do Cardápio ao Usuário
    printf("Cardapio do Dia:\n");
    printf("arroz(128), feijao(212), acem(219), picanha(131), batafrita(742)\n");
    printf("costela(840), macarrao(476), feijoada(281), estrogonofe(508)\n");
    printf("pizzaqueijo(407), pizzacalabresa(432), pizzapepperoni(987), cocacola(324)");
    printf("fanta(675), sodaitaliana(903), pudim(893), sorvete(130) e torta(047)\n");
    printf("Para parar, digite 999\n");
    printf("===========================================\n\n");
    sleep(1);

    do {
        printf("Insira o codigo do produto: ");
        scanf("%d", &codigo);
        if(codigo == 128) {
        total = total + arroz;
        printf("Voce selecionou Arroz\n");
        itens += 1;
        }
        else if (codigo == 212) {
            total = total + feijao;
            printf("Voce selecionou Feijao\n");
            itens += 1;
        }
        else if (codigo == 742) {
            total = total + batatafrita;
            printf("Voce selecionou Batata Frita\n");
            itens += 1;
        }
        else if (codigo == 219) {
            total = total + acem;
            printf("Voce selecionou Acem\n");
            itens += 1;
        }
        else if (codigo == 131) {
            total = total + picanha;
            printf("Voce selecionou Picanha\n");
            itens += 1;
        }
        else if (codigo == 840) {
            total = total + costela;
            printf("Voce selecionou Costela\n");
            itens += 1;
        }
        else if (codigo == 476) {
            total = total + macarrao;
            printf("Voce selecionou Macarrao\n");
            itens += 1;
        }
        else if (codigo == 281) {
            total = total + feijoada;
            printf("Voce selecionou Feijoada\n");
            itens += 1;
        }
        else if (codigo == 508) {
            total = total + estrogonofe;
            printf("Voce selecionou Estrogonofe\n");
            itens += 1;
        }
        else if (codigo == 407) {
            total = total + pizzaqueijo;
            printf("Voce selecionou Pizza de Queijo\n");
            itens += 1;
        }
        else if (codigo == 432) {
            total = total + pizzacalabresa;
            printf("Voce selecionou Pizza de Calabresa\n");
            itens += 1;
        }
        else if (codigo == 987) {
            total = total + pizzapepperoni;
            printf("Voce selecionou Pizza de Pepperoni\n");
            itens += 1;
        }
        else if (codigo == 324) {
            total = total + cocacola;
            printf("Voce selecionou Coca-Cola\n");
            itens += 1;
        }
        else if (codigo == 675) {
            total = total + fanta;
            printf("Voce selecionou Fanta\n");
            itens += 1;
        }
        else if (codigo == 903) {
            total = total + sodaitaliana;
            printf("Voce selecionou Soda Italiana\n");
            itens += 1;
        }
        else if (codigo == 893) {
            total = total + pudim;
            printf("Voce selecionou Pudim\n");
            itens += 1;
        }
        else if (codigo == 130) {
            total = total + sorvete;
            printf("Voce selecionou Sorvete\n");
            itens += 1;
        }
        else if (codigo == 047){
            total = total + torta;
            printf("Voce selecionou Torta\n");
            itens += 1;
        }

    }
    while (codigo != 999);

    printf("O total da conta foi de: %.2f", total);
    printf("O total de itens adicionados foi de: %d", itens);


    return 0;
}
