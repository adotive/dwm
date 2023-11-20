# dwm - Dynamic Window Manager

Este é o repositório do **dwm**, um gerenciador de janelas dinâmico para o X. O **dwm** é conhecido por ser rápido, leve e altamente personalizável, oferecendo controle total sobre o ambiente de trabalho.

## Recursos Principais

- **Gerenciamento Dinâmico de Janelas:** O **dwm** gerencia janelas de forma dinâmica, permitindo um fluxo de trabalho eficiente.
- **Personalização Extensiva:** É altamente personalizável por meio de arquivos de configuração em C, o que possibilita ajustá-lo de acordo com suas preferências.
- **Múltiplos Layouts:** Oferece vários layouts predefinidos e suporte para criar layouts personalizados.
- **Baixo Uso de Recursos:** Desenhado para consumir pouca memória e ser leve em termos de recursos do sistema.

## Instalação

### Pré-requisitos

Antes de compilar e instalar o **dwm**, certifique-se de ter os seguintes pacotes instalados:

- `libx11-dev`
- `libxft-dev`
- `libxinerama-dev`

### Compilação e Instalação

1. Clone este repositório:

```bash
git clone https://github.com/seu_usuario/dwm.git
```

2. Navegue até o diretório dwm:

```bash
cd dwm
```

3. Edite o arquivo `config.h` para configurar o **dwm** conforme suas preferências.

4. Compile e instale o **dwm**:

```bash
sudo make clean install
```

## Uso

Para iniciar o **dwm**, adicione o seguinte comando ao seu arquivo `.xinitrc`:

```bash
exec dwm
```

Em seguida, inicie o X server:

```bash
startx
```
