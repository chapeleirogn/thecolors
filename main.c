#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <mysql.h>
#include <winsock.h>
#include <winsock2.h>

void allusers(void);
void imprime(void);
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

struct rgcad{
    char login[12];
    char passe[12];
    char nome[40];
    char email[35];
    char sexo[15];
    char dnasc[10];
    char permissao[1];
    char idade[2];
    char loginmain[12];
    char passemain[12];
}cadastro;

//***LISTA DE PROTOTIPOS***//
MYSQL_RES *makeQuery(MYSQL conn,char *str);
void printRes(MYSQL_RES *res);
void freeRes(MYSQL_RES *res);

int main()
{
system("color F0");//Instru��o para alterar cor
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("\t\tEscolha uma das Op��es:\n\n");
    printf("1. Administrador\n");
    printf("2. Usu�rio\n");
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
          printf("\nFeito por:\n\nGet�lio F M Neto\nYldervan B Silva\nAnderson M Fortaleza\nLaiza Larissa\nRafael Werner.\n");
          printf("\nTodos os Direitos Reservados.");
          break;
    default:
    printf("Digite uma op��o v�lida!\n");
    }
    return 0;
}

void user ()
{
    system("color F0");//Instru��o para alterar cor
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("\t\tEscolha uma das Op��es:\n\n");
    printf("1. Como est� seu humor hoje?\n");
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
    printf("Digite uma op��o v�lida!\n");
    }
}

void motiv()
{
    system("color 4F");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    MYSQL conexao;
    MYSQL_RES *result;
    MYSQL_ROW lin;
    MYSQL_FIELD *rs;
    int ret;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao,"localhost","root","","thecolors",0,NULL,0)) {
        ret = mysql_query(&conexao,"SELECT * FROM motiv ORDER BY RAND() LIMIT 1;");
        if(ret) {
            printf("Falha ao inserir!\n\n");
        } else {
        result = mysql_store_result(&conexao);
        if(result) {
            rs = mysql_fetch_fields(result);
            while((lin = mysql_fetch_row(result)) != NULL) {
            printf("%s\n",lin[1]);
            }
        }
        }
    mysql_close(&conexao);
    } else {
    printf("Conexao falhou!\n");
    }
    do //Repeti��o para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
           case 0:
                humor();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void feliz()
{
    system("color 6F");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    MYSQL conexao;
    MYSQL_RES *result;
    MYSQL_ROW lin;
    MYSQL_FIELD *rs;
    int ret;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao,"localhost","root","","thecolors",0,NULL,0)) {
        ret = mysql_query(&conexao,"SELECT * FROM feliz ORDER BY RAND() LIMIT 1;");
        if(ret) {
            printf("Falha ao inserir!\n\n");
        } else {
        result = mysql_store_result(&conexao);
        if(result) {
            rs = mysql_fetch_fields(result);
            while((lin = mysql_fetch_row(result)) != NULL) {
            printf("%s\n",lin[1]);
            }
        }
        }
    mysql_close(&conexao);
    } else {
    printf("Conexao falhou!\n");
    }
    do //Repeti��o para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                humor();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

int deprim()
{
    system("color 6F");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    MYSQL conexao;
    MYSQL_RES *result;
    MYSQL_ROW lin;
    MYSQL_FIELD *rs;
    int ret;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao,"localhost","root","","thecolors",0,NULL,0)) {
        ret = mysql_query(&conexao,"SELECT * FROM deprimido ORDER BY RAND() LIMIT 1;");
        if(ret) {
            printf("Falha ao inserir!\n\n");
        } else {
        result = mysql_store_result(&conexao);
        if(result) {
            rs = mysql_fetch_fields(result);
            while((lin = mysql_fetch_row(result)) != NULL) {
            printf("%s\n",lin[1]);
            }
        }
        }
    mysql_close(&conexao);
    } else {
    printf("Conexao falhou!\n");
    }
    do //Repeti��o para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                humor();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void alegre()
{
    system("color E0");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    MYSQL conexao;
    MYSQL_RES *result;
    MYSQL_ROW lin;
    MYSQL_FIELD *rs;
    int ret;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao,"localhost","root","","thecolors",0,NULL,0)) {
        ret = mysql_query(&conexao,"SELECT * FROM alegria ORDER BY RAND() LIMIT 1;");
        if(ret) {
            printf("Falha ao inserir!\n\n");
        } else {
        result = mysql_store_result(&conexao);
        if(result) {
            rs = mysql_fetch_fields(result);
            while((lin = mysql_fetch_row(result)) != NULL) {
            printf("%s\n",lin[1]);
            }
        }
        }
    mysql_close(&conexao);
    } else {
    printf("Conexao falhou!\n");
    }
    do
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                humor();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void triste()
{
    system("color 2F");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    MYSQL conexao;
    MYSQL_RES *result;
    MYSQL_ROW lin;
    MYSQL_FIELD *rs;
    int ret;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao,"localhost","root","","thecolors",0,NULL,0)) {
        ret = mysql_query(&conexao,"SELECT * FROM motiv ORDER BY RAND() LIMIT 1;");
        if(ret) {
            printf("Falha ao inserir!\n\n");
        } else {
        result = mysql_store_result(&conexao);
        if(result) {
            rs = mysql_fetch_fields(result);
            while((lin = mysql_fetch_row(result)) != NULL) {
            printf("%s\n",lin[1]);
            }
        }
        }
    mysql_close(&conexao);
    } else {
    printf("Conexao falhou!\n");
    }
    do //Repeti��o para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                humor();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void confiante()
{
    system("color 1F");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    MYSQL conexao;
    MYSQL_RES *result;
    MYSQL_ROW lin;
    MYSQL_FIELD *rs;
    int ret;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao,"localhost","root","","thecolors",0,NULL,0)) {
        ret = mysql_query(&conexao,"SELECT * FROM confiante ORDER BY RAND() LIMIT 1;");
        if(ret) {
            printf("Falha ao inserir!\n\n");
        } else {
        result = mysql_store_result(&conexao);
        if(result) {
            rs = mysql_fetch_fields(result);
            while((lin = mysql_fetch_row(result)) != NULL) {
            printf("%s\n",lin[1]);
            }
        }
        }
    mysql_close(&conexao);
    } else {
    printf("Conexao falhou!\n");
    }
    do //Repeti��o para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                humor();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void cansado()
{
    system("color 1F");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    MYSQL conexao;
    MYSQL_RES *result;
    MYSQL_ROW lin;
    MYSQL_FIELD *rs;
    int ret;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao,"localhost","root","","thecolors",0,NULL,0)) {
        ret = mysql_query(&conexao,"SELECT * FROM cansado ORDER BY RAND() LIMIT 1;");
        if(ret) {
            printf("Falha ao inserir!\n\n");
        } else {
        result = mysql_store_result(&conexao);
        if(result) {
            rs = mysql_fetch_fields(result);
            while((lin = mysql_fetch_row(result)) != NULL) {
            printf("%s\n",lin[1]);
            }
        }
        }
    mysql_close(&conexao);
    } else {
    printf("Conexao falhou!\n");
    }
    do //Repeti��o para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                humor();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void ansioso()
{
    system("color F0");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    MYSQL conexao;
    MYSQL_RES *result;
    MYSQL_ROW lin;
    MYSQL_FIELD *rs;
    int ret;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao,"localhost","root","","thecolors",0,NULL,0)) {
        ret = mysql_query(&conexao,"SELECT * FROM ansioso ORDER BY RAND() LIMIT 1;");
        if(ret) {
            printf("Falha ao inserir!\n\n");
        } else {
        result = mysql_store_result(&conexao);
        if(result) {
            rs = mysql_fetch_fields(result);
            while((lin = mysql_fetch_row(result)) != NULL) {
            printf("%s\n",lin[1]);
            }
        }
        }
    mysql_close(&conexao);
    } else {
    printf("Conexao falhou!\n");
    }
    do //Repeti��o para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 0:
                humor();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void sono()
{
    system("color 8F");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    MYSQL conexao;
    MYSQL_RES *result;
    MYSQL_ROW lin;
    MYSQL_FIELD *rs;
    int ret;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao,"localhost","root","","thecolors",0,NULL,0)) {
        ret = mysql_query(&conexao,"SELECT * FROM cansado ORDER BY RAND() LIMIT 1;");
        if(ret) {
            printf("Falha ao inserir!\n\n");
        } else {
        result = mysql_store_result(&conexao);
        if(result) {
            rs = mysql_fetch_fields(result);
            while((lin = mysql_fetch_row(result)) != NULL) {
            printf("%s\n",lin[1]);
            }
        }
        }
    mysql_close(&conexao);
    } else {
    printf("Conexao falhou!\n");
    }
    do
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
           case 0:
                humor();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void inseg()
{
    system("color 8F");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    MYSQL conexao;
    MYSQL_RES *result;
    MYSQL_ROW lin;
    MYSQL_FIELD *rs;
    int ret;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao,"localhost","root","","thecolors",0,NULL,0)) {
        ret = mysql_query(&conexao,"SELECT * FROM inseguro ORDER BY RAND() LIMIT 1;");
        if(ret) {
            printf("Falha ao inserir!\n\n");
        } else {
        result = mysql_store_result(&conexao);
        if(result) {
            rs = mysql_fetch_fields(result);
            while((lin = mysql_fetch_row(result)) != NULL) {
            printf("%s\n",lin[1]);
            }
        }
        }
    mysql_close(&conexao);
    } else {
    printf("Conexao falhou!\n");
    }
    do //Repeti��o para perguntar a cor
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
           case 0:
                humor();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void humor ()
{
   system("color F0");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("\t\t====================================================\n");
    printf("\t\t\tEscolha uma op��o de acordo com seu Humor\n");
    printf("\t\t====================================================\n");
    printf("\t\t Como est� seu humor agora?\n\n");
    printf("1. Alegre:\n");
    printf("2. Feliz:\n");
    printf("3. Confiante:\n");
    printf("4. Motivado:\n");
    printf("5. Cansado:\n");
    printf("6. Ansioso:\n");
    printf("7. Deprimido:\n");
    printf("8. Sonolento:\n");
    printf("9. Triste:\n");
    printf("10. Inseguro:\n");
    printf("\n0. Voltar\n");
    scanf("%d", &continuar);
    system("cls || clear");
    switch(continuar)
      {
         case 1:
             alegre();
         break;

         case 2:
             feliz();
        break;

         case 3:
           confiante();
         break;

         case 4:
           motiv();
         break;

         case 5:
           cansado();
         break;

         case 6:
           ansioso();
         break;

         case 7:
           deprim();
         break;

         case 8:
           sono();
         break;

         case 9:
           triste();
         break;

         case 10:
           inseg();
         break;

         case 0:
            user();
         break;
    default:
    printf("Digite uma op��o v�lida!\n");

    }
}

void admin()
{
    system("color F0");//Instru��o para alterar cor
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("\t\tEscolha uma das Op��es:\n\n");
    printf("1. Cadastro de Usu�rio:\n");
    printf("2. Imprimir Registros da DB:\n");
    printf("3. Ordena��o Crescente dos Nomes:\n");
    printf("4. Ordena��o Decrescente dos Nomes:\n");
    printf("5. Significados das Cores:\n");
    printf("6. A Psicologia e sua cor Preferida:\n");
    printf("0. Voltar\n");
    scanf("%d", &continuar);
    system("cls || clear");
    switch(continuar)
    {
        case 1:
          fcadastro();
          break;
        case 2:
        imprime();
          break;
        case 3:
          ordemcres();
            break;
        case 4:
          ordemdecres();
          break;
        case 5:
          signs();
          break;
        case 6:
          psico();
          break;
        case 0:
          main();
          break;
    default:
    printf("Digite uma op��o v�lida!\n");
    }
}


void fcadastro()
{
      fflush(stdin);
      printf("Digite seu Login:\n");
      gets(cadastro.login);
      fflush(stdin);
      printf("Digite sua senha:\n");
      gets(cadastro.passe);
      fflush(stdin);
      printf("Digite o Cargo:\n1. Administrador.\n2. Usu�rio.\n");
      gets(cadastro.permissao);
      fflush(stdin);
      printf("Digite seu Nome:\n");
      gets(cadastro.nome);
      fflush(stdin);
      printf("Digite seu Email:\n");
      gets(cadastro.email);
      fflush(stdin);
      printf("Digite Masculino ou Feminino:\n");
      gets(cadastro.sexo);
      fflush(stdin);
      printf("Digite sua data de nascimento:(xx/xx/xxxx)\n");
      gets(cadastro.dnasc);
      fflush(stdin);
      printf("Digite sua idade:\n");
      gets(cadastro.idade);
      printf("\nCadastro Conclu�do com Sucesso!\n\n");
      my_sql();
}

void my_sql()
{
    int continuar=1;
    char sql[2000] = "INSERT INTO usuarios(login,passe,permissao,nome,email,sexo,dnasc,idade) VALUES('";
    MYSQL conexao;
    mysql_init(&conexao);
    if ( mysql_real_connect(&conexao, "localhost", "root", "", "thecolors", 0, NULL, 0) )
    {
      strcat(sql, cadastro.login);
      strcat(sql, "','");
      strcat(sql, cadastro.passe);
      strcat(sql, "','");
      strcat(sql, cadastro.permissao);
      strcat(sql, "','");
      strcat(sql, cadastro.nome);
      strcat(sql, "','");
      strcat(sql, cadastro.email);
      strcat(sql, "','");
      strcat(sql, cadastro.sexo);
      strcat(sql, "','");
      strcat(sql, cadastro.dnasc);
      strcat(sql, "','");
      strcat(sql, cadastro.idade);
      strcat(sql, "');");

        printf("\nSalvo com Sucesso!\n");
        mysql_query(&conexao, sql);
        mysql_close(&conexao);
    }
    else
    {
        printf("Falha de conexao\n");
        printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
    }
     do //Repeti��o para perguntar a cor
      {
        printf("1. Cadastrar Outro Usu�rio:\n");
        printf("0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
             case 1:
              fcadastro();
             case 0:
              admin();
             break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void imprime()
{
    setlocale(LC_ALL, "portuguese");
    int continuar=1;
    MYSQL conn;//variavel de conexao
    MYSQL_RES *res;//variavel de resultado
    char *query = "select * from usuarios;";//query de teste
    mysql_init(&conn);//INICIALIZA CONN
    if(mysql_real_connect(&conn,"localhost","root","","thecolors",0,NULL,0))
    {
        printf("Conectado!\n");
        res = makeQuery(conn,query);//GUARDA O RESULTADO DA CONSULTA EM RES
        if(res){//SE A CONSULTA RETORNOU ALGO
        printRes(res);//IMPRIME
        freeRes(res);//E LIMPA RES
        }
    }else{//CASO A CONEXAO NAO DEU CERTO
        printf("Erro: %s\n",mysql_error(&conn));//IMPRIME ERRO
    }
    mysql_close(&conn);
    do
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
           case 0:
                admin();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void ordemcres()
{
    setlocale(LC_ALL, "portuguese");
    int continuar=1;
    MYSQL conn;//variavel de conexao
    MYSQL_RES *res;//variavel de resultado
    char *query = "select nome from usuarios ORDER BY nome ASC;";//query de teste
    mysql_init(&conn);//INICIALIZA CONN
    if(mysql_real_connect(&conn,"localhost","root","","thecolors",0,NULL,0))
    {
        printf("Conectado!\n");
        res = makeQuery(conn,query);//GUARDA O RESULTADO DA CONSULTA EM RES
        if(res){//SE A CONSULTA RETORNOU ALGO
        printRes(res);//IMPRIME
        freeRes(res);//E LIMPA RES
        }
    }else{//CASO A CONEXAO NAO DEU CERTO
        printf("Erro: %s\n",mysql_error(&conn));//IMPRIME ERRO
    }
    mysql_close(&conn);
    do
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
           case 0:
                admin();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

void ordemdecres()
{
    setlocale(LC_ALL, "portuguese");
    int continuar=1;
    MYSQL conn;//variavel de conexao
    MYSQL_RES *res;//variavel de resultado
    char *query = "select nome from usuarios ORDER BY nome DESC;";//query de teste
    mysql_init(&conn);//INICIALIZA CONN
    if(mysql_real_connect(&conn,"localhost","root","","thecolors",0,NULL,0))
    {
        printf("Conectado!\n");
        res = makeQuery(conn,query);//GUARDA O RESULTADO DA CONSULTA EM RES
        if(res){//SE A CONSULTA RETORNOU ALGO
        printRes(res);//IMPRIME
        freeRes(res);//E LIMPA RES
        }
    }else{//CASO A CONEXAO NAO DEU CERTO
        printf("Erro: %s\n",mysql_error(&conn));//IMPRIME ERRO
    }
    mysql_close(&conn);
    do
    {
        printf("\n0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
           case 0:
                admin();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

MYSQL_RES *makeQuery(MYSQL conn,char *str){
  setlocale(LC_ALL, "portuguese");
  MYSQL_RES *res;//CRIA VARIAVEL TEMP DE RESULTADO
  MYSQL conexao;//CRIA VARIAVEL TEMP DE CONEXAO
  conexao = conn;//ATRIBUI PARA TEMP A CONN
  if(mysql_query(&conexao,str)){//REALIZA A CONSULTA
    printf("Erro: %s\n",mysql_error(&conexao));//CASO NAO DE CERTO IMPRIME ERRO
  }else{//CASO DE CERTO A CONSULTA
    res = mysql_store_result(&conexao);//GUARDA O RESULTADO EM RES
    if(res){//SE HOUVER RESULTADO
      return res;//RETORNA RES
    }
  }
  return NULL;//NO CASO DE ERRO RETORNA NULL
}

void printRes(MYSQL_RES *res){
  setlocale(LC_ALL, "portuguese");
  MYSQL_ROW rows;//VARIAVEL DE LINHAS(VETOR) (AS TUPLAS DO BANCO)
  int cont;//CONTADOR
  //ENQUANTO AS LINHAS FOR DIFERENTE DE NULL FAZ
  while((rows=mysql_fetch_row(res)) != NULL){
    //REALIZA O FOR PARA CADA CAMPO DO VETOR DE LINHAS
    for(cont=0;cont<mysql_num_fields(res);cont++){
      printf("%s\t",rows[cont]);
    }
    printf("\n\n");
  }
}

void freeRes(MYSQL_RES *res){
  mysql_free_result(res);
}

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
    printf("Digite uma op��o v�lida!\n");

    }
}
void psicverm()
{
    system("color F4");
     printf("A pessoa que gosta dessa cor revela determina��o na busca de seus ideais.\n\nEst� disposta a lutar bravamente para resgatar algo ou algu�m,\npouco se importando se tiver de invadir territ�rios ou enfrentar oposi��es.\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void psiclar()
{
    system("color F6");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("Pessoas que gostam dessa cor mostram confian�a em seus pr�prios recursos e conseguem tudo o que querem.\n\nProcuram ser mais �ntegras e menos agressivas como os que usam o vermelho,\nmas lutam, igualmente, pelos seus ideais.\n\nPrecisam carregar menos as responsabilidades dos outros e delegar poderes para poder relaxar um pouco.\n");
    do //Repeti��o para perguntar a cor
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void psicama()
{
    system("color FE");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta de amarelo possui confian�a em seus pr�prios recursos\ne mostra que � sua intelig�ncia que est� predominando e n�o o emocional.\n\nO amarelo simboliza que, psicologicamente, a pessoa est� sentindo-se acima dos conceitos comuns da sociedade\ne tem necessidade de  conquistar seus ideais � sua maneira e com liberdade de a��o.\n");
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void psicverde()
{
    system("color F2");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta de verde est� ampla em sua alma, � receptiva, firme, simp�tica e procura ser equilibrada em seus pontos de vista.\n\nEst� harmoniosa em gestos e palavras e emana calma aos que se aproximam dela.\nCom o verde, a pessoa se torna boa ouvinte, sens�vel em seus sentimentos, mas forte para ajudar\n\nTamb�m sente sua alma mais tranquila e sabe ser flex�vel quando vem o vendaval.\n");
    do //Repeti��o para perguntar a cor
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void psicazul()
{
    system("color F1");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta de azul tem necessidade de estar entre amigos e ser o centro das aten��es.\n\nTem sempre algo diferente ou interessante para comunicar\ne consegue fazer boas limpezas no emocional de outras pessoas.\n\n� deslumbrante, envolvente e fica sempre acima de qualquer mesquinharia ou mexericos.\n\nAo vestir-se de azul, voc� est�, inconscientemente, transmitindo conhecimento,\nuni�o de credos e purifica��o de  ambientes, tanto pelas palavras, quanto pelo comportamento.\n");
    do //Repeti��o para perguntar a cor
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void psicroxo()
{
    system("color F5");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("Pessoas que gostam dessa cor est�o num n�vel muito elevado, mental e espiritualmente,\nonde sua alma necessita curar outras almas, do cansa�o ou da dor.\n\nA cor violeta est� associada, pelos hindus, ao s�timo chacra, que � o mais elevado deles:\no coron�rio ou sahashara, em s�nscrito.\n\nO coron�rio situa-se acima do cr�nio sem tocar a cabe�a, como se fosse uma coroa.\n\nEle tem a qualidade da fus�o com a Unidade, ou mundo divino.\n");
    do //Repeti��o para perguntar a cor
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void psicmarrom()
{
    system("color F0");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta dessa cor demonstra sede de justi�a.\n\nSilencia para observar uma situa��o e procura ser discreto para solucionar um problema,\nmas, se for necess�rio, intervir� decididamente no assunto,\nprovocando mudan�as fortes num ambiente ou numa personalidade.\n\nEssa pessoa tem senso profundo de colabora��o, mas fica sempre  na posi��o de aguardar e perceber para se adaptar.\n");
    do //Repeti��o para perguntar a cor
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void psicrosa()
{
    system("color FC");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("Pessoas que gostam de rosa s�o pessoas ternas, amorosas, mas que t�m dificuldades de expressar esses sentimentos.\n\nGostariam de agasalhar � todos, mas t�m muitas dificuldade em demonstrar, por medo de serem rejeitados.\n");
    do //Repeti��o para perguntar a cor
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void psicbranco()
{
    system("color 0F");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta dessa cor mostra mente clara e compreensiva.\n\nPossui todos os conhecimentos das cores e tem necessidade de liderar de alguma forma.\n\nO branco significa mente pura, calma e esclarecida, que procura levar a paz aos ambientes em que frequenta.\n\nDenota um cora��o altivo, mas limpo.\n");
    do //Repeti��o para perguntar a cor
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void psicpreto()
{
    system("color F0");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A pessoa que gosta dessa cor mostra que est� se defendendo de aborrecimentos e carrega uma rebeldia secreta.\n\nQuer se sentir forte e poderosa e chamar a aten��o discretamente.\n\nEssa aus�ncia de cores significa que a pessoa tamb�m est� no seu limite para suportar raivas e tristezas\ne necessita estar por cima para enfrentar os desafios e as inseguran�as.\n\nNo preto est� escondida a revolta contra algu�m ou uma situa��o.\n\nSente-se acuada, mas precisa reagir sem demonstr�-lo.\n");
    do //Repeti��o para perguntar a cor
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void psicinza()
{
    system("color F8");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    printf("A Pessoa que gosta de cinza mostra que est� necessitando se resguardar para refletir,\nporque n�o est� �vendo� cores em sua vida.\n\nQuem rejeita o cinza mostra um esp�rito que foge da depress�o.\n\nO cinza est� em pessoas que se fecham com facilidade, mas n�o se revoltam, como os que usam o preto.\n\nO uso exagerado do cinza mostra que essa pessoa n�o percebe\nque est� agindo sempre da mesma maneira para resolver os mesmos problemas sem conseguir total �xito.\n");
    do //Repeti��o para perguntar a cor
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
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}

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
           printf("\nFeito por:\n\nGet�lio F M Neto\nYldervan B Silva\nAnderson M Fortaleza\nLaiza Larissa\nRafael Werner.\n");
           printf("\nTodos os Direitos Reservados.");
         break;

    default:
    printf("Digite uma op��o v�lida!\n");

    }
}

void vermelho ()
{
    system("color F4");
    printf("Voc� escolheu Vermelho:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Vermelho:\n");
        printf("2. Cor oposta ao Vermelho:\n");
        printf("3. Refer�ncias do Vermelho:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Voltar\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("Simbolo da Paix�o, erotismo e sensualidade,");
                printf(" tamb�m pode ser associado ao perigo.");
                printf(" � a cor mais quente que existe.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao vermlho � o Verde.\n\n");
                break;

            case 3:
                printf("Amor, �dio, Sangue, Vida, Fogo, Explos�o, Riqueza, Nobreza, Sensualidade.\n\n");
                break;

            case 4:
                printf("Estimula o aumento da press�o card�aca, e aumenta a respi��o.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void laranja()
{
    system("color F6");
    printf("Voc� escolheu Laranja:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Laranja:\n");
        printf("2. Cor oposta ao Laranja:\n");
        printf("3. Refer�ncias do Laranja:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("Ver�o,calor, alegria e juventude,\n");
                printf("s�o as palavras que melhor definem essa cor.\n");
                printf("No geral, pode aumentar a confian�a e traduzir muito otimismo,\n");
                printf("e at� mesmo estimular o sistema respirat�rio devido ao brilho.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao laranja � o azul.\n\n");
                break;

            case 3:
                printf("Divers�o, Recrea��o, Alegria, Juventude, Fruta, Criatividade.\n\n");
                break;

            case 4:
                printf("Estimula o sistema respira�rio devido ao brilho.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void amarelo()
{
    system("color FE");
    printf("Voc� escolheu Amarelo:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Laranja:\n");
        printf("2. Cor oposta ao Laranja:\n");
        printf("3. Refer�ncias do Laranja:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("Cor quente e brilhante, o amarelo � o simbolo da divindade\n");
                printf("em v�rias culturas por ser a cor do sol.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao Amarelo � o Roxo.\n\n");
                break;

            case 3:
                printf("Sol, Ver�o, Otimismo, Ilumina��o, Inveja, Irrita��o, Felicidade.\n\n");
                break;

            case 4:
                printf(" � capaz de motivar a alegria e despertar a criatividade, agindo como algo que elimina o cansa�o,\n");
                printf(" pode acalmar a excita��o nervosa e at� aliviar dores de cabe�a.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void verde()
{
    system("color F2");
    printf("Voc� escolheu Verde:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Verde:\n");
        printf("2. Cor oposta ao Verde:\n");
        printf("3. Refer�ncias do Verde:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("� a cor da natureza, da ecologia, do meio ambiente,\n");
                printf("da sa�de e vida, do dinheiro, do frescor e da tranquilidade.\n\n");
               break;

            case 2:
                printf("A Cor oposta ao Verde � o Vermelho.\n\n");
                break;

            case 3:
                printf("Natureza, Ecologia, Vida, Sa�de, Dinheiro, Veneno, Jovens, Esperan�a.\n\n");
                break;

            case 4:
                printf("Ajuda na digest�o e Reduz dores de est�mago.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void azul()
{
    system("color F1");
    printf("Voc� escolheu Azul:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Azul:\n");
        printf("2. Cor oposta ao Azul:\n");
        printf("3. Refer�ncias do Azul:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("O Azul � a cor preferida tanto dos homens quanto das mulheres.\n");
                printf("� muito comum vermos dormit�rios pintados de azul,\n");
                printf("pois � uma cor que tamb�m pode servir como calmante.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao Azul � o Laranja.\n\n");
                break;

            case 3:
                printf("Simpatia, Harmonia, Frio, Calma, Amizade, Confian�a, Divindade.\n\n");
                break;

            case 4:
                printf("A Cor Azul faz o corpo produzir subst�ncias qu�micas calmantes.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void roxo()
{
    system("color F5");
    printf("Voc� escolheu Roxo:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Roxo:\n");
        printf("2. Cor oposta ao Roxo:\n");
        printf("3. Refer�ncias do Roxo:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("Relaciona-se � intui��o, mas pode gerar melancolia.\n");
                printf("� considerado a cor da realeza.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao Roxo � o Amarelo.\n\n");
                break;

            case 3:
                printf("Poder, Sofistica��o, Vaidade, Sensualidade, Magia, Esoterismo, Desejo.\n\n");
                break;

            case 4:
                printf(" Reduz a ansiedade e o medo agindo diretamente no cora��o e desperta o poder da criatividade.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void marrom()
{
    system("color F0");
    printf("Voc� escolheu Marrom:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Marrom:\n");
        printf("2. Cor oposta ao Marrom:\n");
        printf("3. Refer�ncias do Marrom:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("� a cor da terra, da natureza, da riqueza, do cacau, do caf� e da madeira.\n");
                printf("� muito comum vermos marcas de empresas de constru��o utilizando-a,\n");
                printf("por estar relacionada a terra e a madeira tamb�m.\n\n");
                break;

            case 2:
                printf("N�o Possui cor oposta.\n\n");
                break;

            case 3:
                printf("Feio, Desagrad�vel, Podre, Terra, Aconchego, Caf�, Madeira, Bronze.\n\n");
                break;

            case 4:
                printf("Transmite energia positiva e est� ligada ao s�lido e seguro.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void rosa()
{
    system("color FC");
    printf("Voc� escolheu o Rosa:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Rosa:\n");
        printf("2. Cor oposta ao Rosa:\n");
        printf("3. Refer�ncias do Rosa:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("� a cor da feminilidade, flores, romantismo, delicadeza, gentileza e inoc�ncia.\n");
                printf("A cor rosa � muti outilizada em ambientes infantis e desenhos infantis.\n\n");
                break;

            case 2:
                printf("N�o Possui cor oposta.\n\n");
                break;

            case 3:
                printf("Infantil, Beb�s, Ingenuidade, Delicadeza, Flores, Romantismo.\n\n");
                break;

            case 4:
                printf("Tem um efeito positivo e de motiva��o sobre as pessoas e ajuda a relaxar.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void branco()
{
    system("color 0F");
    printf("Voc� escolheu Branco:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Branco:\n");
        printf("2. Cor oposta ao Branco:\n");
        printf("3. Refer�ncias do Branco:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("� a cor da paz, do bem, da pureza, da simpicidade.\n");
                printf("O branco tamb�m pode sugerir sofistica��o e fineza, dependnedo de sua utiliza��o.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao Branco � o Preto.\n\n");
                break;

            case 3:
                printf("Princ�pio, Ressurei��o, Bem, Pureza, Inoc�ncia, Amizade, Noivas, Status.\n\n");
                break;

            case 4:
                printf("Causa sensa��o de Paz e tranquilidade. A pessoa que se atrai por essa cor mostra mente clara e compreensiva.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void preto()
{
    system("color F0");
    printf("Voc� escolheu Preto:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Preto:\n");
        printf("2. Cor oposta ao Preto:\n");
        printf("3. Refer�ncias do Preto:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("Cor da morte e do luto. O preto associa-se a dor,\n");
                printf("Tristeza e melancolia, mas pode transformar-se em mist�rio, poder e estilo.\n\n");
                break;

            case 2:
                printf("A Cor oposta ao Preto � o Branco.\n\n");
                break;

            case 3:
                printf("Fim, Dor, Luto, Morte, Azar, Autoridades, Eleg�ncia, Sofistica��o, Duro.\n\n");
                break;

            case 4:
                printf("No preto est� escondida a revolta contra algu�m ou uma situa��o.\n");
                printf("Sente-se acuada, mas precisa reagir sem demonstr�-lo.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
void cinza()
{
    system("color F8");
    printf("Voc� escolheu Cinza:\n");
    int continuar=1;
    setlocale(LC_ALL, "portuguese");
    do //Repeti��o para perguntar a cor
    {
        printf("\t\tEscolha uma das Op��es:\n\n");
        printf("1. Significado do Cinza:\n");
        printf("2. Cor oposta ao Cinza:\n");
        printf("3. Refer�ncias do Cinza:\n");
        printf("4. Efeitos causados na pessoa:\n");
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                printf("� poss�vel traduzir eleg�ncia, velhice, t�dio, respeito e at�\n");
                printf("tristeza diante desta cor neutra.\n");
                printf("Por�m, a mesma d� �nfase aos valores intelectuais e espirituais.\n\n");
                break;

            case 2:
                printf("N�o Possui cor oposta por ser Neutra.\n\n");
                break;

            case 3:
                printf("Neutralidade, Indiferen�a, Velhice, Passado, Pobreza.\n\n");
                break;

            case 4:
                printf("O Cinza � a cor das diversidades e at� da depress�o.\n\n");
                break;

            case 0:
                signs();
                break;

            default:
                printf("Digite uma op��o v�lida!\n");
        }
    } while(continuar);
}
