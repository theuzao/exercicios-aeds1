import os

def contar_exercicios(caminho):
    total_arquivos = 0  # Variável para contar os arquivos
    extensoes_validas = (".c", ".cpp", ".py", ".java")  # Ajuste as extensões conforme necessário
    ignorar_arquivos = ["README.md", "contar_exercicios.py"]  # Lista de arquivos a serem ignorados

    for root, dirs, files in os.walk(caminho):
        for file in files:
            # Conta apenas os arquivos com extensões válidas e que não estão na lista de ignorados
            if file.endswith(extensoes_validas) and file not in ignorar_arquivos:
                total_arquivos += 1
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
