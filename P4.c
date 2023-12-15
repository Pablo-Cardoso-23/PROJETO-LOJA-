#include <stdio.h>
#include <ctype.h>
#include <locale.h>

//VARIÁVEIS

char senha[20], nome[50], sobrenome[50], cpf[12], telefone[10],cep[9], email[70], nomeuser[2][50], usuario;
int  validado, servico, senhauser, senhaloja,  opcao, n, produto, compra, c, i, finalcompra, quantprodutos, senhaopcao, preco, nomeproduto[10], quantidade[10];
float valor, c1, c2, c3, c4, c5, c6, c7, c8;

int main(){

    setlocale(LC_ALL, "Portuguese");

//TELA INICIAL

    printf("\n\t========================\n");
    printf("\t\tP4 STORM\n");
    printf("\t========================\n");

//TELA DE AUTENTICAÇÃO

    printf("DIGITE SUA SENHA: ");
    fflush(stdin);
    gets(senha); 

    system("cls");

//SISTEMA CONDICIONAL DE AUTENTICAÇÃO

    while ((strcmp(senha, "pablinho@123") != 0))
    {
        system("cls");
        printf("\n========================\n");
        printf("\tP4 STORM\n");
        printf("========================\n\n");

        printf("\n========================\n");
        printf("\tSENHA INCORRETA\n");
        printf("========================\n");

        printf("DIGITE NOVAMENTE SUA SENHA: ");
        fflush(stdin);
        gets(senha);
        system("cls");
        validado = 1;
    }

//TELA INICIAL APÓS AUTENTICAÇÃO

    if((strcmp(senha, "pablinho@123") == 0))
    {
        printf("\n\t========================\n");
        printf("\t\tP4 STORM\n");
        printf("\t========================\n\n");

        printf("\t========================\n");
        printf("\t\tSENHA CORRETA\n");
        printf("\t========================\n");

        sleep(2);

        system("cls");

        validado = 1;

        while (validado == 1)
        {

//TELA DE SERVIÇOS

            printf("\t========================\n");
            printf("\t\tP4 STORM\n");
            printf("\t========================\n\n");

            printf("\t========================\n");
            printf("\t| SERVIÇOS DISPONIVEIS |\n");
            printf("\t========================\n");
            printf("\t1- Novo Cadastro\n");
            printf("\t2- Acessar Loja\n");
            printf("\t3- Finalizar Pedido\n");
            printf("\t4- Sair\n");

            printf("DIGITE O NUMERO DO SERVIÇO: ");
            scanf("%d", &servico);

            switch (servico)
            {
            case 1:
                
//CADASTRO DE CLIENTE

            system("cls");

            printf("\t========================\n");
            printf("\t\tP4 STORM\n");
            printf("\t========================\n\n");

            printf("NOME: ");
            fflush(stdin);
            fgets(nome, 50, stdin);
            printf("SOBRENOME: ");
            fflush(stdin);
            fgets(sobrenome, 50, stdin);
            printf("CPF: ");
            fflush(stdin);
            fgets(cpf, 12, stdin);
            printf("TELEFONE: ");
            fflush(stdin);
            fgets(telefone, 10, stdin);
            printf("CEP: ");
            fflush(stdin);
            fgets(cep, 9, stdin);
            printf("E-MAIL: ");
            fflush(stdin);
            fgets(email, 70, stdin);
            printf("NOME DE USUARIO: ");
            fflush(stdin);
            fgets(nomeuser[n], 50, stdin);

            printf("==========================\n");
            printf("|APENAS NUMEROS NA SENHA!|\n");
            printf("==========================\n\n");

            printf("DIGITE SUA SENHA: ");
            scanf("%d", &senhauser);
            
            
            system("cls");
            validado = 1;

                break;

            case 2:
    
//ACESSAR LOJA

            system("cls");

            printf("\t========================\n");
            printf("\t\tP4 STORM\n");
            printf("\t========================\n\n");
            
            printf("SENHA: ");
            scanf("%d", &senhaloja);

            system("cls");

            printf("VERIFICANDO .\n");
            sleep(1);
            printf("VERIFICANDO ..\n");
            sleep(1);
            printf("VERIFICANDO ...\n");
            sleep(1);

            n++;

//VERIFICAR SENHA

            while (senhaloja != senhauser){
                
                system("cls");

                printf("========================\n");
                printf("\tP4 STORM\n");
                printf("========================\n\n");

                printf("========================\n");
                printf("\tSENHA INCORRETA\n");
                printf("========================\n\n");
                
                printf("===============================\n");
                printf("|1 - DIGITAR NOVAMENTE A SENHA|\n");
                printf("|2- VOLTAR AO MENU PRINCIPAL  |\n");
                printf("===============================\n\n");

                printf("SELECIONE UMA OPCAO: ");
                scanf("%d", &senhaopcao);

                if (senhaopcao == 1)
                {
                    printf("DIGITE SUA SENHA NOVAMENTE: ");
                    scanf("%d", &senhaloja);
                }
                else
                {
                    validado = 1;
                    system("pause");
                }
                
                
            }

            if (senhaloja == senhauser){
                

                system("cls");

                printf("========================\n");
                printf("\tP4 STORM\n");
                printf("========================\n\n");

               
                printf("BEM-VINDO, %s\n", &nomeuser);
                
                
                produto = 1;

//TELA DE OPÇÕES DE COMPRA                

                do
                {
                    printf("\t\t==========\n");
                    printf("\t\t|PRODUTOS|\n");
                    printf("\t\t==========\n");

                    printf("_______________________________________________\n");
                    printf("|1- PLAYSTATION 5     | 2- XBOX SERIES X      |\n");
                    printf("|VALOR:  R$ 3890      | VALOR: R$ 3000        |\n");
                    printf("|_____________________|_______________________|\n");
                    printf("|3- GALAXY BOOK ULTRA | 4- MACBOOK PRO        |\n");
                    printf("|VALOR:  R$ 8900      | VALOR: R$ 10000       |\n");
                    printf("|_____________________|_______________________|\n");
                    printf("|5- SAMSUNG S23       | 6- IPHONE 15          |\n");
                    printf("|VALOR:  R$ 4500      | VALOR: R$ 10000       |\n");
                    printf("|_____________________|_______________________|\n");
                    printf("|7- GALAXY WATCH 5    | 8- APPLE WATCH ULTRA 2|\n");
                    printf("|VALOR:  R$ 1800      | VALOR: R$ 4500        |\n");
                    printf("|_____________________|_______________________|\n\n");

                    printf("DIGITE QUANTOS PRODUTOS DESEJA ADICIONAR: ");
                    scanf("%d", &quantprodutos);

                    for ( i = 1; i <= quantprodutos; i++)
                    {
                        printf("DIGITE O CODIGO DO PRODUTO: ");
                        scanf("%i", &nomeproduto[i]);
                        printf("INSIRA A QUANTIDADE: ");
                        scanf("%i", &quantidade[i]);
                        
                    }
                    

                    system("cls");

                    printf("================================\n");
                    printf("|COMPRA DIRECIONADA AO CARRINHO|\n");
                    printf("================================\n\n");

                    printf("DESEJA ADICIONAR MAIS ALGUM PRODUTO?\n");
                    printf("1 - SIM\n");
                    printf("2 - NAO\n");
                    printf("DIGITE SUA ESCOLHA: ");
                    scanf("%d", &compra);

                    n++;

                    system("cls");
                } while(compra == 1);

                if(compra == 2){
                    validado = 1;
                    system("cls");
                }

            }

            break;

                case 3:
//FINALIZAR PEDIDO

                system("cls");

                printf("\t========================\n");
                printf("\t\tP4 STORM\n");
                printf("\t========================\n\n");

                printf("\t\t========\n");
                printf("\t\tCARRINHO\n");
                printf("\t\t========\n\n");

                printf("HORA DE FINALIZAR SEU PEDIDO, %s\n\n", &nomeuser);

//CALCULAR PREÇO

                for (i = 1; i <= quantprodutos; i++){
                    
                    if (nomeproduto[i] == 1)
                    {
                        c1 = 3890 * quantidade[i];
                        printf("PRODUTO: PLAYSTATION 5\n");
                        printf("QUANTIDADE: %i\n", quantidade[i]);
                        printf("VALOR: %.2f\n\n",c1);
                    }
                    else if(nomeproduto [i] == 2)
                    {
                        c2 = 3000 * quantidade[i];
                        printf("PRODUTO: XBOX SERIES X\n");
                        printf("QUANTIDADE: %i\n", quantidade[i]);
                        printf("VALOR: %.2f\n\n",c2);
                    }
                    else if(nomeproduto[i] == 3)
                    {
                        c3 = 8900 * quantidade[i];
                        printf("PRODUTO: GALAXY BOOK ULTRA\n");
                        printf("QUANTIDADE: %i\n", quantidade[i]);
                        printf("VALOR: %.2f\n\n",c3);
                    }
                    else if(nomeproduto[i] ==  4)
                    {
                        c4 = 10000 * quantidade[i];
                        printf("PRODUTO: MACBOOK PRO\n");
                        printf("QUANTIDADE: %i\n", quantidade[i]);
                        printf("VALOR: %.2f\n\n",c4);
                    }
                    else if(nomeproduto[i] == 5)
                    {
                        c5 = 4500 * quantidade[i];
                        printf("PRODUTO: SAMSUNG S23\n");
                        printf("QUANTIDADE: %i\n", quantidade[i]);
                        printf("VALOR: %.2f\n\n",c5);
                    }
                    else if(nomeproduto[i] == 6)
                    {
                        c6 = 10000 * quantidade[i];
                        printf("PRODUTO: IPHONE 15\n");
                        printf("QUANTIDADE: %i\n", quantidade[i]);
                        printf("VALOR: %.2f\n\n",c6);
                    }
                    else if(nomeproduto[i] == 7)
                    {
                        c7 = 1800 * quantidade[i];
                        printf("PRODUTO: GALAXY WATCH 5\n");
                        printf("QUANTIDADE: %i\n", quantidade[i]);
                        printf("VALOR: %.2f\n\n",c7);
                    }
                    else if(nomeproduto[i] == 8)
                    {
                        c8 = 4500 * quantidade[i];
                        printf("PRODUTO: APPLE WATCH  ULTRA 2\n");
                        printf("QUANTIDADE: %i\n", quantidade[i]);
                        printf("VALOR: %.2f\n\n",c8);
                    }

                    valor = (c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8); 

                    
                }    

                    printf("VALOR TOTAL: R$ %.2f\n\n", valor);

                system("pause");
                system("cls");

                break;

                case 4:
//SAIR DO SISTEMA

                system("cls");
                printf("==================================\n");
                printf("|OBRIGADO POR VISITAR A P4 STORE!|\n");
                printf("==================================\n");
                system("pause");
                validado = 0;

                break;
            
            
            default:
                
                printf("================\n");
                printf("|ERRO DE DIGITO|\n");
                printf("================\n");
                
                system("pause");

                validado = 1;
                break;

    return 0;

            }//SWITCH


        }//WHILE
        

    //IF

    }//IF TELA INICIAL
    
}//INT MAIN()