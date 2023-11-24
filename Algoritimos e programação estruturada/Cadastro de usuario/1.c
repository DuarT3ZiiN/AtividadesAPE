#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USERS 1000
#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

typedef struct
{
    int id;
    char nome[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char sexo[MAX_NAME_LENGTH];
    char endereco[MAX_ADDRESS_LENGTH];
    double altura;
    int vacina;
} Usuario;

Usuario usuarios[MAX_USERS];
int numUsuarios = 0;

int gerarID()
{
    return rand();
}

int validarEmail(char *email)
{
    while (*email)
    {
        if (*email == '@')
        {
            return 1;
        }
        email++;
    }
    return 0;
}

int validarSexo(char *sexo)
{
    if (strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "Indiferente") == 0)
    {
        return 1;
    }
    return 0;
}

int validarAltura(double altura)
{
    return (altura >= 1.0 && altura <= 2.0);
}

void imprimirUsuario(Usuario *user)
{
    printf("ID: %d\n", user->id);
    printf("Nome: %s\n", user->nome);
    printf("Email: %s\n", user->email);
    printf("Sexo: %s\n", user->sexo);
    printf("Endereço: %s\n", user->endereco);
    printf("Altura: %.2f\n", user->altura);
    printf("Vacina: %s\n", user->vacina ? "Sim" : "Não");
}

void incluirUsuario()
{
    if (numUsuarios < MAX_USERS)
    {
        Usuario novoUsuario;
        novoUsuario.id = gerarID();

        printf("Digite o nome completo: ");
        scanf("%s", novoUsuario.nome);

        printf("Digite o email: ");
        scanf("%s", novoUsuario.email);
        while (!validarEmail(novoUsuario.email))
        {
            printf("Email inválido. Digite novamente: ");
            scanf("%s", novoUsuario.email);
        }

        printf("Digite o sexo (Feminino/Masculino/Indiferente): ");
        scanf("%s", novoUsuario.sexo);
        while (!validarSexo(novoUsuario.sexo))
        {
            printf("Sexo inválido. Digite novamente: ");
            scanf("%s", novoUsuario.sexo);
        }

        printf("Digite o endereço: ");
        scanf("%s", novoUsuario.endereco);

        printf("Digite a altura (entre 1 e 2 metros): ");
        scanf("%lf", &novoUsuario.altura);
        while (!validarAltura(novoUsuario.altura))
        {
            printf("Altura inválida. Digite novamente: ");
            scanf("%lf", &novoUsuario.altura);
        }

        printf("A pessoa foi vacinada? (1 para Sim / 0 para Não): ");
        scanf("%d", &novoUsuario.vacina);

        usuarios[numUsuarios++] = novoUsuario;
        printf("Usuário cadastrado com sucesso!\n");
    }
    else
    {
        printf("Limite de usuários atingido.\n");
    }
}

void editarUsuario()
{
    int id;
    printf("Digite o ID do usuário que deseja editar: ");
    scanf("%d", &id);

    int encontrado = 0;
    for (int i = 0; i < numUsuarios; i++)
    {
        if (usuarios[i].id == id)
        {
            printf("Digite o novo nome completo: ");
            scanf("%s", usuarios[i].nome);

            printf("Digite o novo email: ");
            scanf("%s", usuarios[i].email);
            while (!validarEmail(usuarios[i].email))
            {
                printf("Email inválido. Digite novamente: ");
                scanf("%s", usuarios[i].email);
            }

            printf("Digite o novo sexo (Feminino/Masculino/Indiferente): ");
            scanf("%s", usuarios[i].sexo);
            while (!validarSexo(usuarios[i].sexo))
            {
                printf("Sexo inválido. Digite novamente: ");
                scanf("%s", usuarios[i].sexo);
            }

            printf("Digite o novo endereço: ");
            scanf("%s", usuarios[i].endereco);

            printf("Digite a nova altura (entre 1 e 2 metros): ");
            scanf("%lf", &usuarios[i].altura);
            while (!validarAltura(usuarios[i].altura))
            {
                printf("Altura inválida. Digite novamente: ");
                scanf("%lf", &usuarios[i].altura);
            }

            printf("A pessoa foi vacinada? (1 para Sim / 0 para Não): ");
            scanf("%d", &usuarios[i].vacina);

            printf("Usuário editado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("Usuário não encontrado.\n");
    }
}

void excluirUsuario()
{
    int id;
    printf("Digite o ID do usuário que deseja excluir: ");
    scanf("%d", &id);

    int encontrado = 0;
    for (int i = 0; i < numUsuarios; i++)
    {
        if (usuarios[i].id == id)
        {
            for (int j = i; j < numUsuarios - 1; j++)
            {
                usuarios[j] = usuarios[j + 1];
            }
            numUsuarios--;
            printf("Usuário excluído com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("Usuário não encontrado.\n");
    }
}

void buscarUsuarioPorEmail()
{
    char email[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuário que deseja buscar: ");
    scanf("%s", email);

    int encontrado = 0;
    for (int i = 0; i < numUsuarios; i++)
    {
        if (strcmp(usuarios[i].email, email) == 0)
        {
            printf("Usuário encontrado:\n");
            imprimirUsuario(&usuarios[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("Usuário não encontrado.\n");
    }
}

void imprimirTodosUsuarios()
{
    if (numUsuarios > 0)
    {
        printf("Todos os usuários cadastrados:\n");
        for (int i = 0; i < numUsuarios; i++)
        {
            imprimirUsuario(&usuarios[i]);
            printf("\n");
        }
    }
    else
    {
        printf("Nenhum usuário cadastrado.\n");
    }
}

int main()
{
    srand(time(NULL));

    char opcao;
    do
    {
        printf("\nEscolha uma opção:\n");
        printf("1. Incluir usuário\n");
        printf("2. Editar usuário\n");
        printf("3. Excluir usuário\n");
        printf("4. Buscar usuário por email\n");
        printf("5. Imprimir todos os usuários\n");
        printf("0. Sair\n");

        scanf(" %c", &opcao);

        switch (opcao)
        {
        case '1':
            incluirUsuario();
            break;
        case '2':
            editarUsuario();
            break;
        case '3':
            excluirUsuario();
            break;
        case '4':
            buscarUsuarioPorEmail();
            break;
        case '5':
            imprimirTodosUsuarios();
            break;
        case '0':
            printf("Saindo do programa. Até mais!\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != '0');

    return 0;
}