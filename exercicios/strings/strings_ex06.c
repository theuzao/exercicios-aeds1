#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char senha[9]; // Máximo de 8 caracteres + '\0'
} Usuario;

int main() {
    Usuario usuarios[20];

    // Lê os dados dos usuários
    for (int i = 0; i < 20; i++) {
        printf("Digite o nome do usuário %d: ", i + 1);
        scanf(" %[^\n]", usuarios[i].nome);
        printf("Digite a senha do usuário %d (8 caracteres): ", i + 1);
        scanf(" %8s", usuarios[i].senha);
    }

    char nome[50], senha[9];

    // Verifica as credenciais
    while (1) {
        printf("Digite o nome (ou FIM para encerrar): ");
        scanf(" %[^\n]", nome);
        if (strcmp(nome, "FIM") == 0) {
            break;
        }

        printf("Digite a senha: ");
        scanf(" %8s", senha);

        int nomeCorreto = 0, senhaCorreta = 0;
        for (int i = 0; i < 20; i++) {
            if (strcmp(nome, usuarios[i].nome) == 0) {
                nomeCorreto = 1;
                if (strcmp(senha, usuarios[i].senha) == 0) {
                    senhaCorreta = 1;
                }
                break;
            }
        }

        if (nomeCorreto && senhaCorreta) {
            printf("Dados corretos\n");
        } else if (nomeCorreto) {
            printf("Senha incorreta\n");
        } else if (senhaCorreta) {
            printf("Nome incorreto\n");
        } else {
            printf("Nome e senha incorretos\n");
        }
    }

    return 0;
}
