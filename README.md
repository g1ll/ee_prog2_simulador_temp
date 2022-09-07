## Projeto para o Controle do Simulador de Temperatura

Este projeto pode ser aberto com o VSCode (Recomendado) ou qualquer outro editor de código, para compilar é preciso acesso ao prompt de comandos (CMD ou PowerShell).

Para este projeto compilar é preciso que a pasta do MinGW esteja na variável de ambiente do Windows.

Antes de compilar crie a pasta bin na raiz do projeto.

Para compilar rode o arquivo **build.bat** no terminal e na raiz do projeto.

```powershell
.\build.bat
```

O *script* apenas chama o **g++.exe**  e compila o executável no diretório **./bin/trabalho.exe**.

Copie as DLLs do simulador para a pasta bin.

É necessário que exista a pasta **logs** no diretório de execução do programa, pasta usada para salvar o arquivo csv de exemplo. Pode ser na raiz do projeto ou na pasta bin, depende de onde o programa for executado.

Para executar o programa  compilado rode o seguinte comando:

```powershell
.\bin\trabalho.exe
```

Caso não consiga instalar o MingGW e baixar os pocates do compilador manualmente, uma alternativa é instalar diretamente o Dev-Cpp e adicionar na variável de ambiente do windows o MinGW do diretório do Dev-Cpp (C:/Program Files/Dev-Cpp/MinGW/bin).

Link para download do vscode: [https://code.visualstudio.com/docs/?dv=win64user](https://code.visualstudio.com/docs/?dv=win64user). 

Link Dev-Cpp: [https://sourceforge.net/projects/orwelldevcpp/](https://sourceforge.net/projects/orwelldevcpp/)