import os

def contar_exercicios(caminho):
    total_arquivos = 0  # Variável para contar os arquivos
    for root, dirs, files in os.walk(caminho):
        total_arquivos += len(files)  # Soma os arquivos encontrados
    return total_arquivos

if __name__ == "__main__":
    # Caminho para a pasta 'exercicios' dentro do repositório clonado
    caminho_diretorio = "../exercicios"  # Caminho relativo à pasta 'scripts'

    # Verifica se o diretório existe
    if not os.path.exists(caminho_diretorio):
        print(f"Diretório '{caminho_diretorio}' não encontrado.")
    else:
        total = contar_exercicios(caminho_diretorio)
        print(f"Total de exercícios no repositório: {total}")

