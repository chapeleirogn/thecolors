#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <mysql.h>
#include <winsock.h>
#include <winsock2.h>

void finish_with_error(MYSQL *con)
{
  fprintf(stderr, "%s\n", mysql_error(con));
  mysql_close(con);
  exit(1);
}

void imprime(void);
void allusers(void);
void espuser(void);
void main2(void);
void psico(void);
void psicverm(void);
void psicama(void);
void psiclar(void);
void psicverde(void);
void psicazul(void);
void psicroxo(void);
void psicrosa(void);
void psicmarrom(void);
void psicbranco(void);
void psicpreto(void);
void psicinza(void);
void vermelho(void);
void amarelo(void);
void laranja(void);
void verde(void);
void azul(void);
void roxo(void);
void rosa(void);
void marrom(void);
void branco(void);
void preto(void);
void cinza(void);
void signs(void);
void admin(void);
void deluser(void);
void user(void);
void humor(void);
void fcadastro(void);
/*********************************/
/*Struct principal de cadastro*/
struct rgcad{
    char login[12];
    char passe[12];
    char nome[40];
    char email[35];
    char sexo[15];
    char dnasc[10];
    char permissao[1];
    int idade[2];
    int contuser;
}cadastro[100];//Máximo de 20 Cadastros
    struct rgcad cadglobal;//Struct para armazenar apenas a quantidade de usuários a cadastrar
    struct rgcad excluir;//Struct vazia para excluir usuários
int main ()
{
system("color F0");//Instrução para alterar cor
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("\t\tEscolha uma das Opções:\n\n");
    printf("1. Administrador\n");
    printf("2. Usuário\n");
    printf("3. Salvar no MySql:\n");
    printf("0. Sair\n");
    scanf("%d", &continuar);
    system("cls || clear");
    switch(continuar)
    {
        case 1:
          admin();
          break;
        case 2:
          user();
          break;
        case 0:
          printf("\nFeito por:\n\nGetúlio F M Neto\nYldervan B Silva\nAnderson M Fortaleza\nLaiza Larissa\nRafael Werner.\n");
          printf("\nTodos os Direitos Reservados.");
          break;
    default:
    printf("Digite uma opção válida!\n");
    }
    return 0;
}
void user ()
{
    system("color F0");//Instrução para alterar cor
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("\t\tEscolha uma das Opções:\n\n");
    printf("1. Como está seu humor hoje?\n");
    printf("2. Qual sua cor Preferida?\n");
    printf("3. Quer saber o significado das Cores?\n");
    printf("0. Voltar\n");
    scanf("%d", &continuar);
    system("cls || clear");
    switch(continuar)
    {
        case 1:
          humor();
          break;
        case 2:
          psico();
          break;
        case 3:
          signs();
          break;
        case 0:
          main();
          break;
    default:
    printf("Digite uma opção válida!\n");
    }
}
void humor ()
{
   system("color F0");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("\t\t====================================================\n");
    printf("\t\t\tEscolha uma opção de acordo com seu Humor\n");
    printf("\t\t====================================================\n");
    printf("\t\t Como está seu humor agora?\n\n");
    printf("1. Alegre:\n");
    printf("2. Feliz:\n");
    printf("3. Pensativo:\n");
    printf("4. Confiante:\n");
    printf("5. Motivado:\n");
    printf("6. Cansado:\n");
    printf("7. Ansioso:\n");
    printf("8. Deprimido:\n");
    printf("9. Sonolento:\n");
    printf("10. Triste:\n");
    printf("11. Inseguro:\n");
    printf("\n0. Voltar\n");
    scanf("%d", &continuar);
    system("cls || clear");
    switch(continuar)
      {
         case 1:
             psicverm();
         break;

         case 2:
             psiclar();
        break;

         case 3:
           psicama();
         break;

         case 4:
           psicverde();
         break;

         case 5:
           psicazul();
         break;

         case 6:
           psicroxo();
         break;

         case 7:
           psicmarrom();
         break;

         case 8:
           psicrosa();
         break;

         case 9:
           psicbranco();
         break;

         case 10:
           psicpreto();
         break;

         case 11:
           psicinza();
         break;

         case 0:
            user();
         break;
    default:
    printf("Digite uma opção válida!\n");

    }
}
/*********************************************************/
/*Função Admin com o menu para escolher a opção certa*/
void admin()
{
    system("color F0");//Instrução para alterar cor
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("\t\tEscolha uma das Opções:\n\n");
    printf("1. Cadastro de Usuário:\n");
    printf("2. Salvar no MYSQL:\n");
    printf("3. Excluir Usuário Cadastrado:\n");
    printf("4. Significados das Cores:\n");
    printf("5. A Psicologia e sua cor Preferida:\n");
    printf("0. Voltar\n");
    scanf("%d", &continuar);
    system("cls || clear");
    switch(continuar)
    {
        case 1:
          fcadastro();
          break;
        case 2:
          my_sql();
          break;
        case 3:
          printf("Em Breve!\n");
            break;
        case 4:
          printf("Em Breve!\n");
          break;
        case 5:
          psico();
          break;
        case 0:
          main();
          break;
    default:
    printf("Digite uma opção válida!\n");
    }
}
/*************************************************/
/*Função de Cadastro de Usuários*/
void fcadastro()
{

      int i, continuar=1;
      printf("Quantos Usuários deseja cadastrar? (Máximo 100)\n");
      scanf("%i", &cadglobal.contuser);//Armazena a quantidade numa variavel global
      for (i=0;i<cadglobal.contuser;i++){
      fflush(stdin);
      printf("Digite seu Login:\n");
      gets(cadastro[i].login);
      fflush(stdin);
      printf("Digite sua senha:\n");
      gets(cadastro[i].passe);
      fflush(stdin);
      printf("Digite o Cargo:\n1. Administrador.\n2. Usuário.\n");
      gets(cadastro[i].permissao);
      fflush(stdin);
      printf("Digite seu Nome:\n");
      gets(cadastro[i].nome);
      fflush(stdin);
      printf("Digite seu Email:\n");
      gets(cadastro[i].email);
      fflush(stdin);
      printf("Digite Masculino ou Feminino:\n");
      gets(cadastro[i].sexo);
      fflush(stdin);
      printf("Digite sua data de nascimento:(xx/xx/xxxx)\n");
      gets(cadastro[i].dnasc);
      fflush(stdin);
      printf("Digite sua idade:\n");
      gets(cadastro[i].idade);
      printf("\nCadastro Concluído com Sucesso!\n\n");

     do //Repetição para perguntar a cor
      {
        printf("0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
           case 0:
                admin();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
}

void my_sql()
{
    int i;
    char sql[200];
        MYSQL *con = mysql_init(NULL);

    if (con == NULL)
    {
      fprintf(stderr, "%s\n", mysql_error(con));
      exit(1);
    }

    if (mysql_real_connect(con, "localhost", "root", "",
          "thecolors", 0, NULL, 0) == NULL)
    {
      finish_with_error(con);
    }

    if (mysql_query(con, "CREATE TABLE IF NOT EXISTS usuarios(login VARCHAR, passe VARCHAR, permissao VARCHAR, nome VARCHAR, email VARCHAR, sexo VARCHAR, dnasc VARCHAR, idade VARCHAR)")) {
      finish_with_error(con);
    }
    for (i=0;i<cadglobal.contuser;i++)
    {
      if (sprintf(sql, "INSERT INTO usuarios VALUES('%s','%s','%s','%s','%s','%s','%s','%s')",
            cadastro[i].login,
            cadastro[i].passe,
            cadastro[i].permissao,
            cadastro[i].nome,
            cadastro[i].email,
            cadastro[i].sexo,
            cadastro[i].dnasc,
            cadastro[i].idade)) {
      finish_with_error(con);
    }
  mysql_close(con);
  exit(0);
}
}
/*************************************************/
/*Função para Escolher a cor Preferida e Imprimir o Significado Psicologico dela*/
void psico ()
{
    system("color F0");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("\t\t====================================================\n");
    printf("\t\t\tO Significado Psicologico das Cores na pessoa\n");
    printf("\t\t====================================================\n");
    printf("\t\t Escolha sua cor Preferida:\n\n");
    printf("1. Vermelho:\n");
    printf("2. Laranja:\n");
    printf("3. Amarelo:\n");
    printf("4. Verde:\n");
    printf("5. Azul:\n");
    printf("6. Roxo:\n");
    printf("7. Marrom:\n");
    printf("8. Rosa:\n");
    printf("9. Branco:\n");
    printf("10. Preto:\n");
    printf("11. Cinza:\n");
    printf("\n12. Significado das Cores:\n");
    printf("\n0. Menu Principal\n");
    scanf("%d", &continuar);
    system("cls || clear");
    switch(continuar)
      {
         case 1:
             psicverm();
         break;

         case 2:
             psiclar();
                    break;

         case 3:
           psicama();
         break;

         case 4:
           psicverde();
         break;

         case 5:
           psicazul();
         break;

         case 6:
           psicroxo();
         break;

         case 7:
           psicmarrom();
         break;

         case 8:
           psicrosa();
         break;

         case 9:
           psicbranco();
         break;

         case 10:
           psicpreto();
         break;

         case 11:
           psicinza();
         break;

         case 12:
            signs();
        break;

         case 0:
            main();
         break;
    default:
    printf("Digite uma opção válida!\n");

    }
}
/*Todas as Funções com Iniciais "Psic" possuem um printf com o significado psicologico da cor*/
void psicverm()
{
    system("color F4");
     printf("A pessoa que gosta dessa cor revela determinação na busca de seus ideais.\n\nEstá disposta a lutar bravamente para resgatar algo ou alguém,\npouco se importando se tiver de invadir territórios ou enfrentar oposições.\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
           case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void psiclar()
{
    system("color F6");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("Pessoas que gostam dessa cor mostram confiança em seus próprios recursos e conseguem tudo o que querem.\n\nProcuram ser mais íntegras e menos agressivas como os que usam o vermelho,\nmas lutam, igualmente, pelos seus ideais.\n\nPrecisam carregar menos as responsabilidades dos outros e delegar poderes para poder relaxar um pouco.\n");
    do //Repetição para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void psicama()
{
    system("color FE");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta de amarelo possui confiança em seus próprios recursos\ne mostra que é sua inteligência que está predominando e não o emocional.\n\nO amarelo simboliza que, psicologicamente, a pessoa está sentindo-se acima dos conceitos comuns da sociedade\ne tem necessidade de  conquistar seus ideais à sua maneira e com liberdade de ação.\n");
    do
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void psicverde()
{
    system("color F2");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta de verde está ampla em sua alma, é receptiva, firme, simpática e procura ser equilibrada em seus pontos de vista.\n\nEstá harmoniosa em gestos e palavras e emana calma aos que se aproximam dela.\nCom o verde, a pessoa se torna boa ouvinte, sensível em seus sentimentos, mas forte para ajudar\n\nTambém sente sua alma mais tranquila e sabe ser flexível quando vem o vendaval.\n");
    do //Repetição para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void psicazul()
{
    system("color F1");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta de azul tem necessidade de estar entre amigos e ser o centro das atenções.\n\nTem sempre algo diferente ou interessante para comunicar\ne consegue fazer boas limpezas no emocional de outras pessoas.\n\nÉ deslumbrante, envolvente e fica sempre acima de qualquer mesquinharia ou mexericos.\n\nAo vestir-se de azul, você está, inconscientemente, transmitindo conhecimento,\nunião de credos e purificação de  ambientes, tanto pelas palavras, quanto pelo comportamento.\n");
    do //Repetição para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void psicroxo()
{
    system("color F5");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("Pessoas que gostam dessa cor estão num nível muito elevado, mental e espiritualmente,\nonde sua alma necessita curar outras almas, do cansaço ou da dor.\n\nA cor violeta está associada, pelos hindus, ao sétimo chacra, que é o mais elevado deles:\no coronário ou sahashara, em sânscrito.\n\nO coronário situa-se acima do crânio sem tocar a cabeça, como se fosse uma coroa.\n\nEle tem a qualidade da fusão com a Unidade, ou mundo divino.\n");
    do //Repetição para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
           case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void psicmarrom()
{
    system("color F0");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta dessa cor demonstra sede de justiça.\n\nSilencia para observar uma situação e procura ser discreto para solucionar um problema,\nmas, se for necessário, intervirá decididamente no assunto,\nprovocando mudanças fortes num ambiente ou numa personalidade.\n\nEssa pessoa tem senso profundo de colaboração, mas fica sempre  na posição de aguardar e perceber para se adaptar.\n");
    do //Repetição para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void psicrosa()
{
    system("color FC");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("Pessoas que gostam de rosa são pessoas ternas, amorosas, mas que têm dificuldades de expressar esses sentimentos.\n\nGostariam de agasalhar à todos, mas têm muitas dificuldade em demonstrar, por medo de serem rejeitados.\n");
    do //Repetição para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void psicbranco()
{
    system("color 0F");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta dessa cor mostra mente clara e compreensiva.\n\nPossui todos os conhecimentos das cores e tem necessidade de liderar de alguma forma.\n\nO branco significa mente pura, calma e esclarecida, que procura levar a paz aos ambientes em que frequenta.\n\nDenota um coração altivo, mas limpo.\n");
    do //Repetição para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void psicpreto()
{
    system("color F0");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta dessa cor mostra que está se defendendo de aborrecimentos e carrega uma rebeldia secreta.\n\nQuer se sentir forte e poderosa e chamar a atenção discretamente.\n\nEssa ausência de cores significa que a pessoa também está no seu limite para suportar raivas e tristezas\ne necessita estar por cima para enfrentar os desafios e as inseguranças.\n\nNo preto está escondida a revolta contra alguém ou uma situação.\n\nSente-se acuada, mas precisa reagir sem demonstrá-lo.\n");
    do //Repetição para perguntar a cor
    {
         printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void psicinza()
{
    system("color F8");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A Pessoa que gosta de cinza mostra que está necessitando se resguardar para refletir,\nporque não está “vendo” cores em sua vida.\n\nQuem rejeita o cinza mostra um espírito que foge da depressão.\n\nO cinza está em pessoas que se fecham com facilidade, mas não se revoltam, como os que usam o preto.\n\nO uso exagerado do cinza mostra que essa pessoa não percebe\nque está agindo sempre da mesma maneira para resolver os mesmos problemas sem conseguir total êxito.\n");
    do //Repetição para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
           case 0:
                psico();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
/***************************************************************************/
/*Função com Menu para Imprimir Significado das Cores e outras Informações*/
/***************************************************************************/
void signs ()
{
    system("color F0");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("\t\tEscolha uma das Cores:\n\n");
    printf("1. Vermelho:\n");
    printf("2. Laranja:\n");
    printf("3. Amarelo:\n");
    printf("4. Verde:\n");
    printf("5. Azul:\n");
    printf("6. Roxo:\n");
    printf("7. Marrom:\n");
    printf("8. Rosa:\n");
    printf("9. Branco:\n");
    printf("10. Preto:\n");
    printf("11. Cinza:\n");
    printf("12. Menu Principal\n");
    printf("0. Encerrar\n");
    scanf("%d", &continuar);
    system("cls || clear");
    switch(continuar)
      {
         case 1:
           vermelho();
         break;

         case 2:
           laranja();
         break;

         case 3:
           amarelo();
         break;

         case 4:
           verde();
         break;

         case 5:
           azul();
         break;

         case 6:
           roxo();
         break;

         case 7:
           marrom();
         break;

         case 8:
           rosa();
         break;

         case 9:
           branco();
         break;

         case 10:
           preto();
         break;

         case 11:
           cinza();
         break;

         case 12:
            main();
            break;

         case 0:
           printf("\nFeito por:\n\nGetúlio F M Neto\nYldervan B Silva\nAnderson M Fortaleza\nLaiza Larissa\nRafael Werner.\n");
           printf("\nTodos os Direitos Reservados.");
         break;

    default:
    printf("Digite uma opção válida!\n");

    }
}
/*************************************************/
/*Todas as Funções de cores Imprimem: Significado, Cor oposta, Referências e Efeito causado na Pessoa*/
void vermelho ()
{
    system("color F4");
    printf("Você escolheu Vermelho:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Vermelho:\n");
        printf("2. Cor oposta ao Vermelho:\n");
        printf("3. Referências do Vermelho:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("Simbolo da Paixão, erotismo e sensualidade,");
                printf(" também pode ser associado ao perigo.");
                printf(" É a cor mais quente que existe.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao vermlho é o Verde.\n\n");
                break;

            case 3:
                printf("Amor, ódio, Sangue, Vida, Fogo, Explosão, Riqueza, Nobreza, Sensualidade.\n\n");
                break;

            case 4:
                printf("Estimula o aumento da pressão cardíaca, e aumenta a respição.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void laranja()
{
    system("color F6");
    printf("Você escolheu Laranja:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Laranja:\n");
        printf("2. Cor oposta ao Laranja:\n");
        printf("3. Referências do Laranja:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("Verão,calor, alegria e juventude,\n");
                printf("são as palavras que melhor definem essa cor.\n");
                printf("No geral, pode aumentar a confiança e traduzir muito otimismo,\n");
                printf("e até mesmo estimular o sistema respiratório devido ao brilho.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao laranja é o azul.\n\n");
                break;

            case 3:
                printf("Diversão, Recreação, Alegria, Juventude, Fruta, Criatividade.\n\n");
                break;

            case 4:
                printf("Estimula o sistema respiraório devido ao brilho.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void amarelo()
{
    system("color FE");
    printf("Você escolheu Amarelo:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Laranja:\n");
        printf("2. Cor oposta ao Laranja:\n");
        printf("3. Referências do Laranja:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("Cor quente e brilhante, o amarelo é o simbolo da divindade\n");
                printf("em várias culturas por ser a cor do sol.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao Amarelo é o Roxo.\n\n");
                break;

            case 3:
                printf("Sol, Verão, Otimismo, Iluminação, Inveja, Irritação, Felicidade.\n\n");
                break;

            case 4:
                printf(" É capaz de motivar a alegria e despertar a criatividade, agindo como algo que elimina o cansaço,\n");
                printf(" pode acalmar a excitação nervosa e até aliviar dores de cabeça.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void verde()
{
    system("color F2");
    printf("Você escolheu Verde:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Verde:\n");
        printf("2. Cor oposta ao Verde:\n");
        printf("3. Referências do Verde:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("É a cor da natureza, da ecologia, do meio ambiente,\n");
                printf("da saúde e vida, do dinheiro, do frescor e da tranquilidade.\n\n");
               break;

            case 2:
                printf("A Cor oposta ao Verde é o Vermelho.\n\n");
                break;

            case 3:
                printf("Natureza, Ecologia, Vida, Saúde, Dinheiro, Veneno, Jovens, Esperança.\n\n");
                break;

            case 4:
                printf("Ajuda na digestão e Reduz dores de estômago.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void azul()
{
    system("color F1");
    printf("Você escolheu Azul:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Azul:\n");
        printf("2. Cor oposta ao Azul:\n");
        printf("3. Referências do Azul:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("O Azul é a cor preferida tanto dos homens quanto das mulheres.\n");
                printf("É muito comum vermos dormitórios pintados de azul,\n");
                printf("pois é uma cor que também pode servir como calmante.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao Azul é o Laranja.\n\n");
                break;

            case 3:
                printf("Simpatia, Harmonia, Frio, Calma, Amizade, Confiança, Divindade.\n\n");
                break;

            case 4:
                printf("A Cor Azul faz o corpo produzir substâncias químicas calmantes.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void roxo()
{
    system("color F5");
    printf("Você escolheu Roxo:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Roxo:\n");
        printf("2. Cor oposta ao Roxo:\n");
        printf("3. Referências do Roxo:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("Relaciona-se à intuição, mas pode gerar melancolia.\n");
                printf("É considerado a cor da realeza.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao Roxo é o Amarelo.\n\n");
                break;

            case 3:
                printf("Poder, Sofisticação, Vaidade, Sensualidade, Magia, Esoterismo, Desejo.\n\n");
                break;

            case 4:
                printf(" Reduz a ansiedade e o medo agindo diretamente no coração e desperta o poder da criatividade.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void marrom()
{
    system("color F0");
    printf("Você escolheu Marrom:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Marrom:\n");
        printf("2. Cor oposta ao Marrom:\n");
        printf("3. Referências do Marrom:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("É a cor da terra, da natureza, da riqueza, do cacau, do café e da madeira.\n");
                printf("É muito comum vermos marcas de empresas de construção utilizando-a,\n");
                printf("por estar relacionada a terra e a madeira também.\n\n");
                break;

            case 2:
                printf("Não Possui cor oposta.\n\n");
                break;

            case 3:
                printf("Feio, Desagradável, Podre, Terra, Aconchego, Café, Madeira, Bronze.\n\n");
                break;

            case 4:
                printf("Transmite energia positiva e está ligada ao sólido e seguro.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void rosa()
{
    system("color FC");
    printf("Você escolheu o Rosa:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Rosa:\n");
        printf("2. Cor oposta ao Rosa:\n");
        printf("3. Referências do Rosa:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("É a cor da feminilidade, flores, romantismo, delicadeza, gentileza e inocência.\n");
                printf("A cor rosa é muti outilizada em ambientes infantis e desenhos infantis.\n\n");
                break;

            case 2:
                printf("Não Possui cor oposta.\n\n");
                break;

            case 3:
                printf("Infantil, Bebês, Ingenuidade, Delicadeza, Flores, Romantismo.\n\n");
                break;

            case 4:
                printf("Tem um efeito positivo e de motivação sobre as pessoas e ajuda a relaxar.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void branco()
{
    system("color 0F");
    printf("Você escolheu Branco:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Branco:\n");
        printf("2. Cor oposta ao Branco:\n");
        printf("3. Referências do Branco:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("É a cor da paz, do bem, da pureza, da simpicidade.\n");
                printf("O branco também pode sugerir sofisticação e fineza, dependnedo de sua utilização.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao Branco é o Preto.\n\n");
                break;

            case 3:
                printf("Princípio, Ressureição, Bem, Pureza, Inocência, Amizade, Noivas, Status.\n\n");
                break;

            case 4:
                printf("Causa sensação de Paz e tranquilidade. A pessoa que se atrai por essa cor mostra mente clara e compreensiva.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void preto()
{
    system("color F0");
    printf("Você escolheu Preto:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Preto:\n");
        printf("2. Cor oposta ao Preto:\n");
        printf("3. Referências do Preto:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("Cor da morte e do luto. O preto associa-se a dor,\n");
                printf("Tristeza e melancolia, mas pode transformar-se em mistério, poder e estilo.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao Preto é o Branco.\n\n");
                break;

            case 3:
                printf("Fim, Dor, Luto, Morte, Azar, Autoridades, Elegância, Sofisticação, Duro.\n\n");
                break;

            case 4:
                printf("No preto está escondida a revolta contra alguém ou uma situação.\n");
                printf("Sente-se acuada, mas precisa reagir sem demonstrá-lo.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
void cinza()
{
    system("color F8");
    printf("Você escolheu Cinza:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repetição para perguntar a cor
    {
        printf("\t\tEscolha uma das Opções:\n\n");
        printf("1. Significado do Cinza:\n");
        printf("2. Cor oposta ao Cinza:\n");
        printf("3. Referências do Cinza:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("É possível traduzir elegância, velhice, tédio, respeito e até\n");
                printf("tristeza diante desta cor neutra.\n");
                printf("Porém, a mesma dá ênfase aos valores intelectuais e espirituais.\n\n");
                break;

            case 2:
                printf("Não Possui cor oposta por ser Neutra.\n\n");
                break;

            case 3:
                printf("Neutralidade, Indiferença, Velhice, Passado, Pobreza.\n\n");
                break;

            case 4:
                printf("O Cinza é a cor das diversidades e até da depressão.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma opção válida!\n");
        }
    } while(continuar);
}
