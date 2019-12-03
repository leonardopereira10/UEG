#!/bin/bash

# Verifica se diretório de instalação já existe
if [ -e "/opt/SCM/" ]
then
	# Se existe, apagar
	sudo rm -r /opt/SCM/
fi

# Move os arquivos para o diretório de instalação
echo -e "Movendo arquivos para o diretório de instalação..."
sudo cp -r SCM/ /opt/
sudo chown -R $USER:$USER /opt/SCM/

# Linkar executável no path do sistema
echo -e "Criando link simbólico..."
sudo ln -rs /opt/SCM/SCM_bin /bin/scm
sleep 1s

# Mover arquivos de icone e desktop para suas respectivas pastas
echo -e "Criando lançador..."
sudo cp scm.png /usr/share/icons/
sudo cp scm.desktop /usr/share/applications/
sleep 1s

echo -e "Instalação concluída com sucesso"
