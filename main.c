# include <stdio.h>
#include <string.h>
# include <stdlib.h>

// Programa de locacao de carros.
main ()
{

     FILE *arq;
     char nome[50];
     int codcli;
     long int cpf[11];
     char rg[9];
     char endereco[30];
     int telefone[10];
     long int dt_nascimento[8];
     long int cart_hab[11];
     int status;
    //char n;
        /*system ("color 8");*/


         system ("color 3f");
         system ("cls");
         printf ("\t=============================================================\n");
         printf ("\t====================LOCADORA=================================\n");
         printf ("\t=============================================================\n\n");

         arq = fopen("Cadastro_Cliente.txt", "wt");  // Cria um arquivo texto para gravação
           if (arq == NULL) // Se nao conseguiu criar
           {
              printf("Problemas na CRIACAO do arquivo\n");
              return;
           }
           // cadastro cliente

             printf("\nNome: ");
             scanf("%[^\n]s",nome);
             fprintf(arq, "Cliente: %.50s\n", nome);

             printf("\nCPF: ");
             scanf("%s",cpf);
             fprintf(arq, "CPF: %.20s\n", cpf);

             printf("\nData Nascimento: ");
             scanf("%s",dt_nascimento);
             fprintf(arq, "Data nascimento: %.8s\n", dt_nascimento);

             printf("\nCarteira de Habilitacao: ");
             scanf("%s",cart_hab);
             fprintf(arq, "Carteira de Habilitacao: %.11s\n", cart_hab);

             printf("\nEndereco: ");
             scanf("%[^\n]",endereco);
             fflush(stdin);
             fprintf(arq, "Endereco: %\n", endereco);


             printf("\nRegistro gravado com sucesso!\n");

             fflush(stdin);

             fclose(arq);


           }
