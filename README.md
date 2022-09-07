## Projeto do Trabalho de Simulador de Temperatura para VSCode

Para este projeto compilar é preciso que a pasta do MinGW esteja na variável de ambiente do Windows.

Antes de compilar crie a pasta bin na raiz do projeto.

Para compilar rode o arquivo **build.bat** no terminal e na raiz do projeto.

```powershell
.\build.bat
```

O *script* apenas chama o **g++.exe**  e compila o executável no diretório **./bin/trabalho.exe**.

Copie as DLLs do simulador para a pasta bin.

É necessário que exista a pasta **logs** no diretório de execução do programa, para salvar o arquivo de exemplo. Pode ser na raiz ou na pasta bin, depende de onde for executar o programa.

Caso não consiga instalar o MingGW e baixar os pocates do compilador manualmente, uma alternativa é instalar diretamente o Dev-Cpp e adicionar na variável de ambiente do windows o MinGW do diretório do Dev-Cpp (C:/Program Files/Dev-Cpp/MinGW/bin).

Link para download do vscode: [https://code.visualstudio.com/docs/?dv=win64user](https://code.visualstudio.com/docs/?dv=win64user). 

Link Dev-Cpp: [https://sourceforge.net/projects/orwelldevcpp/](https://sourceforge.net/projects/orwelldevcpp/)